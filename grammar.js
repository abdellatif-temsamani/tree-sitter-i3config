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
    statement: ($) =>
      choice($.comment, $.include, $.font, $.binding, $.mode),

    // comment //
    comment: () => token(seq("#", /.*/)),

    // include //
    include: ($) => seq("include", $.include_source),
    include_source: () => /[^\s][^\$][\w~\/.*-]*[^\s\n]/,

    /// TODO: stopped here https://i3wm.org/docs/userguide.html#floating_modifier

    // bindsym | bindcode //
    binding: ($) =>
      seq(
        choice("bindsym", "bindcode"),
        repeat($.keymap_flags),
        $.keymap,
        $.value,
      ),
    keymap: ($) => seq(optional($.variable), $.keymap_trigger),
    keymap_trigger: () => /[a-zA-Z0-9.+]+/,
    keymap_flags: () =>
      choice(
        "--release",
        "--release",
        "--border",
        "--whole-window",
        "--exclude-titlebar",
      ),
    //

    // font //
    font: ($) =>
      seq("font", $.font_name, optional($.number), optional($.unit)),
    font_name: () => /[^\s][^\d][^\n]+\ /,
    font_size: () => /\d+(ppt|px)[^\s\n]/,

    // mode //
    mode: ($) =>
      seq(
        "mode",
        field("name", $.mode_name), // Mark the mode being defined
        $.mode_body,
      ),
    mode_name: () => /"([^"][^\n]+)?"/,
    mode_body: ($) => seq("{", repeat($.statement), "}"),

    // values //
    variable: () => token(field("reference", /\$[a-zA-Z0-9_]+/)),
    arg: () => /[^\s"][^-][^-][^\n\s]*/,
    flag: () => /--[^\s"][^\n\s]*/,
    unit: () => /(px|ppt)/,
    number: () => /\d+/,
    quoted_string: () => /"([^"][^\n]+)?"/,

    // temp //
    // TODO: replace this with subcomnads
    value: () => /[^\s][^\n]+/,
  },
});
