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
        source_file: ($) => repeat($.statement),

        // statement //
        statement: ($) => choice($.comment, $.include, $.command),

        // comment //
        comment: () => token(seq("#", /.*/)),

        // include //
        include: ($) => seq("include", $.include_source),
        include_source: () => /[^\s][^\$][\w~\/.*-]*[^\s\n]/,

        // commands //
        command: ($) => choice($.font, $.binding),

        // bindsym | bindcode //
        binding: ($) =>
            seq(choice("bindsym", "bindcode"), optional("--release"), $.keymap, $.value),
        keymap: ($) => seq(optional($.variable), $.keymap_trigger),
        keymap_trigger: () => /[a-zA-Z0-9.+]+/,

        // font //
        font: ($) =>
            seq("font", $.font_name, optional($.number), optional($.unit)),
        font_name: () => /[^\s][^\d][^\n]+\ /,
        font_size: () => /\d+(ppt|px)[^\s\n]/,

        // values //
        variable: () => token(field("reference", /\$[a-zA-Z0-9_]+/)),
        arg: () => /[^\s"][^-][^-][^\n\s]*/,
        flag: () => /--[^\s"][^\n\s]*/,
        unit: () => /(px|ppt)/,
        number: () => /\d+/,

        // temp //
        // TODO: replace this with subcomnads
        value: () => /[^\s][^\n]+/,
    },
});
