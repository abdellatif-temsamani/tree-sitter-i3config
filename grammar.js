/**
 * @file parser for i3wm parser
 * @author abdellatif-temsamani <contact@abdellatif.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "i3config",

    rules: {
        source_file: ($) => repeat1($.statement),

        // A statement can be a comment, a binding, a command, or an assign statement
        statement: ($) =>
            choice(
                $.comment,
                $.binding,
                $.command,
                $.assign,
                $.set,
                $.set_from_resource,
                $.mode,
                $.for_window,
                $.font,
                $.client,
            ),

        // comment //
        comment: () => token(seq("#", /.*/)),

        // commands //
        command: ($) =>
            seq(
                choice(
                    "exec",
                    "exec_always",
                    "floating_modifier",
                    "tiling_drag",
                ),
                repeat(choice($.flag, $.arg)),
                optional(repeat($.quoted_string)),
            ),

        binding: ($) => seq(choice("bindsym", "bindcode"), $.keymap, $.value),
        keymap: ($) => seq(optional($.variable), $.keymap_trigger),
        keymap_trigger: () => /[a-zA-Z0-9.+]+/,

        // An assign statement has the format: "assign [class="ClassName"] number $ws10"
        assign: ($) => seq("assign", $.condition, "number", $.variable),

        // client //
        client: ($) => seq("client", $.property, repeat($.variable)),
        property: () => /\.\w+/,

        // font //
        font: ($) => seq("font", $.font_name, $.number, optional($.unit)),
        font_name: () => /[^\s][^\d][^\n]+\ /,

        // sets //

        set: ($) =>
            seq("set", field("name", $.variable), field("value", $.value)),

        set_from_resource: ($) =>
            seq(
                "set_from_resource",
                field("name", $.variable),
                $.resource,
                field("value", $.value),
            ),

        // for window //
        for_window: ($) => seq("for_window", $.condition, $.value),
        condition: ($) => choice($.class_condition, $.title_condition),
        class_condition: ($) => seq("[class=", $.quoted_string, "]"),
        title_condition: ($) => seq("[title=", $.quoted_string, "]"),

        value: () => /[^\s][^\n]+/,

        value_item: ($) =>
            seq(choice($.arg, $.flag, $.variable, $.quoted_string)),
        arg: () => /[^\s"][^-][^-][^\n\s]*/,
        flag: () => /--[^\s"][^\n\s]*/,
        variable: () => token(field("reference", /\$[a-zA-Z0-9_]+/)),
        quoted_string: () => /"([^"][^\n]+)?"/,

        // type //
        resource: () => /[a-zA-Z0-9._-]+/,
        number: () => /\d+/,
        unit: () => /(px|ppt)/,
        bool: () => /(on|off)/,

        // mode /
        mode: ($) =>
            seq(
                "mode",
                field("name", $.mode_name), // Mark the mode being defined
                $.mode_body,
            ),
        mode_name: ($) => $.quoted_string,
        mode_body: ($) => seq("{", repeat($.statement), "}"),
    },
});
