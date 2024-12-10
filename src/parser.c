#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 179
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 0
#define TOKEN_COUNT 106
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 31

enum ts_symbol_identifiers {
  aux_sym__statement_token1 = 1,
  sym_comment = 2,
  anon_sym_tiling_drag = 3,
  anon_sym_off = 4,
  anon_sym_swap_modifier = 5,
  anon_sym_modifier = 6,
  anon_sym_titlebar = 7,
  anon_sym_show_marks = 8,
  anon_sym_yes = 9,
  anon_sym_no = 10,
  anon_sym_focus_on_window_activation = 11,
  anon_sym_smart = 12,
  anon_sym_urgent = 13,
  anon_sym_focus = 14,
  anon_sym_none = 15,
  anon_sym_force_display_urgency_hint = 16,
  anon_sym_ms = 17,
  anon_sym_workspace_auto_back_and_forth = 18,
  anon_sym_force_xinerama = 19,
  anon_sym_focus_wrapping = 20,
  anon_sym_force = 21,
  anon_sym_workspace = 22,
  anon_sym_popup_during_fullscreen = 23,
  anon_sym_ignore = 24,
  anon_sym_leave_fullscreen = 25,
  anon_sym_all = 26,
  anon_sym_mouse_warping = 27,
  anon_sym_focus_follows_mouse = 28,
  anon_sym_ipc_DASHsocket = 29,
  anon_sym_client_DOT = 30,
  anon_sym_focused = 31,
  anon_sym_focused_inactive = 32,
  anon_sym_unfocused = 33,
  anon_sym_placeholder = 34,
  anon_sym_background = 35,
  anon_sym_output = 36,
  anon_sym_exec = 37,
  anon_sym_DASH_DASHno_DASHstartup_DASHid = 38,
  anon_sym_exec_always = 39,
  anon_sym_assign = 40,
  anon_sym_u2192 = 41,
  anon_sym_number = 42,
  anon_sym_left = 43,
  anon_sym_right = 44,
  anon_sym_up = 45,
  anon_sym_down = 46,
  anon_sym_primary = 47,
  anon_sym_nonprimary = 48,
  anon_sym_set_from_resource = 49,
  sym_set_resource = 50,
  sym_set_resource_fallback = 51,
  aux_sym_set_token1 = 52,
  anon_sym_no_focus = 53,
  anon_sym_for_window = 54,
  anon_sym_LBRACK = 55,
  anon_sym_RBRACK = 56,
  sym_floating_criteria = 57,
  anon_sym_class_EQ = 58,
  anon_sym_window_role_EQ = 59,
  anon_sym_title_EQ = 60,
  anon_sym_hide_edge_borders = 61,
  anon_sym_vertical = 62,
  anon_sym_horizontal = 63,
  anon_sym_both = 64,
  anon_sym_smart_no_gaps = 65,
  anon_sym_default_floating_border = 66,
  anon_sym_default_border = 67,
  anon_sym_border = 68,
  anon_sym_normal = 69,
  anon_sym_pixel = 70,
  anon_sym_title_align = 71,
  anon_sym_center = 72,
  anon_sym_workspace_layout = 73,
  anon_sym_default = 74,
  anon_sym_stacking = 75,
  anon_sym_tabbed = 76,
  anon_sym_default_orientation = 77,
  anon_sym_auto = 78,
  anon_sym_include = 79,
  sym_include_source = 80,
  anon_sym_floating_modifier = 81,
  aux_sym_floating_modifier_value_token1 = 82,
  anon_sym_floating_minimum_size = 83,
  anon_sym_floating_maximum_size = 84,
  sym_floating_size_op = 85,
  anon_sym_bindsym = 86,
  anon_sym_bindcode = 87,
  sym_keymap_trigger = 88,
  anon_sym_DASH_DASHrelease = 89,
  anon_sym_DASH_DASHborder = 90,
  anon_sym_DASH_DASHwhole_DASHwindow = 91,
  anon_sym_DASH_DASHexclude_DASHtitlebar = 92,
  anon_sym_font = 93,
  sym_font_name = 94,
  anon_sym_mode = 95,
  sym_mode_name = 96,
  anon_sym_LBRACE = 97,
  anon_sym_RBRACE = 98,
  sym_variable = 99,
  sym_px_unit = 100,
  sym_ppt_unit = 101,
  sym_number = 102,
  sym_quoted_string = 103,
  anon_sym_BSLASH = 104,
  sym_value = 105,
  sym_source_file = 106,
  sym__statement = 107,
  sym_tiling_drag = 108,
  sym_tiling_drag_value = 109,
  sym_tiling_drag_swap = 110,
  sym_tiling_drag_modifier = 111,
  sym_show_marks = 112,
  sym_show_marks_value = 113,
  sym_focus_on_window_activation = 114,
  sym_focus_on_window_activation_value = 115,
  sym_force_display_urgency_hint = 116,
  sym_workspace_auto_back_and_forth = 117,
  sym_workspace_auto_back_and_forth_value = 118,
  sym_force_xinerama = 119,
  sym_force_xinerama_value = 120,
  sym_focus_wrapping = 121,
  sym_focus_wrapping_value = 122,
  sym_popup_during_fullscreen = 123,
  sym_popup_during_fullscreen_value = 124,
  sym_mouse_warping = 125,
  sym_focus_follows_mouse = 126,
  sym_focus_follows_mouse_value = 127,
  sym_ipc_socket = 128,
  sym_client = 129,
  sym_property = 130,
  sym_workspace = 131,
  sym_workspace_assign_output = 132,
  sym__workspace_id = 133,
  sym_exec = 134,
  sym_exec_always = 135,
  sym_assign = 136,
  sym_assign_workspace = 137,
  sym_assign_output = 138,
  sym__definition = 139,
  sym_set_from_resource = 140,
  sym_set = 141,
  sym_no_focus = 142,
  sym_for_window = 143,
  sym_criteria = 144,
  sym_all_criteria = 145,
  sym_class_criteria = 146,
  sym_window_role_criteria = 147,
  sym_title_criteria = 148,
  sym_hide_edge_borders = 149,
  sym_hide_edge_borders_value = 150,
  sym_border = 151,
  sym_border_value = 152,
  sym_title_align = 153,
  sym_title_align_value = 154,
  sym_workspace_layout = 155,
  sym_workspace_layout_value = 156,
  sym_default_orientation = 157,
  sym_default_orientation_value = 158,
  sym_include = 159,
  sym_floating_modifier = 160,
  sym_floating_modifier_value = 161,
  sym_floating_size = 162,
  sym_binding = 163,
  sym_keymap = 164,
  sym_keymap_flags = 165,
  sym_font = 166,
  sym_mode = 167,
  sym_mode_body = 168,
  sym_unit = 169,
  sym__value = 170,
  aux_sym_source_file_repeat1 = 171,
  aux_sym_client_repeat1 = 172,
  aux_sym_for_window_repeat1 = 173,
  aux_sym_for_window_repeat2 = 174,
  aux_sym_criteria_repeat1 = 175,
  aux_sym_binding_repeat1 = 176,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [sym_comment] = "comment",
  [anon_sym_tiling_drag] = "tiling_drag",
  [anon_sym_off] = "off",
  [anon_sym_swap_modifier] = "swap_modifier",
  [anon_sym_modifier] = "modifier",
  [anon_sym_titlebar] = "titlebar",
  [anon_sym_show_marks] = "show_marks",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_focus_on_window_activation] = "focus_on_window_activation",
  [anon_sym_smart] = "smart",
  [anon_sym_urgent] = "urgent",
  [anon_sym_focus] = "focus",
  [anon_sym_none] = "none",
  [anon_sym_force_display_urgency_hint] = "force_display_urgency_hint",
  [anon_sym_ms] = "ms",
  [anon_sym_workspace_auto_back_and_forth] = "workspace_auto_back_and_forth",
  [anon_sym_force_xinerama] = "force_xinerama",
  [anon_sym_focus_wrapping] = "focus_wrapping",
  [anon_sym_force] = "force",
  [anon_sym_workspace] = "workspace",
  [anon_sym_popup_during_fullscreen] = "popup_during_fullscreen",
  [anon_sym_ignore] = "ignore",
  [anon_sym_leave_fullscreen] = "leave_fullscreen",
  [anon_sym_all] = "all",
  [anon_sym_mouse_warping] = "mouse_warping",
  [anon_sym_focus_follows_mouse] = "focus_follows_mouse",
  [anon_sym_ipc_DASHsocket] = "ipc-socket",
  [anon_sym_client_DOT] = "client.",
  [anon_sym_focused] = "focused",
  [anon_sym_focused_inactive] = "focused_inactive",
  [anon_sym_unfocused] = "unfocused",
  [anon_sym_placeholder] = "placeholder",
  [anon_sym_background] = "background",
  [anon_sym_output] = "output",
  [anon_sym_exec] = "exec",
  [anon_sym_DASH_DASHno_DASHstartup_DASHid] = "--no-startup-id",
  [anon_sym_exec_always] = "exec_always",
  [anon_sym_assign] = "assign",
  [anon_sym_u2192] = "\u2192",
  [anon_sym_number] = "number",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [anon_sym_primary] = "primary",
  [anon_sym_nonprimary] = "nonprimary",
  [anon_sym_set_from_resource] = "set_from_resource",
  [sym_set_resource] = "set_resource",
  [sym_set_resource_fallback] = "set_resource_fallback",
  [aux_sym_set_token1] = "set_token1",
  [anon_sym_no_focus] = "no_focus",
  [anon_sym_for_window] = "for_window",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_floating_criteria] = "floating_criteria",
  [anon_sym_class_EQ] = "class=",
  [anon_sym_window_role_EQ] = "window_role=",
  [anon_sym_title_EQ] = "title=",
  [anon_sym_hide_edge_borders] = "hide_edge_borders",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [anon_sym_both] = "both",
  [anon_sym_smart_no_gaps] = "smart_no_gaps",
  [anon_sym_default_floating_border] = "default_floating_border",
  [anon_sym_default_border] = "default_border",
  [anon_sym_border] = "border",
  [anon_sym_normal] = "normal",
  [anon_sym_pixel] = "pixel",
  [anon_sym_title_align] = "title_align",
  [anon_sym_center] = "center",
  [anon_sym_workspace_layout] = "workspace_layout",
  [anon_sym_default] = "default",
  [anon_sym_stacking] = "stacking",
  [anon_sym_tabbed] = "tabbed",
  [anon_sym_default_orientation] = "default_orientation",
  [anon_sym_auto] = "auto",
  [anon_sym_include] = "include",
  [sym_include_source] = "include_source",
  [anon_sym_floating_modifier] = "floating_modifier",
  [aux_sym_floating_modifier_value_token1] = "floating_modifier_value_token1",
  [anon_sym_floating_minimum_size] = "floating_minimum_size",
  [anon_sym_floating_maximum_size] = "floating_maximum_size",
  [sym_floating_size_op] = "floating_size_op",
  [anon_sym_bindsym] = "bindsym",
  [anon_sym_bindcode] = "bindcode",
  [sym_keymap_trigger] = "keymap_trigger",
  [anon_sym_DASH_DASHrelease] = "--release",
  [anon_sym_DASH_DASHborder] = "--border",
  [anon_sym_DASH_DASHwhole_DASHwindow] = "--whole-window",
  [anon_sym_DASH_DASHexclude_DASHtitlebar] = "--exclude-titlebar",
  [anon_sym_font] = "font",
  [sym_font_name] = "font_name",
  [anon_sym_mode] = "mode",
  [sym_mode_name] = "mode_name",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [sym_px_unit] = "px_unit",
  [sym_ppt_unit] = "ppt_unit",
  [sym_number] = "number",
  [sym_quoted_string] = "quoted_string",
  [anon_sym_BSLASH] = "\\",
  [sym_value] = "value",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_tiling_drag] = "tiling_drag",
  [sym_tiling_drag_value] = "tiling_drag_value",
  [sym_tiling_drag_swap] = "tiling_drag_swap",
  [sym_tiling_drag_modifier] = "tiling_drag_modifier",
  [sym_show_marks] = "show_marks",
  [sym_show_marks_value] = "show_marks_value",
  [sym_focus_on_window_activation] = "focus_on_window_activation",
  [sym_focus_on_window_activation_value] = "focus_on_window_activation_value",
  [sym_force_display_urgency_hint] = "force_display_urgency_hint",
  [sym_workspace_auto_back_and_forth] = "workspace_auto_back_and_forth",
  [sym_workspace_auto_back_and_forth_value] = "workspace_auto_back_and_forth_value",
  [sym_force_xinerama] = "force_xinerama",
  [sym_force_xinerama_value] = "force_xinerama_value",
  [sym_focus_wrapping] = "focus_wrapping",
  [sym_focus_wrapping_value] = "focus_wrapping_value",
  [sym_popup_during_fullscreen] = "popup_during_fullscreen",
  [sym_popup_during_fullscreen_value] = "popup_during_fullscreen_value",
  [sym_mouse_warping] = "mouse_warping",
  [sym_focus_follows_mouse] = "focus_follows_mouse",
  [sym_focus_follows_mouse_value] = "focus_follows_mouse_value",
  [sym_ipc_socket] = "ipc_socket",
  [sym_client] = "client",
  [sym_property] = "property",
  [sym_workspace] = "workspace",
  [sym_workspace_assign_output] = "workspace_assign_output",
  [sym__workspace_id] = "_workspace_id",
  [sym_exec] = "exec",
  [sym_exec_always] = "exec_always",
  [sym_assign] = "assign",
  [sym_assign_workspace] = "assign_workspace",
  [sym_assign_output] = "assign_output",
  [sym__definition] = "_definition",
  [sym_set_from_resource] = "set_from_resource",
  [sym_set] = "set",
  [sym_no_focus] = "no_focus",
  [sym_for_window] = "for_window",
  [sym_criteria] = "criteria",
  [sym_all_criteria] = "all_criteria",
  [sym_class_criteria] = "class_criteria",
  [sym_window_role_criteria] = "window_role_criteria",
  [sym_title_criteria] = "title_criteria",
  [sym_hide_edge_borders] = "hide_edge_borders",
  [sym_hide_edge_borders_value] = "hide_edge_borders_value",
  [sym_border] = "border",
  [sym_border_value] = "border_value",
  [sym_title_align] = "title_align",
  [sym_title_align_value] = "title_align_value",
  [sym_workspace_layout] = "workspace_layout",
  [sym_workspace_layout_value] = "workspace_layout_value",
  [sym_default_orientation] = "default_orientation",
  [sym_default_orientation_value] = "default_orientation_value",
  [sym_include] = "include",
  [sym_floating_modifier] = "floating_modifier",
  [sym_floating_modifier_value] = "floating_modifier_value",
  [sym_floating_size] = "floating_size",
  [sym_binding] = "binding",
  [sym_keymap] = "keymap",
  [sym_keymap_flags] = "keymap_flags",
  [sym_font] = "font",
  [sym_mode] = "mode",
  [sym_mode_body] = "mode_body",
  [sym_unit] = "unit",
  [sym__value] = "_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_client_repeat1] = "client_repeat1",
  [aux_sym_for_window_repeat1] = "for_window_repeat1",
  [aux_sym_for_window_repeat2] = "for_window_repeat2",
  [aux_sym_criteria_repeat1] = "criteria_repeat1",
  [aux_sym_binding_repeat1] = "binding_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [sym_comment] = sym_comment,
  [anon_sym_tiling_drag] = anon_sym_tiling_drag,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_swap_modifier] = anon_sym_swap_modifier,
  [anon_sym_modifier] = anon_sym_modifier,
  [anon_sym_titlebar] = anon_sym_titlebar,
  [anon_sym_show_marks] = anon_sym_show_marks,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_focus_on_window_activation] = anon_sym_focus_on_window_activation,
  [anon_sym_smart] = anon_sym_smart,
  [anon_sym_urgent] = anon_sym_urgent,
  [anon_sym_focus] = anon_sym_focus,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_force_display_urgency_hint] = anon_sym_force_display_urgency_hint,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_workspace_auto_back_and_forth] = anon_sym_workspace_auto_back_and_forth,
  [anon_sym_force_xinerama] = anon_sym_force_xinerama,
  [anon_sym_focus_wrapping] = anon_sym_focus_wrapping,
  [anon_sym_force] = anon_sym_force,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_popup_during_fullscreen] = anon_sym_popup_during_fullscreen,
  [anon_sym_ignore] = anon_sym_ignore,
  [anon_sym_leave_fullscreen] = anon_sym_leave_fullscreen,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_mouse_warping] = anon_sym_mouse_warping,
  [anon_sym_focus_follows_mouse] = anon_sym_focus_follows_mouse,
  [anon_sym_ipc_DASHsocket] = anon_sym_ipc_DASHsocket,
  [anon_sym_client_DOT] = anon_sym_client_DOT,
  [anon_sym_focused] = anon_sym_focused,
  [anon_sym_focused_inactive] = anon_sym_focused_inactive,
  [anon_sym_unfocused] = anon_sym_unfocused,
  [anon_sym_placeholder] = anon_sym_placeholder,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_DASH_DASHno_DASHstartup_DASHid] = anon_sym_DASH_DASHno_DASHstartup_DASHid,
  [anon_sym_exec_always] = anon_sym_exec_always,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_u2192] = anon_sym_u2192,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_primary] = anon_sym_primary,
  [anon_sym_nonprimary] = anon_sym_nonprimary,
  [anon_sym_set_from_resource] = anon_sym_set_from_resource,
  [sym_set_resource] = sym_set_resource,
  [sym_set_resource_fallback] = sym_set_resource_fallback,
  [aux_sym_set_token1] = aux_sym_set_token1,
  [anon_sym_no_focus] = anon_sym_no_focus,
  [anon_sym_for_window] = anon_sym_for_window,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_floating_criteria] = sym_floating_criteria,
  [anon_sym_class_EQ] = anon_sym_class_EQ,
  [anon_sym_window_role_EQ] = anon_sym_window_role_EQ,
  [anon_sym_title_EQ] = anon_sym_title_EQ,
  [anon_sym_hide_edge_borders] = anon_sym_hide_edge_borders,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_smart_no_gaps] = anon_sym_smart_no_gaps,
  [anon_sym_default_floating_border] = anon_sym_default_floating_border,
  [anon_sym_default_border] = anon_sym_default_border,
  [anon_sym_border] = anon_sym_border,
  [anon_sym_normal] = anon_sym_normal,
  [anon_sym_pixel] = anon_sym_pixel,
  [anon_sym_title_align] = anon_sym_title_align,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_workspace_layout] = anon_sym_workspace_layout,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_stacking] = anon_sym_stacking,
  [anon_sym_tabbed] = anon_sym_tabbed,
  [anon_sym_default_orientation] = anon_sym_default_orientation,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_include] = anon_sym_include,
  [sym_include_source] = sym_include_source,
  [anon_sym_floating_modifier] = anon_sym_floating_modifier,
  [aux_sym_floating_modifier_value_token1] = aux_sym_floating_modifier_value_token1,
  [anon_sym_floating_minimum_size] = anon_sym_floating_minimum_size,
  [anon_sym_floating_maximum_size] = anon_sym_floating_maximum_size,
  [sym_floating_size_op] = sym_floating_size_op,
  [anon_sym_bindsym] = anon_sym_bindsym,
  [anon_sym_bindcode] = anon_sym_bindcode,
  [sym_keymap_trigger] = sym_keymap_trigger,
  [anon_sym_DASH_DASHrelease] = anon_sym_DASH_DASHrelease,
  [anon_sym_DASH_DASHborder] = anon_sym_DASH_DASHborder,
  [anon_sym_DASH_DASHwhole_DASHwindow] = anon_sym_DASH_DASHwhole_DASHwindow,
  [anon_sym_DASH_DASHexclude_DASHtitlebar] = anon_sym_DASH_DASHexclude_DASHtitlebar,
  [anon_sym_font] = anon_sym_font,
  [sym_font_name] = sym_font_name,
  [anon_sym_mode] = anon_sym_mode,
  [sym_mode_name] = sym_mode_name,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [sym_px_unit] = sym_px_unit,
  [sym_ppt_unit] = sym_ppt_unit,
  [sym_number] = sym_number,
  [sym_quoted_string] = sym_quoted_string,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_value] = sym_value,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_tiling_drag] = sym_tiling_drag,
  [sym_tiling_drag_value] = sym_tiling_drag_value,
  [sym_tiling_drag_swap] = sym_tiling_drag_swap,
  [sym_tiling_drag_modifier] = sym_tiling_drag_modifier,
  [sym_show_marks] = sym_show_marks,
  [sym_show_marks_value] = sym_show_marks_value,
  [sym_focus_on_window_activation] = sym_focus_on_window_activation,
  [sym_focus_on_window_activation_value] = sym_focus_on_window_activation_value,
  [sym_force_display_urgency_hint] = sym_force_display_urgency_hint,
  [sym_workspace_auto_back_and_forth] = sym_workspace_auto_back_and_forth,
  [sym_workspace_auto_back_and_forth_value] = sym_workspace_auto_back_and_forth_value,
  [sym_force_xinerama] = sym_force_xinerama,
  [sym_force_xinerama_value] = sym_force_xinerama_value,
  [sym_focus_wrapping] = sym_focus_wrapping,
  [sym_focus_wrapping_value] = sym_focus_wrapping_value,
  [sym_popup_during_fullscreen] = sym_popup_during_fullscreen,
  [sym_popup_during_fullscreen_value] = sym_popup_during_fullscreen_value,
  [sym_mouse_warping] = sym_mouse_warping,
  [sym_focus_follows_mouse] = sym_focus_follows_mouse,
  [sym_focus_follows_mouse_value] = sym_focus_follows_mouse_value,
  [sym_ipc_socket] = sym_ipc_socket,
  [sym_client] = sym_client,
  [sym_property] = sym_property,
  [sym_workspace] = sym_workspace,
  [sym_workspace_assign_output] = sym_workspace_assign_output,
  [sym__workspace_id] = sym__workspace_id,
  [sym_exec] = sym_exec,
  [sym_exec_always] = sym_exec_always,
  [sym_assign] = sym_assign,
  [sym_assign_workspace] = sym_assign_workspace,
  [sym_assign_output] = sym_assign_output,
  [sym__definition] = sym__definition,
  [sym_set_from_resource] = sym_set_from_resource,
  [sym_set] = sym_set,
  [sym_no_focus] = sym_no_focus,
  [sym_for_window] = sym_for_window,
  [sym_criteria] = sym_criteria,
  [sym_all_criteria] = sym_all_criteria,
  [sym_class_criteria] = sym_class_criteria,
  [sym_window_role_criteria] = sym_window_role_criteria,
  [sym_title_criteria] = sym_title_criteria,
  [sym_hide_edge_borders] = sym_hide_edge_borders,
  [sym_hide_edge_borders_value] = sym_hide_edge_borders_value,
  [sym_border] = sym_border,
  [sym_border_value] = sym_border_value,
  [sym_title_align] = sym_title_align,
  [sym_title_align_value] = sym_title_align_value,
  [sym_workspace_layout] = sym_workspace_layout,
  [sym_workspace_layout_value] = sym_workspace_layout_value,
  [sym_default_orientation] = sym_default_orientation,
  [sym_default_orientation_value] = sym_default_orientation_value,
  [sym_include] = sym_include,
  [sym_floating_modifier] = sym_floating_modifier,
  [sym_floating_modifier_value] = sym_floating_modifier_value,
  [sym_floating_size] = sym_floating_size,
  [sym_binding] = sym_binding,
  [sym_keymap] = sym_keymap,
  [sym_keymap_flags] = sym_keymap_flags,
  [sym_font] = sym_font,
  [sym_mode] = sym_mode,
  [sym_mode_body] = sym_mode_body,
  [sym_unit] = sym_unit,
  [sym__value] = sym__value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_client_repeat1] = aux_sym_client_repeat1,
  [aux_sym_for_window_repeat1] = aux_sym_for_window_repeat1,
  [aux_sym_for_window_repeat2] = aux_sym_for_window_repeat2,
  [aux_sym_criteria_repeat1] = aux_sym_criteria_repeat1,
  [aux_sym_binding_repeat1] = aux_sym_binding_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tiling_drag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_titlebar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show_marks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_on_window_activation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urgent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_display_urgency_hint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_auto_back_and_forth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_xinerama] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_wrapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popup_during_fullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leave_fullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse_warping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_follows_mouse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipc_DASHsocket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focused] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focused_inactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unfocused] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_placeholder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHno_DASHstartup_DASHid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonprimary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_from_resource] = {
    .visible = true,
    .named = false,
  },
  [sym_set_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_set_resource_fallback] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_set_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_no_focus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_floating_criteria] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_role_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hide_edge_borders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smart_no_gaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_floating_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pixel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stacking] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tabbed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_orientation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [sym_include_source] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_floating_modifier] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_floating_modifier_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_floating_minimum_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating_maximum_size] = {
    .visible = true,
    .named = false,
  },
  [sym_floating_size_op] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bindsym] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bindcode] = {
    .visible = true,
    .named = false,
  },
  [sym_keymap_trigger] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHrelease] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHborder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHwhole_DASHwindow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHexclude_DASHtitlebar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = false,
  },
  [sym_font_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [sym_mode_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_px_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_ppt_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_tiling_drag] = {
    .visible = true,
    .named = true,
  },
  [sym_tiling_drag_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tiling_drag_swap] = {
    .visible = true,
    .named = true,
  },
  [sym_tiling_drag_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_show_marks] = {
    .visible = true,
    .named = true,
  },
  [sym_show_marks_value] = {
    .visible = true,
    .named = true,
  },
  [sym_focus_on_window_activation] = {
    .visible = true,
    .named = true,
  },
  [sym_focus_on_window_activation_value] = {
    .visible = true,
    .named = true,
  },
  [sym_force_display_urgency_hint] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_auto_back_and_forth] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_auto_back_and_forth_value] = {
    .visible = true,
    .named = true,
  },
  [sym_force_xinerama] = {
    .visible = true,
    .named = true,
  },
  [sym_force_xinerama_value] = {
    .visible = true,
    .named = true,
  },
  [sym_focus_wrapping] = {
    .visible = true,
    .named = true,
  },
  [sym_focus_wrapping_value] = {
    .visible = true,
    .named = true,
  },
  [sym_popup_during_fullscreen] = {
    .visible = true,
    .named = true,
  },
  [sym_popup_during_fullscreen_value] = {
    .visible = true,
    .named = true,
  },
  [sym_mouse_warping] = {
    .visible = true,
    .named = true,
  },
  [sym_focus_follows_mouse] = {
    .visible = true,
    .named = true,
  },
  [sym_focus_follows_mouse_value] = {
    .visible = true,
    .named = true,
  },
  [sym_ipc_socket] = {
    .visible = true,
    .named = true,
  },
  [sym_client] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_assign_output] = {
    .visible = true,
    .named = true,
  },
  [sym__workspace_id] = {
    .visible = false,
    .named = true,
  },
  [sym_exec] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_always] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_workspace] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_output] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_set_from_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_no_focus] = {
    .visible = true,
    .named = true,
  },
  [sym_for_window] = {
    .visible = true,
    .named = true,
  },
  [sym_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_all_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_class_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_window_role_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_title_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_hide_edge_borders] = {
    .visible = true,
    .named = true,
  },
  [sym_hide_edge_borders_value] = {
    .visible = true,
    .named = true,
  },
  [sym_border] = {
    .visible = true,
    .named = true,
  },
  [sym_border_value] = {
    .visible = true,
    .named = true,
  },
  [sym_title_align] = {
    .visible = true,
    .named = true,
  },
  [sym_title_align_value] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_layout_value] = {
    .visible = true,
    .named = true,
  },
  [sym_default_orientation] = {
    .visible = true,
    .named = true,
  },
  [sym_default_orientation_value] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_modifier_value] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_size] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_keymap] = {
    .visible = true,
    .named = true,
  },
  [sym_keymap_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_body] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_client_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_window_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_window_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_criteria_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_class = 2,
  field_command = 3,
  field_fallback = 4,
  field_follow_mouse_value = 5,
  field_identifier = 6,
  field_mode = 7,
  field_name = 8,
  field_property = 9,
  field_resource = 10,
  field_source = 11,
  field_title = 12,
  field_unit = 13,
  field_value = 14,
  field_window_role = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_class] = "class",
  [field_command] = "command",
  [field_fallback] = "fallback",
  [field_follow_mouse_value] = "follow_mouse_value",
  [field_identifier] = "identifier",
  [field_mode] = "mode",
  [field_name] = "name",
  [field_property] = "property",
  [field_resource] = "resource",
  [field_source] = "source",
  [field_title] = "title",
  [field_unit] = "unit",
  [field_value] = "value",
  [field_window_role] = "window_role",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 3},
  [14] = {.index = 17, .length = 3},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 1},
  [22] = {.index = 30, .length = 1},
  [23] = {.index = 31, .length = 3},
  [24] = {.index = 34, .length = 1},
  [25] = {.index = 35, .length = 6},
  [26] = {.index = 41, .length = 3},
  [27] = {.index = 44, .length = 1},
  [28] = {.index = 45, .length = 1},
  [29] = {.index = 46, .length = 1},
  [30] = {.index = 47, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
  [1] =
    {field_follow_mouse_value, 1},
  [2] =
    {field_property, 1},
  [3] =
    {field_command, 1},
  [4] =
    {field_value, 1},
  [5] =
    {field_mode, 1},
  [6] =
    {field_source, 1},
  [7] =
    {field_identifier, 1},
  [8] =
    {field_identifier, 2, .inherited = true},
    {field_property, 1},
  [10] =
    {field_command, 2},
  [11] =
    {field_identifier, 0, .inherited = true},
  [12] =
    {field_identifier, 1},
    {field_value, 2},
  [14] =
    {field_identifier, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_unit, 0, .inherited = true},
  [17] =
    {field_identifier, 2, .inherited = true},
    {field_name, 2, .inherited = true},
    {field_unit, 2, .inherited = true},
  [20] =
    {field_mode, 1},
    {field_value, 2},
  [22] =
    {field_name, 2},
  [23] =
    {field_body, 2},
    {field_name, 1},
  [25] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [27] =
    {field_class, 1},
  [28] =
    {field_window_role, 1},
  [29] =
    {field_title, 1},
  [30] =
    {field_identifier, 1, .inherited = true},
  [31] =
    {field_fallback, 3},
    {field_identifier, 1},
    {field_resource, 2},
  [34] =
    {field_unit, 0},
  [35] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_unit, 0, .inherited = true},
    {field_unit, 1, .inherited = true},
  [41] =
    {field_identifier, 3, .inherited = true},
    {field_name, 3, .inherited = true},
    {field_unit, 3, .inherited = true},
  [44] =
    {field_name, 3},
  [45] =
    {field_name, 1},
  [46] =
    {field_unit, 1},
  [47] =
    {field_identifier, 4, .inherited = true},
    {field_name, 4, .inherited = true},
    {field_unit, 4, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 159,
  [173] = 173,
  [174] = 20,
  [175] = 101,
  [176] = 176,
  [177] = 177,
  [178] = 178,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(689);
      ADVANCE_MAP(
        '"', 1,
        '#', 691,
        '$', 680,
        '+', 679,
        '-', 16,
        '[', 752,
        '\\', 810,
        ']', 753,
        'a', 350,
        'b', 65,
        'c', 205,
        'd', 183,
        'e', 661,
        'f', 351,
        'h', 295,
        'i', 27,
        'l', 184,
        'm', 443,
        'n', 444,
        'o', 255,
        'p', 312,
        'r', 296,
        's', 214,
        't', 67,
        'u', 413,
        'v', 206,
        'w', 315,
        'x', 785,
        'y', 204,
        '{', 799,
        '}', 800,
        0x2192, 738,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(684);
      if (lookahead == '"') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 690,
        '$', 680,
        '\\', 810,
        'b', 487,
        'd', 252,
        'e', 664,
        'm', 479,
        'p', 492,
        '+', 679,
        '-', 679,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(796);
      if (lookahead != 0) ADVANCE(684);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(807);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(808);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(798);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(806);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 4,
        '#', 748,
        '$', 680,
        '[', 752,
        '\\', 810,
        ']', 753,
        'a', 349,
        'b', 487,
        'c', 368,
        'd', 252,
        'e', 664,
        'f', 386,
        'm', 479,
        'n', 469,
        'o', 619,
        'p', 492,
        's', 402,
        't', 334,
        'u', 516,
        'w', 314,
        0x2192, 738,
        '+', 679,
        '-', 679,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(680);
      if (lookahead == '-') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(680);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(681);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0) ADVANCE(685);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(116);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(685);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(600);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(659);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(747);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(725);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(436);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(756);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(758);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(758);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(757);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(122);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(653);
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(653);
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(396);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(263);
      if (lookahead != 0) ADVANCE(749);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(262);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(658);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(121);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(389);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(281);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(569);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(261);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(533);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(628);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(576);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(394);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(545);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(660);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'f') ADVANCE(583);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(712);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(451);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(291);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(451);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(291);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(483);
      if (lookahead == 'f') ADVANCE(384);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(483);
      if (lookahead == 'f') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(485);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(486);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(621);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(601);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(603);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(632);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(671);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(535);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(625);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(540);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(775);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(728);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(734);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(638);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == 'x') ADVANCE(304);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(530);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(488);
      if (lookahead == 'y') ADVANCE(204);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(182);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(708);
      if (lookahead == 'p') ADVANCE(544);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(694);
      END_STATE();
    case 255:
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(608);
      END_STATE();
    case 256:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 257:
      if (lookahead == 'f') ADVANCE(454);
      END_STATE();
    case 258:
      if (lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 259:
      if (lookahead == 'f') ADVANCE(583);
      END_STATE();
    case 260:
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 'w') ADVANCE(527);
      END_STATE();
    case 261:
      if (lookahead == 'f') ADVANCE(477);
      END_STATE();
    case 262:
      if (lookahead == 'f') ADVANCE(635);
      END_STATE();
    case 263:
      if (lookahead == 'f') ADVANCE(526);
      END_STATE();
    case 264:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 265:
      if (lookahead == 'f') ADVANCE(480);
      END_STATE();
    case 266:
      if (lookahead == 'f') ADVANCE(330);
      END_STATE();
    case 267:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 268:
      if (lookahead == 'f') ADVANCE(331);
      END_STATE();
    case 269:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 270:
      if (lookahead == 'f') ADVANCE(644);
      END_STATE();
    case 271:
      if (lookahead == 'g') ADVANCE(755);
      END_STATE();
    case 272:
      if (lookahead == 'g') ADVANCE(774);
      END_STATE();
    case 273:
      if (lookahead == 'g') ADVANCE(693);
      END_STATE();
    case 274:
      if (lookahead == 'g') ADVANCE(722);
      END_STATE();
    case 275:
      if (lookahead == 'g') ADVANCE(713);
      END_STATE();
    case 276:
      if (lookahead == 'g') ADVANCE(754);
      END_STATE();
    case 277:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 278:
      if (lookahead == 'g') ADVANCE(405);
      END_STATE();
    case 279:
      if (lookahead == 'g') ADVANCE(525);
      END_STATE();
    case 280:
      if (lookahead == 'g') ADVANCE(406);
      END_STATE();
    case 281:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 282:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 283:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 284:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 285:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 286:
      if (lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 287:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 288:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 289:
      if (lookahead == 'h') ADVANCE(762);
      END_STATE();
    case 290:
      if (lookahead == 'h') ADVANCE(711);
      END_STATE();
    case 291:
      if (lookahead == 'h') ADVANCE(474);
      END_STATE();
    case 292:
      if (lookahead == 'h') ADVANCE(584);
      END_STATE();
    case 293:
      if (lookahead == 'h') ADVANCE(459);
      END_STATE();
    case 294:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(674);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == 'x') ADVANCE(803);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(675);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(437);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 342:
      if (lookahead == 'k') ADVANCE(279);
      END_STATE();
    case 343:
      if (lookahead == 'k') ADVANCE(563);
      END_STATE();
    case 344:
      if (lookahead == 'k') ADVANCE(557);
      END_STATE();
    case 345:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 346:
      if (lookahead == 'k') ADVANCE(236);
      END_STATE();
    case 347:
      if (lookahead == 'k') ADVANCE(321);
      END_STATE();
    case 348:
      if (lookahead == 'k') ADVANCE(579);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(768);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(637);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 361:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 363:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 364:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(593);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(786);
      END_STATE();
    case 389:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 390:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 391:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 392:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 393:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 394:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 395:
      if (lookahead == 'm') ADVANCE(634);
      END_STATE();
    case 396:
      if (lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 397:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 398:
      if (lookahead == 'm') ADVANCE(482);
      END_STATE();
    case 399:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 400:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 401:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 402:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 403:
      if (lookahead == 'm') ADVANCE(643);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 410:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 411:
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == 'p') ADVANCE(742);
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 443:
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 444:
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 445:
      if (lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 446:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 448:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 449:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 450:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 491:
      if (lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 492:
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == 'x') ADVANCE(803);
      END_STATE();
    case 493:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 494:
      if (lookahead == 'p') ADVANCE(624);
      END_STATE();
    case 495:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 496:
      if (lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 497:
      if (lookahead == 'p') ADVANCE(559);
      END_STATE();
    case 498:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 499:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 500:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 501:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 502:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 503:
      if (lookahead == 'p') ADVANCE(502);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(596);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 526:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 527:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 528:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 538:
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 541:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(707);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(763);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 561:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 565:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 566:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 570:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(804);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(793);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(740);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(724);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 619:
      if (lookahead == 'u') ADVANCE(608);
      END_STATE();
    case 620:
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 621:
      if (lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 622:
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 623:
      if (lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 624:
      if (lookahead == 'u') ADVANCE(586);
      END_STATE();
    case 625:
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 626:
      if (lookahead == 'u') ADVANCE(542);
      END_STATE();
    case 627:
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 628:
      if (lookahead == 'u') ADVANCE(541);
      END_STATE();
    case 629:
      if (lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 630:
      if (lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 631:
      if (lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 632:
      if (lookahead == 'u') ADVANCE(572);
      END_STATE();
    case 633:
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 634:
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 635:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 636:
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 637:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 638:
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 639:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 640:
      if (lookahead == 'u') ADVANCE(574);
      END_STATE();
    case 641:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 642:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 643:
      if (lookahead == 'u') ADVANCE(401);
      END_STATE();
    case 644:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 645:
      if (lookahead == 'v') ADVANCE(210);
      END_STATE();
    case 646:
      if (lookahead == 'v') ADVANCE(197);
      END_STATE();
    case 647:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 648:
      if (lookahead == 'w') ADVANCE(751);
      END_STATE();
    case 649:
      if (lookahead == 'w') ADVANCE(791);
      END_STATE();
    case 650:
      if (lookahead == 'w') ADVANCE(387);
      END_STATE();
    case 651:
      if (lookahead == 'w') ADVANCE(59);
      END_STATE();
    case 652:
      if (lookahead == 'w') ADVANCE(404);
      END_STATE();
    case 653:
      if (lookahead == 'w') ADVANCE(335);
      END_STATE();
    case 654:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 655:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 656:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 657:
      if (lookahead == 'w') ADVANCE(577);
      END_STATE();
    case 658:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 659:
      if (lookahead == 'w') ADVANCE(337);
      END_STATE();
    case 660:
      if (lookahead == 'w') ADVANCE(338);
      END_STATE();
    case 661:
      if (lookahead == 'x') ADVANCE(215);
      END_STATE();
    case 662:
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 663:
      if (lookahead == 'x') ADVANCE(305);
      END_STATE();
    case 664:
      if (lookahead == 'x') ADVANCE(227);
      END_STATE();
    case 665:
      if (lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 666:
      if (lookahead == 'y') ADVANCE(744);
      END_STATE();
    case 667:
      if (lookahead == 'y') ADVANCE(745);
      END_STATE();
    case 668:
      if (lookahead == 'y') ADVANCE(388);
      END_STATE();
    case 669:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 670:
      if (lookahead == 'y') ADVANCE(558);
      END_STATE();
    case 671:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 672:
      if (lookahead == 'y') ADVANCE(472);
      END_STATE();
    case 673:
      if (lookahead == 'z') ADVANCE(476);
      END_STATE();
    case 674:
      if (lookahead == 'z') ADVANCE(200);
      END_STATE();
    case 675:
      if (lookahead == 'z') ADVANCE(201);
      END_STATE();
    case 676:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(676);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 677:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(677);
      if (lookahead != 0) ADVANCE(685);
      END_STATE();
    case 678:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(678);
      if (lookahead != 0) ADVANCE(687);
      END_STATE();
    case 679:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 680:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 681:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 682:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(780);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(779);
      END_STATE();
    case 683:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(686);
      END_STATE();
    case 684:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 686:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 687:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(682);
      END_STATE();
    case 688:
      if (eof) ADVANCE(689);
      ADVANCE_MAP(
        '"', 10,
        '#', 692,
        'a', 552,
        'b', 65,
        'c', 380,
        'd', 251,
        'e', 661,
        'f', 385,
        'h', 295,
        'i', 411,
        'l', 220,
        'm', 448,
        'n', 446,
        'p', 313,
        'r', 296,
        's', 213,
        't', 332,
        'u', 413,
        'v', 206,
        'w', 450,
        '}', 800,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(692);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_swap_modifier);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_titlebar);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_show_marks);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_focus_on_window_activation);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_smart);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(430);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_urgent);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_focus);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_force_display_urgency_hint);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_workspace_auto_back_and_forth);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_force_xinerama);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_focus_wrapping);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_force);
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_popup_during_fullscreen);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_leave_fullscreen);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_mouse_warping);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_focus_follows_mouse);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_ipc_DASHsocket);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_client_DOT);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_focused);
      if (lookahead == '_') ADVANCE(306);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_focused_inactive);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_unfocused);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_primary);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_nonprimary);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_set_from_resource);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_set_resource);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_set_resource_fallback);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(748);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_no_focus);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_floating_criteria);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_floating_criteria);
      if (lookahead == '_') ADVANCE(389);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_class_EQ);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_window_role_EQ);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_title_EQ);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_smart_no_gaps);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_pixel);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_stacking);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_tabbed);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(780);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_floating_modifier_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_floating_size_op);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_DASH_DASHborder);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_DASH_DASHwhole_DASHwindow);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_DASH_DASHexclude_DASHtitlebar);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_mode_name);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(798);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_px_unit);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_ppt_unit);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(798);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(806);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'i') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 's') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(824);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 688},
  [2] = {.lex_state = 688},
  [3] = {.lex_state = 688},
  [4] = {.lex_state = 688},
  [5] = {.lex_state = 688},
  [6] = {.lex_state = 688},
  [7] = {.lex_state = 688},
  [8] = {.lex_state = 688},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 688},
  [46] = {.lex_state = 688},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 688},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 182},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 688},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 182},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 182},
  [67] = {.lex_state = 182},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 182},
  [71] = {.lex_state = 182},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 676},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 677},
  [100] = {.lex_state = 677},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 688},
  [106] = {.lex_state = 688},
  [107] = {.lex_state = 688},
  [108] = {.lex_state = 677},
  [109] = {.lex_state = 678},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 677},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 677},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 677},
  [178] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_tiling_drag] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_swap_modifier] = ACTIONS(1),
    [anon_sym_modifier] = ACTIONS(1),
    [anon_sym_titlebar] = ACTIONS(1),
    [anon_sym_show_marks] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_focus_on_window_activation] = ACTIONS(1),
    [anon_sym_smart] = ACTIONS(1),
    [anon_sym_urgent] = ACTIONS(1),
    [anon_sym_focus] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_force_display_urgency_hint] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(1),
    [anon_sym_force_xinerama] = ACTIONS(1),
    [anon_sym_focus_wrapping] = ACTIONS(1),
    [anon_sym_force] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_popup_during_fullscreen] = ACTIONS(1),
    [anon_sym_ignore] = ACTIONS(1),
    [anon_sym_leave_fullscreen] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_mouse_warping] = ACTIONS(1),
    [anon_sym_focus_follows_mouse] = ACTIONS(1),
    [anon_sym_ipc_DASHsocket] = ACTIONS(1),
    [anon_sym_client_DOT] = ACTIONS(1),
    [anon_sym_focused] = ACTIONS(1),
    [anon_sym_focused_inactive] = ACTIONS(1),
    [anon_sym_unfocused] = ACTIONS(1),
    [anon_sym_placeholder] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_DASH_DASHno_DASHstartup_DASHid] = ACTIONS(1),
    [anon_sym_exec_always] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_u2192] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_primary] = ACTIONS(1),
    [anon_sym_nonprimary] = ACTIONS(1),
    [anon_sym_set_from_resource] = ACTIONS(1),
    [sym_set_resource] = ACTIONS(1),
    [sym_set_resource_fallback] = ACTIONS(1),
    [aux_sym_set_token1] = ACTIONS(1),
    [anon_sym_no_focus] = ACTIONS(1),
    [anon_sym_for_window] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_floating_criteria] = ACTIONS(1),
    [anon_sym_class_EQ] = ACTIONS(1),
    [anon_sym_window_role_EQ] = ACTIONS(1),
    [anon_sym_title_EQ] = ACTIONS(1),
    [anon_sym_hide_edge_borders] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_smart_no_gaps] = ACTIONS(1),
    [anon_sym_default_floating_border] = ACTIONS(1),
    [anon_sym_default_border] = ACTIONS(1),
    [anon_sym_border] = ACTIONS(1),
    [anon_sym_normal] = ACTIONS(1),
    [anon_sym_pixel] = ACTIONS(1),
    [anon_sym_title_align] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_workspace_layout] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_stacking] = ACTIONS(1),
    [anon_sym_tabbed] = ACTIONS(1),
    [anon_sym_default_orientation] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_floating_modifier] = ACTIONS(1),
    [anon_sym_floating_minimum_size] = ACTIONS(1),
    [anon_sym_floating_maximum_size] = ACTIONS(1),
    [sym_floating_size_op] = ACTIONS(1),
    [anon_sym_bindsym] = ACTIONS(1),
    [anon_sym_bindcode] = ACTIONS(1),
    [anon_sym_DASH_DASHrelease] = ACTIONS(1),
    [anon_sym_DASH_DASHborder] = ACTIONS(1),
    [anon_sym_DASH_DASHwhole_DASHwindow] = ACTIONS(1),
    [anon_sym_DASH_DASHexclude_DASHtitlebar] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [sym_mode_name] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_px_unit] = ACTIONS(1),
    [sym_ppt_unit] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(127),
    [sym__statement] = STATE(4),
    [sym_tiling_drag] = STATE(101),
    [sym_show_marks] = STATE(101),
    [sym_focus_on_window_activation] = STATE(101),
    [sym_force_display_urgency_hint] = STATE(101),
    [sym_workspace_auto_back_and_forth] = STATE(101),
    [sym_force_xinerama] = STATE(101),
    [sym_focus_wrapping] = STATE(101),
    [sym_popup_during_fullscreen] = STATE(101),
    [sym_mouse_warping] = STATE(101),
    [sym_focus_follows_mouse] = STATE(101),
    [sym_ipc_socket] = STATE(101),
    [sym_client] = STATE(101),
    [sym_workspace] = STATE(101),
    [sym_exec] = STATE(101),
    [sym_exec_always] = STATE(101),
    [sym_assign] = STATE(101),
    [sym__definition] = STATE(101),
    [sym_set_from_resource] = STATE(101),
    [sym_set] = STATE(101),
    [sym_no_focus] = STATE(101),
    [sym_for_window] = STATE(101),
    [sym_hide_edge_borders] = STATE(101),
    [sym_border] = STATE(101),
    [sym_title_align] = STATE(101),
    [sym_workspace_layout] = STATE(101),
    [sym_default_orientation] = STATE(101),
    [sym_include] = STATE(101),
    [sym_floating_modifier] = STATE(101),
    [sym_floating_size] = STATE(101),
    [sym_binding] = STATE(101),
    [sym_font] = STATE(101),
    [sym_mode] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_tiling_drag] = ACTIONS(7),
    [anon_sym_show_marks] = ACTIONS(9),
    [anon_sym_focus_on_window_activation] = ACTIONS(11),
    [anon_sym_force_display_urgency_hint] = ACTIONS(13),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(15),
    [anon_sym_force_xinerama] = ACTIONS(17),
    [anon_sym_focus_wrapping] = ACTIONS(19),
    [anon_sym_workspace] = ACTIONS(21),
    [anon_sym_popup_during_fullscreen] = ACTIONS(23),
    [anon_sym_mouse_warping] = ACTIONS(25),
    [anon_sym_focus_follows_mouse] = ACTIONS(27),
    [anon_sym_ipc_DASHsocket] = ACTIONS(29),
    [anon_sym_client_DOT] = ACTIONS(31),
    [anon_sym_exec] = ACTIONS(33),
    [anon_sym_exec_always] = ACTIONS(35),
    [anon_sym_assign] = ACTIONS(37),
    [anon_sym_set_from_resource] = ACTIONS(39),
    [aux_sym_set_token1] = ACTIONS(41),
    [anon_sym_no_focus] = ACTIONS(43),
    [anon_sym_for_window] = ACTIONS(45),
    [anon_sym_hide_edge_borders] = ACTIONS(47),
    [anon_sym_default_floating_border] = ACTIONS(49),
    [anon_sym_default_border] = ACTIONS(49),
    [anon_sym_border] = ACTIONS(49),
    [anon_sym_title_align] = ACTIONS(51),
    [anon_sym_workspace_layout] = ACTIONS(53),
    [anon_sym_default_orientation] = ACTIONS(55),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_floating_modifier] = ACTIONS(59),
    [anon_sym_floating_minimum_size] = ACTIONS(61),
    [anon_sym_floating_maximum_size] = ACTIONS(61),
    [anon_sym_bindsym] = ACTIONS(63),
    [anon_sym_bindcode] = ACTIONS(63),
    [anon_sym_font] = ACTIONS(65),
    [anon_sym_mode] = ACTIONS(67),
  },
  [2] = {
    [sym__statement] = STATE(6),
    [sym_tiling_drag] = STATE(175),
    [sym_show_marks] = STATE(175),
    [sym_focus_on_window_activation] = STATE(175),
    [sym_force_display_urgency_hint] = STATE(175),
    [sym_workspace_auto_back_and_forth] = STATE(175),
    [sym_force_xinerama] = STATE(175),
    [sym_focus_wrapping] = STATE(175),
    [sym_popup_during_fullscreen] = STATE(175),
    [sym_mouse_warping] = STATE(175),
    [sym_focus_follows_mouse] = STATE(175),
    [sym_ipc_socket] = STATE(175),
    [sym_client] = STATE(175),
    [sym_workspace] = STATE(175),
    [sym_exec] = STATE(175),
    [sym_exec_always] = STATE(175),
    [sym_assign] = STATE(175),
    [sym__definition] = STATE(175),
    [sym_set_from_resource] = STATE(175),
    [sym_set] = STATE(175),
    [sym_no_focus] = STATE(175),
    [sym_for_window] = STATE(175),
    [sym_hide_edge_borders] = STATE(175),
    [sym_border] = STATE(175),
    [sym_title_align] = STATE(175),
    [sym_workspace_layout] = STATE(175),
    [sym_default_orientation] = STATE(175),
    [sym_include] = STATE(175),
    [sym_floating_modifier] = STATE(175),
    [sym_floating_size] = STATE(175),
    [sym_binding] = STATE(175),
    [sym_font] = STATE(175),
    [sym_mode] = STATE(175),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(69),
    [anon_sym_tiling_drag] = ACTIONS(7),
    [anon_sym_show_marks] = ACTIONS(9),
    [anon_sym_focus_on_window_activation] = ACTIONS(11),
    [anon_sym_force_display_urgency_hint] = ACTIONS(13),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(15),
    [anon_sym_force_xinerama] = ACTIONS(17),
    [anon_sym_focus_wrapping] = ACTIONS(19),
    [anon_sym_workspace] = ACTIONS(21),
    [anon_sym_popup_during_fullscreen] = ACTIONS(23),
    [anon_sym_mouse_warping] = ACTIONS(25),
    [anon_sym_focus_follows_mouse] = ACTIONS(27),
    [anon_sym_ipc_DASHsocket] = ACTIONS(29),
    [anon_sym_client_DOT] = ACTIONS(31),
    [anon_sym_exec] = ACTIONS(33),
    [anon_sym_exec_always] = ACTIONS(35),
    [anon_sym_assign] = ACTIONS(37),
    [anon_sym_set_from_resource] = ACTIONS(39),
    [aux_sym_set_token1] = ACTIONS(41),
    [anon_sym_no_focus] = ACTIONS(43),
    [anon_sym_for_window] = ACTIONS(45),
    [anon_sym_hide_edge_borders] = ACTIONS(47),
    [anon_sym_default_floating_border] = ACTIONS(49),
    [anon_sym_default_border] = ACTIONS(49),
    [anon_sym_border] = ACTIONS(49),
    [anon_sym_title_align] = ACTIONS(51),
    [anon_sym_workspace_layout] = ACTIONS(53),
    [anon_sym_default_orientation] = ACTIONS(55),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_floating_modifier] = ACTIONS(59),
    [anon_sym_floating_minimum_size] = ACTIONS(61),
    [anon_sym_floating_maximum_size] = ACTIONS(61),
    [anon_sym_bindsym] = ACTIONS(63),
    [anon_sym_bindcode] = ACTIONS(63),
    [anon_sym_font] = ACTIONS(65),
    [anon_sym_mode] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(71),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_tiling_drag] = STATE(175),
    [sym_show_marks] = STATE(175),
    [sym_focus_on_window_activation] = STATE(175),
    [sym_force_display_urgency_hint] = STATE(175),
    [sym_workspace_auto_back_and_forth] = STATE(175),
    [sym_force_xinerama] = STATE(175),
    [sym_focus_wrapping] = STATE(175),
    [sym_popup_during_fullscreen] = STATE(175),
    [sym_mouse_warping] = STATE(175),
    [sym_focus_follows_mouse] = STATE(175),
    [sym_ipc_socket] = STATE(175),
    [sym_client] = STATE(175),
    [sym_workspace] = STATE(175),
    [sym_exec] = STATE(175),
    [sym_exec_always] = STATE(175),
    [sym_assign] = STATE(175),
    [sym__definition] = STATE(175),
    [sym_set_from_resource] = STATE(175),
    [sym_set] = STATE(175),
    [sym_no_focus] = STATE(175),
    [sym_for_window] = STATE(175),
    [sym_hide_edge_borders] = STATE(175),
    [sym_border] = STATE(175),
    [sym_title_align] = STATE(175),
    [sym_workspace_layout] = STATE(175),
    [sym_default_orientation] = STATE(175),
    [sym_include] = STATE(175),
    [sym_floating_modifier] = STATE(175),
    [sym_floating_size] = STATE(175),
    [sym_binding] = STATE(175),
    [sym_font] = STATE(175),
    [sym_mode] = STATE(175),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(73),
    [anon_sym_tiling_drag] = ACTIONS(76),
    [anon_sym_show_marks] = ACTIONS(79),
    [anon_sym_focus_on_window_activation] = ACTIONS(82),
    [anon_sym_force_display_urgency_hint] = ACTIONS(85),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(88),
    [anon_sym_force_xinerama] = ACTIONS(91),
    [anon_sym_focus_wrapping] = ACTIONS(94),
    [anon_sym_workspace] = ACTIONS(97),
    [anon_sym_popup_during_fullscreen] = ACTIONS(100),
    [anon_sym_mouse_warping] = ACTIONS(103),
    [anon_sym_focus_follows_mouse] = ACTIONS(106),
    [anon_sym_ipc_DASHsocket] = ACTIONS(109),
    [anon_sym_client_DOT] = ACTIONS(112),
    [anon_sym_exec] = ACTIONS(115),
    [anon_sym_exec_always] = ACTIONS(118),
    [anon_sym_assign] = ACTIONS(121),
    [anon_sym_set_from_resource] = ACTIONS(124),
    [aux_sym_set_token1] = ACTIONS(127),
    [anon_sym_no_focus] = ACTIONS(130),
    [anon_sym_for_window] = ACTIONS(133),
    [anon_sym_hide_edge_borders] = ACTIONS(136),
    [anon_sym_default_floating_border] = ACTIONS(139),
    [anon_sym_default_border] = ACTIONS(139),
    [anon_sym_border] = ACTIONS(139),
    [anon_sym_title_align] = ACTIONS(142),
    [anon_sym_workspace_layout] = ACTIONS(145),
    [anon_sym_default_orientation] = ACTIONS(148),
    [anon_sym_include] = ACTIONS(151),
    [anon_sym_floating_modifier] = ACTIONS(154),
    [anon_sym_floating_minimum_size] = ACTIONS(157),
    [anon_sym_floating_maximum_size] = ACTIONS(157),
    [anon_sym_bindsym] = ACTIONS(160),
    [anon_sym_bindcode] = ACTIONS(160),
    [anon_sym_font] = ACTIONS(163),
    [anon_sym_mode] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(169),
  },
  [4] = {
    [sym__statement] = STATE(5),
    [sym_tiling_drag] = STATE(101),
    [sym_show_marks] = STATE(101),
    [sym_focus_on_window_activation] = STATE(101),
    [sym_force_display_urgency_hint] = STATE(101),
    [sym_workspace_auto_back_and_forth] = STATE(101),
    [sym_force_xinerama] = STATE(101),
    [sym_focus_wrapping] = STATE(101),
    [sym_popup_during_fullscreen] = STATE(101),
    [sym_mouse_warping] = STATE(101),
    [sym_focus_follows_mouse] = STATE(101),
    [sym_ipc_socket] = STATE(101),
    [sym_client] = STATE(101),
    [sym_workspace] = STATE(101),
    [sym_exec] = STATE(101),
    [sym_exec_always] = STATE(101),
    [sym_assign] = STATE(101),
    [sym__definition] = STATE(101),
    [sym_set_from_resource] = STATE(101),
    [sym_set] = STATE(101),
    [sym_no_focus] = STATE(101),
    [sym_for_window] = STATE(101),
    [sym_hide_edge_borders] = STATE(101),
    [sym_border] = STATE(101),
    [sym_title_align] = STATE(101),
    [sym_workspace_layout] = STATE(101),
    [sym_default_orientation] = STATE(101),
    [sym_include] = STATE(101),
    [sym_floating_modifier] = STATE(101),
    [sym_floating_size] = STATE(101),
    [sym_binding] = STATE(101),
    [sym_font] = STATE(101),
    [sym_mode] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [anon_sym_tiling_drag] = ACTIONS(7),
    [anon_sym_show_marks] = ACTIONS(9),
    [anon_sym_focus_on_window_activation] = ACTIONS(11),
    [anon_sym_force_display_urgency_hint] = ACTIONS(13),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(15),
    [anon_sym_force_xinerama] = ACTIONS(17),
    [anon_sym_focus_wrapping] = ACTIONS(19),
    [anon_sym_workspace] = ACTIONS(21),
    [anon_sym_popup_during_fullscreen] = ACTIONS(23),
    [anon_sym_mouse_warping] = ACTIONS(25),
    [anon_sym_focus_follows_mouse] = ACTIONS(27),
    [anon_sym_ipc_DASHsocket] = ACTIONS(29),
    [anon_sym_client_DOT] = ACTIONS(31),
    [anon_sym_exec] = ACTIONS(33),
    [anon_sym_exec_always] = ACTIONS(35),
    [anon_sym_assign] = ACTIONS(37),
    [anon_sym_set_from_resource] = ACTIONS(39),
    [aux_sym_set_token1] = ACTIONS(41),
    [anon_sym_no_focus] = ACTIONS(43),
    [anon_sym_for_window] = ACTIONS(45),
    [anon_sym_hide_edge_borders] = ACTIONS(47),
    [anon_sym_default_floating_border] = ACTIONS(49),
    [anon_sym_default_border] = ACTIONS(49),
    [anon_sym_border] = ACTIONS(49),
    [anon_sym_title_align] = ACTIONS(51),
    [anon_sym_workspace_layout] = ACTIONS(53),
    [anon_sym_default_orientation] = ACTIONS(55),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_floating_modifier] = ACTIONS(59),
    [anon_sym_floating_minimum_size] = ACTIONS(61),
    [anon_sym_floating_maximum_size] = ACTIONS(61),
    [anon_sym_bindsym] = ACTIONS(63),
    [anon_sym_bindcode] = ACTIONS(63),
    [anon_sym_font] = ACTIONS(65),
    [anon_sym_mode] = ACTIONS(67),
  },
  [5] = {
    [sym__statement] = STATE(5),
    [sym_tiling_drag] = STATE(101),
    [sym_show_marks] = STATE(101),
    [sym_focus_on_window_activation] = STATE(101),
    [sym_force_display_urgency_hint] = STATE(101),
    [sym_workspace_auto_back_and_forth] = STATE(101),
    [sym_force_xinerama] = STATE(101),
    [sym_focus_wrapping] = STATE(101),
    [sym_popup_during_fullscreen] = STATE(101),
    [sym_mouse_warping] = STATE(101),
    [sym_focus_follows_mouse] = STATE(101),
    [sym_ipc_socket] = STATE(101),
    [sym_client] = STATE(101),
    [sym_workspace] = STATE(101),
    [sym_exec] = STATE(101),
    [sym_exec_always] = STATE(101),
    [sym_assign] = STATE(101),
    [sym__definition] = STATE(101),
    [sym_set_from_resource] = STATE(101),
    [sym_set] = STATE(101),
    [sym_no_focus] = STATE(101),
    [sym_for_window] = STATE(101),
    [sym_hide_edge_borders] = STATE(101),
    [sym_border] = STATE(101),
    [sym_title_align] = STATE(101),
    [sym_workspace_layout] = STATE(101),
    [sym_default_orientation] = STATE(101),
    [sym_include] = STATE(101),
    [sym_floating_modifier] = STATE(101),
    [sym_floating_size] = STATE(101),
    [sym_binding] = STATE(101),
    [sym_font] = STATE(101),
    [sym_mode] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_comment] = ACTIONS(173),
    [anon_sym_tiling_drag] = ACTIONS(76),
    [anon_sym_show_marks] = ACTIONS(79),
    [anon_sym_focus_on_window_activation] = ACTIONS(82),
    [anon_sym_force_display_urgency_hint] = ACTIONS(85),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(88),
    [anon_sym_force_xinerama] = ACTIONS(91),
    [anon_sym_focus_wrapping] = ACTIONS(94),
    [anon_sym_workspace] = ACTIONS(97),
    [anon_sym_popup_during_fullscreen] = ACTIONS(100),
    [anon_sym_mouse_warping] = ACTIONS(103),
    [anon_sym_focus_follows_mouse] = ACTIONS(106),
    [anon_sym_ipc_DASHsocket] = ACTIONS(109),
    [anon_sym_client_DOT] = ACTIONS(112),
    [anon_sym_exec] = ACTIONS(115),
    [anon_sym_exec_always] = ACTIONS(118),
    [anon_sym_assign] = ACTIONS(121),
    [anon_sym_set_from_resource] = ACTIONS(124),
    [aux_sym_set_token1] = ACTIONS(127),
    [anon_sym_no_focus] = ACTIONS(130),
    [anon_sym_for_window] = ACTIONS(133),
    [anon_sym_hide_edge_borders] = ACTIONS(136),
    [anon_sym_default_floating_border] = ACTIONS(139),
    [anon_sym_default_border] = ACTIONS(139),
    [anon_sym_border] = ACTIONS(139),
    [anon_sym_title_align] = ACTIONS(142),
    [anon_sym_workspace_layout] = ACTIONS(145),
    [anon_sym_default_orientation] = ACTIONS(148),
    [anon_sym_include] = ACTIONS(151),
    [anon_sym_floating_modifier] = ACTIONS(154),
    [anon_sym_floating_minimum_size] = ACTIONS(157),
    [anon_sym_floating_maximum_size] = ACTIONS(157),
    [anon_sym_bindsym] = ACTIONS(160),
    [anon_sym_bindcode] = ACTIONS(160),
    [anon_sym_font] = ACTIONS(163),
    [anon_sym_mode] = ACTIONS(166),
  },
  [6] = {
    [sym__statement] = STATE(3),
    [sym_tiling_drag] = STATE(175),
    [sym_show_marks] = STATE(175),
    [sym_focus_on_window_activation] = STATE(175),
    [sym_force_display_urgency_hint] = STATE(175),
    [sym_workspace_auto_back_and_forth] = STATE(175),
    [sym_force_xinerama] = STATE(175),
    [sym_focus_wrapping] = STATE(175),
    [sym_popup_during_fullscreen] = STATE(175),
    [sym_mouse_warping] = STATE(175),
    [sym_focus_follows_mouse] = STATE(175),
    [sym_ipc_socket] = STATE(175),
    [sym_client] = STATE(175),
    [sym_workspace] = STATE(175),
    [sym_exec] = STATE(175),
    [sym_exec_always] = STATE(175),
    [sym_assign] = STATE(175),
    [sym__definition] = STATE(175),
    [sym_set_from_resource] = STATE(175),
    [sym_set] = STATE(175),
    [sym_no_focus] = STATE(175),
    [sym_for_window] = STATE(175),
    [sym_hide_edge_borders] = STATE(175),
    [sym_border] = STATE(175),
    [sym_title_align] = STATE(175),
    [sym_workspace_layout] = STATE(175),
    [sym_default_orientation] = STATE(175),
    [sym_include] = STATE(175),
    [sym_floating_modifier] = STATE(175),
    [sym_floating_size] = STATE(175),
    [sym_binding] = STATE(175),
    [sym_font] = STATE(175),
    [sym_mode] = STATE(175),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_tiling_drag] = ACTIONS(7),
    [anon_sym_show_marks] = ACTIONS(9),
    [anon_sym_focus_on_window_activation] = ACTIONS(11),
    [anon_sym_force_display_urgency_hint] = ACTIONS(13),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(15),
    [anon_sym_force_xinerama] = ACTIONS(17),
    [anon_sym_focus_wrapping] = ACTIONS(19),
    [anon_sym_workspace] = ACTIONS(21),
    [anon_sym_popup_during_fullscreen] = ACTIONS(23),
    [anon_sym_mouse_warping] = ACTIONS(25),
    [anon_sym_focus_follows_mouse] = ACTIONS(27),
    [anon_sym_ipc_DASHsocket] = ACTIONS(29),
    [anon_sym_client_DOT] = ACTIONS(31),
    [anon_sym_exec] = ACTIONS(33),
    [anon_sym_exec_always] = ACTIONS(35),
    [anon_sym_assign] = ACTIONS(37),
    [anon_sym_set_from_resource] = ACTIONS(39),
    [aux_sym_set_token1] = ACTIONS(41),
    [anon_sym_no_focus] = ACTIONS(43),
    [anon_sym_for_window] = ACTIONS(45),
    [anon_sym_hide_edge_borders] = ACTIONS(47),
    [anon_sym_default_floating_border] = ACTIONS(49),
    [anon_sym_default_border] = ACTIONS(49),
    [anon_sym_border] = ACTIONS(49),
    [anon_sym_title_align] = ACTIONS(51),
    [anon_sym_workspace_layout] = ACTIONS(53),
    [anon_sym_default_orientation] = ACTIONS(55),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_floating_modifier] = ACTIONS(59),
    [anon_sym_floating_minimum_size] = ACTIONS(61),
    [anon_sym_floating_maximum_size] = ACTIONS(61),
    [anon_sym_bindsym] = ACTIONS(63),
    [anon_sym_bindcode] = ACTIONS(63),
    [anon_sym_font] = ACTIONS(65),
    [anon_sym_mode] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(176),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(180), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(178), 35,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_tiling_drag,
      anon_sym_show_marks,
      anon_sym_focus_on_window_activation,
      anon_sym_force_display_urgency_hint,
      anon_sym_workspace_auto_back_and_forth,
      anon_sym_force_xinerama,
      anon_sym_focus_wrapping,
      anon_sym_popup_during_fullscreen,
      anon_sym_mouse_warping,
      anon_sym_focus_follows_mouse,
      anon_sym_ipc_DASHsocket,
      anon_sym_client_DOT,
      anon_sym_exec_always,
      anon_sym_assign,
      anon_sym_set_from_resource,
      aux_sym_set_token1,
      anon_sym_no_focus,
      anon_sym_for_window,
      anon_sym_hide_edge_borders,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_title_align,
      anon_sym_workspace_layout,
      anon_sym_default_orientation,
      anon_sym_include,
      anon_sym_floating_modifier,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
  [42] = 2,
    ACTIONS(180), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(178), 35,
      sym_comment,
      anon_sym_tiling_drag,
      anon_sym_show_marks,
      anon_sym_focus_on_window_activation,
      anon_sym_force_display_urgency_hint,
      anon_sym_workspace_auto_back_and_forth,
      anon_sym_force_xinerama,
      anon_sym_focus_wrapping,
      anon_sym_popup_during_fullscreen,
      anon_sym_mouse_warping,
      anon_sym_focus_follows_mouse,
      anon_sym_ipc_DASHsocket,
      anon_sym_client_DOT,
      anon_sym_exec_always,
      anon_sym_assign,
      anon_sym_set_from_resource,
      aux_sym_set_token1,
      anon_sym_no_focus,
      anon_sym_for_window,
      anon_sym_hide_edge_borders,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_title_align,
      anon_sym_workspace_layout,
      anon_sym_default_orientation,
      anon_sym_include,
      anon_sym_floating_modifier,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [84] = 12,
    ACTIONS(182), 1,
      anon_sym_exec,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_mode,
    ACTIONS(188), 1,
      sym_variable,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(190), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(10), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(49), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [126] = 12,
    ACTIONS(182), 1,
      anon_sym_exec,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_mode,
    ACTIONS(188), 1,
      sym_variable,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    STATE(14), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(190), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(49), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [168] = 12,
    ACTIONS(182), 1,
      anon_sym_exec,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_mode,
    ACTIONS(188), 1,
      sym_variable,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(190), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(13), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(49), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [210] = 12,
    ACTIONS(182), 1,
      anon_sym_exec,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_mode,
    ACTIONS(188), 1,
      sym_variable,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    STATE(16), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(190), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(49), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [252] = 12,
    ACTIONS(182), 1,
      anon_sym_exec,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_mode,
    ACTIONS(188), 1,
      sym_variable,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    STATE(19), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(190), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(49), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [294] = 11,
    ACTIONS(33), 1,
      anon_sym_exec,
    ACTIONS(194), 1,
      aux_sym__statement_token1,
    ACTIONS(198), 1,
      anon_sym_mode,
    ACTIONS(200), 1,
      sym_variable,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(202), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(196), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [332] = 11,
    ACTIONS(33), 1,
      anon_sym_exec,
    ACTIONS(198), 1,
      anon_sym_mode,
    ACTIONS(200), 1,
      sym_variable,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    ACTIONS(206), 1,
      aux_sym__statement_token1,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(202), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(196), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [370] = 11,
    ACTIONS(33), 1,
      anon_sym_exec,
    ACTIONS(198), 1,
      anon_sym_mode,
    ACTIONS(200), 1,
      sym_variable,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    ACTIONS(208), 1,
      aux_sym__statement_token1,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(202), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(196), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [408] = 11,
    ACTIONS(33), 1,
      anon_sym_exec,
    ACTIONS(194), 1,
      aux_sym__statement_token1,
    ACTIONS(198), 1,
      anon_sym_mode,
    ACTIONS(200), 1,
      sym_variable,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(202), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(196), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [446] = 11,
    ACTIONS(210), 1,
      aux_sym__statement_token1,
    ACTIONS(212), 1,
      anon_sym_exec,
    ACTIONS(218), 1,
      anon_sym_mode,
    ACTIONS(221), 1,
      sym_variable,
    ACTIONS(227), 1,
      anon_sym_BSLASH,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(224), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(215), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [484] = 11,
    ACTIONS(33), 1,
      anon_sym_exec,
    ACTIONS(198), 1,
      anon_sym_mode,
    ACTIONS(200), 1,
      sym_variable,
    ACTIONS(204), 1,
      anon_sym_BSLASH,
    ACTIONS(230), 1,
      aux_sym__statement_token1,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(28), 1,
      sym__value,
    STATE(121), 1,
      sym_unit,
    ACTIONS(202), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(120), 2,
      sym_exec,
      sym_border,
    ACTIONS(196), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [522] = 1,
    ACTIONS(232), 14,
      anon_sym_output,
      anon_sym_exec,
      anon_sym_u2192,
      anon_sym_number,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      sym_number,
      anon_sym_BSLASH,
  [539] = 3,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(234), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [558] = 7,
    ACTIONS(182), 1,
      anon_sym_exec,
    ACTIONS(239), 1,
      anon_sym_mode,
    ACTIONS(241), 1,
      sym_variable,
    STATE(152), 1,
      sym_unit,
    ACTIONS(190), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(151), 2,
      sym_exec,
      sym_border,
    ACTIONS(49), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [584] = 7,
    ACTIONS(243), 1,
      anon_sym_all,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 1,
      sym_floating_criteria,
    ACTIONS(251), 1,
      anon_sym_class_EQ,
    ACTIONS(254), 1,
      anon_sym_window_role_EQ,
    ACTIONS(257), 1,
      anon_sym_title_EQ,
    STATE(23), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [610] = 7,
    ACTIONS(260), 1,
      anon_sym_all,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    ACTIONS(264), 1,
      sym_floating_criteria,
    ACTIONS(266), 1,
      anon_sym_class_EQ,
    ACTIONS(268), 1,
      anon_sym_window_role_EQ,
    ACTIONS(270), 1,
      anon_sym_title_EQ,
    STATE(23), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [636] = 7,
    ACTIONS(260), 1,
      anon_sym_all,
    ACTIONS(264), 1,
      sym_floating_criteria,
    ACTIONS(266), 1,
      anon_sym_class_EQ,
    ACTIONS(268), 1,
      anon_sym_window_role_EQ,
    ACTIONS(270), 1,
      anon_sym_title_EQ,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(23), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [662] = 1,
    ACTIONS(274), 10,
      anon_sym_exec,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [675] = 1,
    ACTIONS(276), 10,
      anon_sym_exec,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [688] = 2,
    ACTIONS(278), 1,
      aux_sym__statement_token1,
    ACTIONS(280), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [703] = 2,
    ACTIONS(282), 1,
      aux_sym__statement_token1,
    ACTIONS(284), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [718] = 2,
    ACTIONS(286), 1,
      aux_sym__statement_token1,
    ACTIONS(288), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [733] = 2,
    ACTIONS(290), 1,
      aux_sym__statement_token1,
    ACTIONS(292), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [748] = 2,
    ACTIONS(294), 1,
      aux_sym__statement_token1,
    ACTIONS(296), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [763] = 2,
    ACTIONS(298), 1,
      aux_sym__statement_token1,
    ACTIONS(300), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [778] = 2,
    ACTIONS(302), 1,
      aux_sym__statement_token1,
    ACTIONS(304), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [793] = 2,
    ACTIONS(306), 1,
      aux_sym__statement_token1,
    ACTIONS(308), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [808] = 2,
    ACTIONS(310), 1,
      aux_sym__statement_token1,
    ACTIONS(312), 9,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
  [823] = 6,
    ACTIONS(260), 1,
      anon_sym_all,
    ACTIONS(266), 1,
      anon_sym_class_EQ,
    ACTIONS(268), 1,
      anon_sym_window_role_EQ,
    ACTIONS(270), 1,
      anon_sym_title_EQ,
    ACTIONS(314), 1,
      sym_floating_criteria,
    STATE(24), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [846] = 6,
    ACTIONS(260), 1,
      anon_sym_all,
    ACTIONS(266), 1,
      anon_sym_class_EQ,
    ACTIONS(268), 1,
      anon_sym_window_role_EQ,
    ACTIONS(270), 1,
      anon_sym_title_EQ,
    ACTIONS(316), 1,
      sym_floating_criteria,
    STATE(25), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [869] = 5,
    ACTIONS(318), 1,
      sym_keymap_trigger,
    ACTIONS(322), 1,
      sym_variable,
    STATE(11), 1,
      sym_keymap,
    STATE(41), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(320), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [889] = 5,
    ACTIONS(318), 1,
      sym_keymap_trigger,
    ACTIONS(322), 1,
      sym_variable,
    STATE(9), 1,
      sym_keymap,
    STATE(39), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(320), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [909] = 3,
    ACTIONS(324), 2,
      sym_keymap_trigger,
      sym_variable,
    STATE(41), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(326), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [924] = 7,
    ACTIONS(329), 1,
      anon_sym_output,
    ACTIONS(331), 1,
      anon_sym_u2192,
    ACTIONS(333), 1,
      anon_sym_number,
    ACTIONS(335), 1,
      sym_variable,
    ACTIONS(337), 1,
      sym_number,
    STATE(112), 1,
      sym__workspace_id,
    STATE(113), 2,
      sym_assign_workspace,
      sym_assign_output,
  [947] = 5,
    ACTIONS(339), 1,
      anon_sym_off,
    ACTIONS(341), 1,
      anon_sym_swap_modifier,
    STATE(134), 1,
      sym_tiling_drag_value,
    ACTIONS(343), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
    STATE(130), 2,
      sym_tiling_drag_swap,
      sym_tiling_drag_modifier,
  [965] = 6,
    ACTIONS(329), 1,
      anon_sym_output,
    ACTIONS(333), 1,
      anon_sym_number,
    ACTIONS(335), 1,
      sym_variable,
    ACTIONS(337), 1,
      sym_number,
    STATE(112), 1,
      sym__workspace_id,
    STATE(144), 2,
      sym_assign_workspace,
      sym_assign_output,
  [985] = 3,
    ACTIONS(345), 1,
      anon_sym_smart,
    STATE(93), 1,
      sym_hide_edge_borders_value,
    ACTIONS(347), 5,
      anon_sym_none,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_both,
      anon_sym_smart_no_gaps,
  [999] = 3,
    ACTIONS(351), 1,
      anon_sym_focused,
    STATE(64), 1,
      sym_property,
    ACTIONS(349), 5,
      anon_sym_urgent,
      anon_sym_focused_inactive,
      anon_sym_unfocused,
      anon_sym_placeholder,
      anon_sym_background,
  [1013] = 1,
    ACTIONS(353), 6,
      anon_sym_all,
      anon_sym_RBRACK,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1022] = 1,
    ACTIONS(355), 6,
      anon_sym_all,
      anon_sym_RBRACK,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1031] = 1,
    ACTIONS(357), 6,
      sym_keymap_trigger,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
      sym_variable,
  [1040] = 1,
    ACTIONS(359), 6,
      anon_sym_all,
      anon_sym_RBRACK,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1049] = 1,
    ACTIONS(361), 6,
      anon_sym_all,
      anon_sym_RBRACK,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1058] = 1,
    ACTIONS(363), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_primary,
      anon_sym_nonprimary,
  [1067] = 4,
    ACTIONS(365), 1,
      aux_sym__statement_token1,
    ACTIONS(367), 1,
      sym_number,
    STATE(133), 1,
      sym_unit,
    ACTIONS(202), 2,
      sym_px_unit,
      sym_ppt_unit,
  [1081] = 2,
    STATE(166), 1,
      sym_popup_during_fullscreen_value,
    ACTIONS(369), 4,
      anon_sym_smart,
      anon_sym_ignore,
      anon_sym_leave_fullscreen,
      anon_sym_all,
  [1091] = 2,
    STATE(141), 1,
      sym_focus_on_window_activation_value,
    ACTIONS(371), 4,
      anon_sym_smart,
      anon_sym_urgent,
      anon_sym_focus,
      anon_sym_none,
  [1101] = 2,
    STATE(158), 1,
      sym_focus_wrapping_value,
    ACTIONS(373), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_force,
      anon_sym_workspace,
  [1111] = 2,
    STATE(178), 1,
      sym_default_orientation_value,
    ACTIONS(375), 3,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_auto,
  [1120] = 4,
    ACTIONS(377), 1,
      sym_variable,
    ACTIONS(379), 1,
      sym_number,
    STATE(162), 1,
      sym_workspace_assign_output,
    STATE(163), 1,
      sym__workspace_id,
  [1133] = 2,
    STATE(75), 1,
      sym_border_value,
    ACTIONS(381), 3,
      anon_sym_none,
      anon_sym_normal,
      anon_sym_pixel,
  [1142] = 3,
    ACTIONS(383), 1,
      aux_sym__statement_token1,
    STATE(160), 1,
      sym_unit,
    ACTIONS(202), 2,
      sym_px_unit,
      sym_ppt_unit,
  [1153] = 2,
    STATE(111), 1,
      sym_title_align_value,
    ACTIONS(385), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [1162] = 2,
    STATE(129), 1,
      sym_workspace_layout_value,
    ACTIONS(387), 3,
      anon_sym_default,
      anon_sym_stacking,
      anon_sym_tabbed,
  [1171] = 3,
    ACTIONS(389), 1,
      aux_sym__statement_token1,
    ACTIONS(391), 1,
      sym_variable,
    STATE(72), 1,
      aux_sym_client_repeat1,
  [1181] = 3,
    ACTIONS(391), 1,
      sym_variable,
    ACTIONS(393), 1,
      aux_sym__statement_token1,
    STATE(63), 1,
      aux_sym_client_repeat1,
  [1191] = 2,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(12), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
  [1199] = 2,
    STATE(155), 1,
      sym_force_xinerama_value,
    ACTIONS(395), 2,
      anon_sym_yes,
      anon_sym_no,
  [1207] = 2,
    STATE(139), 1,
      sym_show_marks_value,
    ACTIONS(397), 2,
      anon_sym_yes,
      anon_sym_no,
  [1215] = 3,
    ACTIONS(335), 1,
      sym_variable,
    ACTIONS(399), 1,
      sym_number,
    STATE(145), 1,
      sym__workspace_id,
  [1225] = 3,
    ACTIONS(401), 1,
      aux_sym_floating_modifier_value_token1,
    ACTIONS(403), 1,
      sym_variable,
    STATE(85), 1,
      sym_floating_modifier_value,
  [1235] = 2,
    STATE(153), 1,
      sym_workspace_auto_back_and_forth_value,
    ACTIONS(405), 2,
      anon_sym_yes,
      anon_sym_no,
  [1243] = 2,
    STATE(170), 1,
      sym_focus_follows_mouse_value,
    ACTIONS(407), 2,
      anon_sym_yes,
      anon_sym_no,
  [1251] = 3,
    ACTIONS(409), 1,
      aux_sym__statement_token1,
    ACTIONS(411), 1,
      sym_variable,
    STATE(72), 1,
      aux_sym_client_repeat1,
  [1261] = 2,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_criteria,
  [1268] = 2,
    ACTIONS(414), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(416), 1,
      sym_value,
  [1275] = 2,
    ACTIONS(418), 1,
      aux_sym__statement_token1,
    ACTIONS(420), 1,
      sym_number,
  [1282] = 2,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_criteria,
  [1289] = 2,
    ACTIONS(424), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(426), 1,
      sym_value,
  [1296] = 2,
    ACTIONS(428), 1,
      aux_sym__statement_token1,
    ACTIONS(430), 1,
      sym_number,
  [1303] = 2,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_mode_body,
  [1310] = 2,
    ACTIONS(434), 1,
      aux_sym__statement_token1,
    ACTIONS(436), 1,
      sym_variable,
  [1317] = 2,
    ACTIONS(438), 1,
      sym_variable,
    ACTIONS(440), 1,
      sym_value,
  [1324] = 1,
    ACTIONS(442), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
  [1329] = 2,
    ACTIONS(444), 1,
      aux_sym__statement_token1,
    ACTIONS(446), 1,
      sym_variable,
  [1336] = 1,
    ACTIONS(448), 1,
      sym_font_name,
  [1340] = 1,
    ACTIONS(450), 1,
      aux_sym__statement_token1,
  [1344] = 1,
    ACTIONS(452), 1,
      sym_floating_size_op,
  [1348] = 1,
    ACTIONS(454), 1,
      sym_variable,
  [1352] = 1,
    ACTIONS(456), 1,
      sym_variable,
  [1356] = 1,
    ACTIONS(458), 1,
      sym_keymap_trigger,
  [1360] = 1,
    ACTIONS(460), 1,
      aux_sym__statement_token1,
  [1364] = 1,
    ACTIONS(462), 1,
      aux_sym__statement_token1,
  [1368] = 1,
    ACTIONS(464), 1,
      aux_sym__statement_token1,
  [1372] = 1,
    ACTIONS(466), 1,
      aux_sym__statement_token1,
  [1376] = 1,
    ACTIONS(468), 1,
      sym_set_resource,
  [1380] = 1,
    ACTIONS(470), 1,
      aux_sym__statement_token1,
  [1384] = 1,
    ACTIONS(472), 1,
      aux_sym__statement_token1,
  [1388] = 1,
    ACTIONS(474), 1,
      aux_sym__statement_token1,
  [1392] = 1,
    ACTIONS(476), 1,
      aux_sym__statement_token1,
  [1396] = 1,
    ACTIONS(478), 1,
      sym_value,
  [1400] = 1,
    ACTIONS(480), 1,
      sym_value,
  [1404] = 1,
    ACTIONS(482), 1,
      aux_sym__statement_token1,
  [1408] = 1,
    ACTIONS(484), 1,
      aux_sym__statement_token1,
  [1412] = 1,
    ACTIONS(486), 1,
      aux_sym__statement_token1,
  [1416] = 1,
    ACTIONS(488), 1,
      sym_number,
  [1420] = 1,
    ACTIONS(490), 1,
      sym_quoted_string,
  [1424] = 1,
    ACTIONS(492), 1,
      sym_quoted_string,
  [1428] = 1,
    ACTIONS(494), 1,
      sym_quoted_string,
  [1432] = 1,
    ACTIONS(496), 1,
      sym_value,
  [1436] = 1,
    ACTIONS(498), 1,
      sym_include_source,
  [1440] = 1,
    ACTIONS(500), 1,
      aux_sym__statement_token1,
  [1444] = 1,
    ACTIONS(502), 1,
      aux_sym__statement_token1,
  [1448] = 1,
    ACTIONS(504), 1,
      aux_sym__statement_token1,
  [1452] = 1,
    ACTIONS(506), 1,
      aux_sym__statement_token1,
  [1456] = 1,
    ACTIONS(508), 1,
      sym_set_resource_fallback,
  [1460] = 1,
    ACTIONS(510), 1,
      aux_sym__statement_token1,
  [1464] = 1,
    ACTIONS(512), 1,
      sym_mode_name,
  [1468] = 1,
    ACTIONS(514), 1,
      aux_sym__statement_token1,
  [1472] = 1,
    ACTIONS(516), 1,
      aux_sym__statement_token1,
  [1476] = 1,
    ACTIONS(518), 1,
      sym_number,
  [1480] = 1,
    ACTIONS(520), 1,
      aux_sym__statement_token1,
  [1484] = 1,
    ACTIONS(522), 1,
      aux_sym__statement_token1,
  [1488] = 1,
    ACTIONS(524), 1,
      aux_sym__statement_token1,
  [1492] = 1,
    ACTIONS(526), 1,
      aux_sym__statement_token1,
  [1496] = 1,
    ACTIONS(528), 1,
      sym_mode_name,
  [1500] = 1,
    ACTIONS(530), 1,
      aux_sym__statement_token1,
  [1504] = 1,
    ACTIONS(532), 1,
      sym_number,
  [1508] = 1,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
  [1512] = 1,
    ACTIONS(536), 1,
      sym_value,
  [1516] = 1,
    ACTIONS(538), 1,
      aux_sym__statement_token1,
  [1520] = 1,
    ACTIONS(540), 1,
      aux_sym__statement_token1,
  [1524] = 1,
    ACTIONS(542), 1,
      aux_sym__statement_token1,
  [1528] = 1,
    ACTIONS(544), 1,
      sym_value,
  [1532] = 1,
    ACTIONS(546), 1,
      aux_sym__statement_token1,
  [1536] = 1,
    ACTIONS(548), 1,
      aux_sym__statement_token1,
  [1540] = 1,
    ACTIONS(550), 1,
      aux_sym__statement_token1,
  [1544] = 1,
    ACTIONS(552), 1,
      aux_sym__statement_token1,
  [1548] = 1,
    ACTIONS(554), 1,
      aux_sym__statement_token1,
  [1552] = 1,
    ACTIONS(556), 1,
      aux_sym__statement_token1,
  [1556] = 1,
    ACTIONS(558), 1,
      aux_sym__statement_token1,
  [1560] = 1,
    ACTIONS(560), 1,
      aux_sym__statement_token1,
  [1564] = 1,
    ACTIONS(562), 1,
      aux_sym__statement_token1,
  [1568] = 1,
    ACTIONS(564), 1,
      anon_sym_ms,
  [1572] = 1,
    ACTIONS(566), 1,
      aux_sym__statement_token1,
  [1576] = 1,
    ACTIONS(568), 1,
      aux_sym__statement_token1,
  [1580] = 1,
    ACTIONS(570), 1,
      aux_sym__statement_token1,
  [1584] = 1,
    ACTIONS(572), 1,
      aux_sym__statement_token1,
  [1588] = 1,
    ACTIONS(574), 1,
      aux_sym__statement_token1,
  [1592] = 1,
    ACTIONS(576), 1,
      aux_sym__statement_token1,
  [1596] = 1,
    ACTIONS(578), 1,
      sym_mode_name,
  [1600] = 1,
    ACTIONS(580), 1,
      aux_sym__statement_token1,
  [1604] = 1,
    ACTIONS(582), 1,
      aux_sym__statement_token1,
  [1608] = 1,
    ACTIONS(584), 1,
      aux_sym__statement_token1,
  [1612] = 1,
    ACTIONS(586), 1,
      aux_sym__statement_token1,
  [1616] = 1,
    ACTIONS(588), 1,
      aux_sym__statement_token1,
  [1620] = 1,
    ACTIONS(590), 1,
      aux_sym__statement_token1,
  [1624] = 1,
    ACTIONS(592), 1,
      aux_sym__statement_token1,
  [1628] = 1,
    ACTIONS(594), 1,
      aux_sym__statement_token1,
  [1632] = 1,
    ACTIONS(596), 1,
      aux_sym__statement_token1,
  [1636] = 1,
    ACTIONS(598), 1,
      anon_sym_output,
  [1640] = 1,
    ACTIONS(600), 1,
      aux_sym__statement_token1,
  [1644] = 1,
    ACTIONS(602), 1,
      aux_sym__statement_token1,
  [1648] = 1,
    ACTIONS(604), 1,
      aux_sym__statement_token1,
  [1652] = 1,
    ACTIONS(606), 1,
      anon_sym_output,
  [1656] = 1,
    ACTIONS(608), 1,
      aux_sym__statement_token1,
  [1660] = 1,
    ACTIONS(610), 1,
      aux_sym__statement_token1,
  [1664] = 1,
    ACTIONS(612), 1,
      aux_sym__statement_token1,
  [1668] = 1,
    ACTIONS(614), 1,
      aux_sym__statement_token1,
  [1672] = 1,
    ACTIONS(616), 1,
      aux_sym__statement_token1,
  [1676] = 1,
    ACTIONS(618), 1,
      aux_sym__statement_token1,
  [1680] = 1,
    ACTIONS(620), 1,
      aux_sym__statement_token1,
  [1684] = 1,
    ACTIONS(622), 1,
      aux_sym__statement_token1,
  [1688] = 1,
    ACTIONS(598), 1,
      aux_sym__statement_token1,
  [1692] = 1,
    ACTIONS(624), 1,
      aux_sym__statement_token1,
  [1696] = 1,
    ACTIONS(232), 1,
      aux_sym__statement_token1,
  [1700] = 1,
    ACTIONS(626), 1,
      aux_sym__statement_token1,
  [1704] = 1,
    ACTIONS(628), 1,
      aux_sym__statement_token1,
  [1708] = 1,
    ACTIONS(630), 1,
      sym_value,
  [1712] = 1,
    ACTIONS(632), 1,
      aux_sym__statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 42,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 168,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 332,
  [SMALL_STATE(16)] = 370,
  [SMALL_STATE(17)] = 408,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 484,
  [SMALL_STATE(20)] = 522,
  [SMALL_STATE(21)] = 539,
  [SMALL_STATE(22)] = 558,
  [SMALL_STATE(23)] = 584,
  [SMALL_STATE(24)] = 610,
  [SMALL_STATE(25)] = 636,
  [SMALL_STATE(26)] = 662,
  [SMALL_STATE(27)] = 675,
  [SMALL_STATE(28)] = 688,
  [SMALL_STATE(29)] = 703,
  [SMALL_STATE(30)] = 718,
  [SMALL_STATE(31)] = 733,
  [SMALL_STATE(32)] = 748,
  [SMALL_STATE(33)] = 763,
  [SMALL_STATE(34)] = 778,
  [SMALL_STATE(35)] = 793,
  [SMALL_STATE(36)] = 808,
  [SMALL_STATE(37)] = 823,
  [SMALL_STATE(38)] = 846,
  [SMALL_STATE(39)] = 869,
  [SMALL_STATE(40)] = 889,
  [SMALL_STATE(41)] = 909,
  [SMALL_STATE(42)] = 924,
  [SMALL_STATE(43)] = 947,
  [SMALL_STATE(44)] = 965,
  [SMALL_STATE(45)] = 985,
  [SMALL_STATE(46)] = 999,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1022,
  [SMALL_STATE(49)] = 1031,
  [SMALL_STATE(50)] = 1040,
  [SMALL_STATE(51)] = 1049,
  [SMALL_STATE(52)] = 1058,
  [SMALL_STATE(53)] = 1067,
  [SMALL_STATE(54)] = 1081,
  [SMALL_STATE(55)] = 1091,
  [SMALL_STATE(56)] = 1101,
  [SMALL_STATE(57)] = 1111,
  [SMALL_STATE(58)] = 1120,
  [SMALL_STATE(59)] = 1133,
  [SMALL_STATE(60)] = 1142,
  [SMALL_STATE(61)] = 1153,
  [SMALL_STATE(62)] = 1162,
  [SMALL_STATE(63)] = 1171,
  [SMALL_STATE(64)] = 1181,
  [SMALL_STATE(65)] = 1191,
  [SMALL_STATE(66)] = 1199,
  [SMALL_STATE(67)] = 1207,
  [SMALL_STATE(68)] = 1215,
  [SMALL_STATE(69)] = 1225,
  [SMALL_STATE(70)] = 1235,
  [SMALL_STATE(71)] = 1243,
  [SMALL_STATE(72)] = 1251,
  [SMALL_STATE(73)] = 1261,
  [SMALL_STATE(74)] = 1268,
  [SMALL_STATE(75)] = 1275,
  [SMALL_STATE(76)] = 1282,
  [SMALL_STATE(77)] = 1289,
  [SMALL_STATE(78)] = 1296,
  [SMALL_STATE(79)] = 1303,
  [SMALL_STATE(80)] = 1310,
  [SMALL_STATE(81)] = 1317,
  [SMALL_STATE(82)] = 1324,
  [SMALL_STATE(83)] = 1329,
  [SMALL_STATE(84)] = 1336,
  [SMALL_STATE(85)] = 1340,
  [SMALL_STATE(86)] = 1344,
  [SMALL_STATE(87)] = 1348,
  [SMALL_STATE(88)] = 1352,
  [SMALL_STATE(89)] = 1356,
  [SMALL_STATE(90)] = 1360,
  [SMALL_STATE(91)] = 1364,
  [SMALL_STATE(92)] = 1368,
  [SMALL_STATE(93)] = 1372,
  [SMALL_STATE(94)] = 1376,
  [SMALL_STATE(95)] = 1380,
  [SMALL_STATE(96)] = 1384,
  [SMALL_STATE(97)] = 1388,
  [SMALL_STATE(98)] = 1392,
  [SMALL_STATE(99)] = 1396,
  [SMALL_STATE(100)] = 1400,
  [SMALL_STATE(101)] = 1404,
  [SMALL_STATE(102)] = 1408,
  [SMALL_STATE(103)] = 1412,
  [SMALL_STATE(104)] = 1416,
  [SMALL_STATE(105)] = 1420,
  [SMALL_STATE(106)] = 1424,
  [SMALL_STATE(107)] = 1428,
  [SMALL_STATE(108)] = 1432,
  [SMALL_STATE(109)] = 1436,
  [SMALL_STATE(110)] = 1440,
  [SMALL_STATE(111)] = 1444,
  [SMALL_STATE(112)] = 1448,
  [SMALL_STATE(113)] = 1452,
  [SMALL_STATE(114)] = 1456,
  [SMALL_STATE(115)] = 1460,
  [SMALL_STATE(116)] = 1464,
  [SMALL_STATE(117)] = 1468,
  [SMALL_STATE(118)] = 1472,
  [SMALL_STATE(119)] = 1476,
  [SMALL_STATE(120)] = 1480,
  [SMALL_STATE(121)] = 1484,
  [SMALL_STATE(122)] = 1488,
  [SMALL_STATE(123)] = 1492,
  [SMALL_STATE(124)] = 1496,
  [SMALL_STATE(125)] = 1500,
  [SMALL_STATE(126)] = 1504,
  [SMALL_STATE(127)] = 1508,
  [SMALL_STATE(128)] = 1512,
  [SMALL_STATE(129)] = 1516,
  [SMALL_STATE(130)] = 1520,
  [SMALL_STATE(131)] = 1524,
  [SMALL_STATE(132)] = 1528,
  [SMALL_STATE(133)] = 1532,
  [SMALL_STATE(134)] = 1536,
  [SMALL_STATE(135)] = 1540,
  [SMALL_STATE(136)] = 1544,
  [SMALL_STATE(137)] = 1548,
  [SMALL_STATE(138)] = 1552,
  [SMALL_STATE(139)] = 1556,
  [SMALL_STATE(140)] = 1560,
  [SMALL_STATE(141)] = 1564,
  [SMALL_STATE(142)] = 1568,
  [SMALL_STATE(143)] = 1572,
  [SMALL_STATE(144)] = 1576,
  [SMALL_STATE(145)] = 1580,
  [SMALL_STATE(146)] = 1584,
  [SMALL_STATE(147)] = 1588,
  [SMALL_STATE(148)] = 1592,
  [SMALL_STATE(149)] = 1596,
  [SMALL_STATE(150)] = 1600,
  [SMALL_STATE(151)] = 1604,
  [SMALL_STATE(152)] = 1608,
  [SMALL_STATE(153)] = 1612,
  [SMALL_STATE(154)] = 1616,
  [SMALL_STATE(155)] = 1620,
  [SMALL_STATE(156)] = 1624,
  [SMALL_STATE(157)] = 1628,
  [SMALL_STATE(158)] = 1632,
  [SMALL_STATE(159)] = 1636,
  [SMALL_STATE(160)] = 1640,
  [SMALL_STATE(161)] = 1644,
  [SMALL_STATE(162)] = 1648,
  [SMALL_STATE(163)] = 1652,
  [SMALL_STATE(164)] = 1656,
  [SMALL_STATE(165)] = 1660,
  [SMALL_STATE(166)] = 1664,
  [SMALL_STATE(167)] = 1668,
  [SMALL_STATE(168)] = 1672,
  [SMALL_STATE(169)] = 1676,
  [SMALL_STATE(170)] = 1680,
  [SMALL_STATE(171)] = 1684,
  [SMALL_STATE(172)] = 1688,
  [SMALL_STATE(173)] = 1692,
  [SMALL_STATE(174)] = 1696,
  [SMALL_STATE(175)] = 1700,
  [SMALL_STATE(176)] = 1704,
  [SMALL_STATE(177)] = 1708,
  [SMALL_STATE(178)] = 1712,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 26),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 14),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 14),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 25),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 25), SHIFT_REPEAT(77),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 25), SHIFT_REPEAT(59),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 25), SHIFT_REPEAT(116),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 25), SHIFT_REPEAT(117),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 25), SHIFT_REPEAT(118),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 25), SHIFT_REPEAT(22),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5, 0, 30),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat2, 1, 0, 13),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 1, 0, 13),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 24),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 24),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 8),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 8),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 28),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 28),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 29),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 29),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4, 0, 16),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4, 0, 16),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_criteria, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_role_criteria, 2, 0, 20),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_flags, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_criteria, 2, 0, 19),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_criteria, 2, 0, 21),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 3, 0, 9),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 2, 0, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 18),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 2, 0, 18), SHIFT_REPEAT(80),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 2, 0, 6),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border_value, 1, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_border_value, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 1, 0, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 1, 0, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier, 2, 0, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_focus, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 2, 0, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders_value, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders, 2, 0, 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_swap, 2, 0, 8),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_swap, 2, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_modifier, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_display_urgency_hint, 3, 0, 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3, 0, 10),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 3, 0, 10),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align_value, 1, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align, 2, 0, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 1, 0, 11),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 12),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout_value, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 2, 0, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 3, 0, 15),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [534] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout, 2, 0, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_value, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation_value, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 16),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 17),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_assign_output, 3, 0, 11),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 7),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks_value, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation_value, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_output, 2, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 2, 0, 22),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_from_resource, 4, 0, 23),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth_value, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth, 2, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama_value, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_size, 4, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping_value, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_id, 1, 0, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 27),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen_value, 1, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mouse_warping, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse_value, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse, 2, 0, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipc_socket, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation, 2, 0, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_i3config(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
