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
        source_file: ($) => repeat($._statement),

        // statement //
        _statement: ($) =>
            seq(
                choice(
                    $.comment,
                    $.include,
                    $.font,
                    $.binding,
                    $.mode,
                    $.floating_modifier,
                    $.floating_size,
                    $.default_orientation,
                    $.workspace_layout,
                    $.title_align,
                    $.border,
                    $.hide_edge_borders,
                    $.for_window,
                ),
                /\n/,
            ),

        // comment //
        comment: () => token(seq("#", /.*/)),

        // for_window //
        for_window: ($) =>
            seq("for_window", repeat1($.criteria), repeat1($._value)),

        // criteria //
        criteria: ($) =>
            seq(
                "[",
                choice(
                    $.class_criteria,
                    $.title_criteria,
                    $.all_criteria,
                    $.floating_criteria,
                    $.window_role_criteria,
                ),
                "]",
            ),

        all_criteria: () => "all",

        floating_criteria: () => "floating",

        class_criteria: ($) => seq("class=", field("class", $.quoted_string)),

        window_role_criteria: ($) =>
            seq("window_role=", field("window_role", $.quoted_string)),

        title_criteria: ($) => seq("title=", field("title", $.quoted_string)),

        /// hide_edge_borders vertical///
        hide_edge_borders: ($) =>
            seq("hide_edge_borders", field("value", $.hide_edge_borders_value)),
        hide_edge_borders_value: () =>
            choice(
                "none",
                "vertical",
                "horizontal",
                "both",
                "smart",
                "smart_no_gaps",
            ),

        // border //
        border: ($) =>
            seq(
                choice("default_floating_border", "default_border", "border"),
                field("mode", $.border_value),
                optional(field("value", $.number)),
            ),
        border_value: () => choice("normal", "none", "pixel"),

        // title_align //
        title_align: ($) =>
            seq("title_align", field("value", $.title_align_value)),
        title_align_value: () => choice("left", "center", "right"),

        // workspace_layout //
        workspace_layout: ($) =>
            seq("workspace_layout", field("value", $.workspace_layout_value)),
        workspace_layout_value: () => choice("default", "stacking", "tabbed"),

        // default_orientation //
        default_orientation: ($) =>
            seq(
                "default_orientation",
                field("value", $.default_orientation_value),
            ),
        default_orientation_value: () =>
            choice("horizontal", "vertical", "auto"),

        // include //
        include: ($) => seq("include", field("source", $.include_source)),
        include_source: () => /[^\s][^\$][\w~\/.*-]*[^\s\n]/,

        // floating_modifier //
        floating_modifier: ($) =>
            seq("floating_modifier", field("value", $.floating_modifier_value)),
        floating_modifier_value: ($) =>
            choice(field("reference", $.variable), /\w+/),

        // floating_size //
        floating_size: ($) =>
            seq(
                choice("floating_minimum_size", "floating_maximum_size"),
                $.number,
                $.floating_size_op,
                $.number,
            ),
        floating_size_op: () => "x",

        // bindsym | bindcode //
        binding: ($) =>
            seq(
                choice("bindsym", "bindcode"),
                repeat($.keymap_flags),
                $.keymap,
                repeat($.criteria),
                repeat1($._value),
            ),
        keymap: ($) =>
            seq(optional(field("reference", $.variable)), $.keymap_trigger),
        keymap_trigger: () => /[a-zA-Z0-9.+]+/,
        keymap_flags: () =>
            choice(
                "--release",
                "--release",
                "--border",
                "--whole-window",
                "--exclude-titlebar",
            ),

        // font //
        font: ($) =>
            seq(
                "font",
                $.font_name,
                optional($.number),
                optional(field("name", $.unit)),
            ),
        font_name: () => /[^\s][^\d][^\n]+\ /,
        font_size: () => /\d+(ppt|px)[^\s\n]/,

        // mode //
        mode: ($) =>
            seq(
                "mode",
                field("name", $.mode_name), // Mark the mode being defined
                field("body", $.mode_body),
            ),
        mode_name: () => /"([^"][^\n]+)?"/,
        mode_body: ($) => seq("{", repeat($._statement), "}"),

        // values //
        variable: () => /\$[a-zA-Z0-9_]+/,
        unit: ($) => choice($.px_unit, $.ppt_unit),
        px_unit: () => "px",
        ppt_unit: () => "ppt",
        number: () => /(\+|-)?\d+/,
        quoted_string: () =>
            token(seq('"', repeat(choice(/[^"\n]/, '\\"')), '"')),

        _value: ($) =>
            seq(
                choice(
                    seq("mode", field("reference_mode", $.mode_name)),
                    field("reference", $.variable),
                    field("unit", $.unit),
                    $.border,
                ),
                /\n/,
            ),
    },
});
