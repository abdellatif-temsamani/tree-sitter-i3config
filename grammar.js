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
        choice(field("identifier", $.identifier), $.value),
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
        repeat(field("identifier", $.identifier)),
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
    assign_output: ($) => seq("output", $._output_value),
    _output_value: ($) =>
      choice(
        $._directions,
        "primary",
        "nonprimary",
        "primary",
        "nonprimary",
      ),

    // definitions //
    _definition: ($) => choice($.set, $.set_from_resource),

    // set_from_resource  //
    set_from_resource: ($) =>
      seq(
        "set_from_resource",
        field("identifier", $.identifier),
        field("resource", $.set_resource),
        field("fallback", $.set_resource_fallback),
      ),
    set_resource: () => /i3wm\.[^\s]*/,
    set_resource_fallback: () => /#[^\s\n]*/,

    // set //
    set: ($) =>
      seq(
        /set[^_]/,
        field("identifier", $.identifier),
        field("value", $.value),
      ),

    // no_focus //
    no_focus: ($) => seq("no_focus", $.criteria),

    // for_window //
    for_window: ($) => seq("for_window", repeat1($.criteria), $._value),

    // criteria //
    criteria: ($) => seq("[", repeat1($._criteria_value), "]"),
    _criteria_value: ($) =>
      seq(/\w+/, optional(seq("=", field("value", $.quoted_string)))),

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
      choice(field("identifier", $.identifier), /\w+/),

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
        optional($.criteria),
        repeat1($._value),
      ),
    keymap: ($) =>
      seq(optional(field("identifier", $.identifier)), $.keymap_trigger),
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
    identifier: () => /\$[a-zA-Z0-9_]+[^\n]/,
    unit: ($) => choice($.px_unit, $.ppt_unit),
    px_unit: () => "px",
    ppt_unit: () => "ppt",
    number: () => /(\+|-)?\d+/,
    _directions: () => choice("left", "right", "up", "down"),
    quoted_string: () =>
      token(seq('"', repeat(choice(/[^"\n]/, '\\"')), '"')),

    _value: ($) =>
      seq(
        optional("\\"),
        choice(
          seq("mode", field("name", $.mode_name)),
          field("identifier", $.identifier),
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
    _i3_commands: ($) =>
      choice(
        "kill",
        "restart",
        $.sticky,
        $.focus,
        $.split,
        $.layout,
        $.window_mode,
        $.move,
        $.swap,
        $.workspace,
      ),

    // workspace //
    workspace: ($) => seq("workspace", $.workspace_value),
    workspace_value: ($) =>
      choice(
        "back_and_forth",
        $._workspace_assign_output,
        $._workspace_switch,
      ),

    // switch workspace //
    _workspace_switch: ($) =>
      choice(
        choice("next", "prev", "next_on_output", "prev_on_output"),
        seq(
          optional("--no-auto-back-and-forth"),
          seq(optional("number"), $._workspace_id),
        ),
      ),

    _workspace_assign_output: ($) =>
      seq($._workspace_id, "output", $.value),

    _workspace_id: ($) =>
      choice($.number, field("identifier", $.identifier)),

    // swap //
    //NOTE: not working if its working
    swap: ($) =>
      seq(
        "swap",
        "container",
        "with",
        field("target", choice("id", "con_id", "mark")),
        field("value", $.value),
      ),

    // move //
      // move //
    move: ($) =>
      seq(
        "move",
        choice(
          "scratchpad", // Directly move to the scratchpad
          seq(
            optional("--no-auto-back-and-forth"), // Optional flag to disable auto back-and-forth behavior
            optional(choice("window", "container", "workspace")), // Specifies the target type to move
            optional("to"), // Optional keyword "to" for grammatical structure
            field("value", $.move_value), // Field capturing the move target value
          ),
        ),
      ),
    move_value: ($) =>
      choice(
        $._move_directional, // Matches directional moves (e.g., left, right, up, down)
        $._move_center, // Matches "absolute position center" moves
        $._move_position, // Matches moves to a specific position or mouse
        $._move_output, // Matches moves to an output direction (e.g., "output left")
        $._move_workspace // Matches moves to specific workspaces
      ),
    _move_directional: ($) => seq($._directions, optional($._move_amount)), // Directional moves with optional amount
    _move_center: () => seq(optional("absolute"), "position center"), // Moves to the absolute center if specified
    _move_position: ($) =>
      seq("position", choice(repeat($._move_amount), "mouse")), // Moves to a position specified by amount or mouse
    _move_output: ($) => seq("output", $._directions), // Matches moves to a specific output direction
    _move_workspace: ($) =>
      seq(
        "workspace",
        "number",
        $.workspace_number // Matches workspace number (e.g., $ws1, $ws2)
      ),
    _move_amount: ($) => seq($.number, optional($.unit)), // Amount of movement specified by a number and optional unit
    workspace_number: ($) => choice($.number, field("identifier", $.identifier)),


    // fullscreen | floating //
    window_mode: () => seq(choice("fullscreen", "floating"), "toggle"),

    // layout //
    layout: ($) => seq("layout", $.layout_value),
    layout_value: ($) =>
      choice(seq(optional("toggle"), repeat1($.layout_mode)), "default"),
    layout_mode: () =>
      choice("tabbed", "stacking", "split", "splitv", "splith", "all"),

    // split //
    split: ($) => seq("split", $.split_value),
    split_value: () => choice("vertical", "horizontal", "toggle", "v", "h"),

    // focus //
    focus: ($) =>
      seq("focus", optional($.criteria), field("value", $.focus_value)),
    focus_value: ($) =>
      choice(
        $._focus_direction,
        $._focus_workspace,
        $._focus_output,
        "parent",
        "mode_toggle",
      ),
    _focus_direction: ($) => $._directions,
    _focus_output: ($) => seq("output", repeat1($._output_value)),
    _focus_workspace: ($) =>
      seq(
        "workspace",
        choice($.number, field("identifier", $.identifier)),
      ),

    // sticky //
    sticky: ($) => seq("sticky", field("value", $.sticky_value)),
    sticky_value: () => choice("enable", "disable", "toggle"),
  },
});
