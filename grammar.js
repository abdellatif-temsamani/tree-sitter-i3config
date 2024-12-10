/**
 * @file parser for i3wm parser
 * @author abdellatif-temsamani <contact@abdellatif.dev>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/// TODO: STOPPED HERE https://i3wm.org/docs/userguide.html#_focus_follows_mouse
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
          $.no_focus,
          $._definition,
          $.assign,
          $.exec,
          $.exec_always,
          $.workspace,
          $.client,
          $.ipc_socket,
          $.focus_follows_mouse,
          $.mouse_warping,
          $.popup_during_fullscreen,
          $.focus_wrapping,
          $.force_xinerama,
          $.workspace_auto_back_and_forth,
          $.force_display_urgency_hint,
          $.focus_on_window_activation,
          $.show_marks,
          $.tiling_drag,
          $.gaps,
          $.smart_gaps,
          $.smart_borders,
        ),
        /\n/,
      ),

    // comment //
    comment: () => token(seq("#", /.*/)),

    // smart_borders //
    smart_borders: ($) => seq("smart_borders", $.smart_borders_value),
    smart_borders_value: () => choice("on", "off", "inverse_outer"),

    // smart_gaps //
    smart_gaps: ($) => seq("smart_gaps", $.smart_gaps_value),
    smart_gaps_value: () => choice("on", "off", "inverse_outer"),

    // gaps //
    gaps: ($) =>
      seq(
        "gaps",
        repeat1($.gaps_option),
        field("value", $.number),
        optional($.px_unit),
      ),
    gaps_option: () =>
      choice(
        "outer",
        "inner",

        "horizontal",
        "vertical",
        "top",
        "left",
        "bottom",
        "right",

        "plus",
        "minus",
        "set",

        "all",
        "current",
      ),

    // tiling_drag //
    tiling_drag: ($) => seq("tiling_drag", $.tiling_drag_value),
    tiling_drag_value: ($) =>
      choice("off", $.tiling_drag_swap, $.tiling_drag_modifier),
    tiling_drag_swap: ($) =>
      seq(
        "swap_modifier",
        choice(field("identifier", $.variable), $.value),
      ),
    tiling_drag_modifier: () =>
      seq(choice("modifier", "titlebar"), choice("modifier", "titlebar")),

    // show_marks //
    show_marks: ($) => seq("show_marks", $.show_marks_value),
    show_marks_value: () => choice("yes", "no"),

    // focus_on_window_activation //
    focus_on_window_activation: ($) =>
      seq(
        "focus_on_window_activation",
        $.focus_on_window_activation_value,
      ),
    focus_on_window_activation_value: () =>
      choice("smart", "urgent", "focus", "none"),

    // force_display_urgency_hint //
    force_display_urgency_hint: ($) =>
      seq("force_display_urgency_hint", field("value", $.number), "ms"),

    // workspace_auto_back_and_forth //
    workspace_auto_back_and_forth: ($) =>
      seq(
        "workspace_auto_back_and_forth",
        $.workspace_auto_back_and_forth_value,
      ),
    workspace_auto_back_and_forth_value: () => choice("yes", "no"),

    //force_xinerama //
    force_xinerama: ($) => seq("force_xinerama", $.force_xinerama_value),
    force_xinerama_value: () => choice("yes", "no"),

    // focus_wrapping //
    focus_wrapping: ($) => seq("focus_wrapping", $.focus_wrapping_value),
    focus_wrapping_value: () => choice("yes", "no", "force", "workspace"),

    // popup_during_fullscreen //
    popup_during_fullscreen: ($) =>
      seq("popup_during_fullscreen", $.popup_during_fullscreen_value),
    popup_during_fullscreen_value: () =>
      choice("smart", "ignore", "leave_fullscreen", "all"),

    // mouse_warping  //
    mouse_warping: ($) => seq("mouse_warping", $.value),

    //focus_follows_mouse //
    focus_follows_mouse: ($) =>
      seq(
        "focus_follows_mouse",
        field("follow_mouse_value", $.focus_follows_mouse_value),
      ),
    focus_follows_mouse_value: () => choice("yes", "no"),

    // ipc-socket //
    ipc_socket: ($) => seq("ipc-socket", $.value),
    // client //
    client: ($) =>
      seq(
        "client.",
        field("property", $.property),
        repeat(field("identifier", $.variable)),
      ),
    property: () =>
      choice(
        "focused",
        "focused_inactive",
        "unfocused",
        "urgent",
        "placeholder",
        "background",
      ),

    // workspace //
    workspace: ($) => seq("workspace", choice($.workspace_assign_output)),
    workspace_assign_output: ($) => seq($._workspace_id, "output", $.value),
    _workspace_id: ($) => choice($.number, field("identifier", $.variable)),

    // exec //
    exec: ($) =>
      seq("exec", optional("--no-startup-id"), field("command", $.value)),
    exec_always: ($) =>
      seq(
        "exec_always",
        optional("--no-startup-id"),
        field("command", $.value),
      ),

    // assign //
    assign: ($) =>
      seq(
        "assign",
        $.criteria,
        optional("→"),
        choice($.assign_workspace, $.assign_output),
      ),
    assign_workspace: ($) => seq(optional("number"), $._workspace_id),
    assign_output: () =>
      seq(
        "output",
        choice(
          "left",
          "right",
          "up",
          "down",
          "primary",
          "nonprimary",
          "primary",
          "nonprimary",
        ),
      ),

    // definitions //
    _definition: ($) => choice($.set, $.set_from_resource),

    // set_from_resource  //
    set_from_resource: ($) =>
      seq(
        "set_from_resource",
        field("identifier", $.variable),
        field("resource", $.set_resource),
        field("fallback", $.set_resource_fallback),
      ),
    set_resource: () => /i3wm\.[^\s]*/,
    set_resource_fallback: () => /#[^\s\n]*/,

    // set //
    set: ($) =>
      seq(
        /set[^_]/,
        field("identifier", $.variable),
        field("value", $.value),
      ),

    // no_focus //
    no_focus: ($) => seq("no_focus", $.criteria),

    // for_window //
    for_window: ($) =>
      seq("for_window", repeat1($.criteria), repeat1($._value)),

    // criteria //
    criteria: ($) =>
      seq(
        "[",
        repeat1(
          choice(
            $.class_criteria,
            $.title_criteria,
            $.all_criteria,
            $.floating_criteria,
            $.window_role_criteria,
          ),
        ),
        "]",
      ),

    all_criteria: () => "all",

    floating_criteria: () => "floating",

    class_criteria: ($) => seq("class=", field("class", $.quoted_string)),

    window_role_criteria: ($) =>
      seq("window_role=", field("window_role", $.quoted_string)),

    title_criteria: ($) => seq("title=", field("title", $.quoted_string)),

    /// hide_edge_borders vertical //
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
      choice(field("identifier", $.variable), /\w+/),

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
        optional(repeat($.keymap_flags)),
        $.keymap,
        repeat($.criteria),
        repeat1($._value),
      ),
    keymap: ($) =>
      seq(optional(field("identifier", $.variable)), $.keymap_trigger),
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
        optional("\\"),
        choice(
          seq("mode", field("name", $.mode_name)),
          field("identifier", $.variable),
          field("unit", $.unit),
          $.border,
          $.exec,
          $.gaps,
          $._i3_commands,
        ),
        /\n/,
      ),
    value: () => /[^\s][^\n]+/,

    // i3 commands //
    _i3_commands: ($) => choice("kill", "restart", $.sticky, $.focus),

    focus: ($) => seq("focus", field("value", $.focus_value)),
    focus_value: () => choice("left", "right", "up", "down"),

    sticky: ($) => seq("sticky", field("value", $.sticky_value)),
    sticky_value: () => choice("enable", "disable", "toggle"),
  },
});
