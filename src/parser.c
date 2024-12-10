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
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 208
#define ALIAS_COUNT 0
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 32

enum ts_symbol_identifiers {
  aux_sym__statement_token1 = 1,
  sym_comment = 2,
  anon_sym_smart_borders = 3,
  anon_sym_on = 4,
  anon_sym_off = 5,
  anon_sym_inverse_outer = 6,
  anon_sym_smart_gaps = 7,
  anon_sym_gaps = 8,
  anon_sym_outer = 9,
  anon_sym_inner = 10,
  anon_sym_horizontal = 11,
  anon_sym_vertical = 12,
  anon_sym_top = 13,
  anon_sym_left = 14,
  anon_sym_bottom = 15,
  anon_sym_right = 16,
  anon_sym_plus = 17,
  anon_sym_minus = 18,
  anon_sym_set = 19,
  anon_sym_all = 20,
  anon_sym_current = 21,
  anon_sym_tiling_drag = 22,
  anon_sym_swap_modifier = 23,
  anon_sym_modifier = 24,
  anon_sym_titlebar = 25,
  anon_sym_show_marks = 26,
  anon_sym_yes = 27,
  anon_sym_no = 28,
  anon_sym_focus_on_window_activation = 29,
  anon_sym_smart = 30,
  anon_sym_urgent = 31,
  anon_sym_focus = 32,
  anon_sym_none = 33,
  anon_sym_force_display_urgency_hint = 34,
  anon_sym_ms = 35,
  anon_sym_workspace_auto_back_and_forth = 36,
  anon_sym_force_xinerama = 37,
  anon_sym_focus_wrapping = 38,
  anon_sym_force = 39,
  anon_sym_workspace = 40,
  anon_sym_popup_during_fullscreen = 41,
  anon_sym_ignore = 42,
  anon_sym_leave_fullscreen = 43,
  anon_sym_mouse_warping = 44,
  anon_sym_focus_follows_mouse = 45,
  anon_sym_ipc_DASHsocket = 46,
  anon_sym_client_DOT = 47,
  anon_sym_focused = 48,
  anon_sym_focused_inactive = 49,
  anon_sym_unfocused = 50,
  anon_sym_placeholder = 51,
  anon_sym_background = 52,
  anon_sym_output = 53,
  anon_sym_exec = 54,
  anon_sym_DASH_DASHno_DASHstartup_DASHid = 55,
  anon_sym_exec_always = 56,
  anon_sym_assign = 57,
  anon_sym_u2192 = 58,
  anon_sym_number = 59,
  anon_sym_up = 60,
  anon_sym_down = 61,
  anon_sym_primary = 62,
  anon_sym_nonprimary = 63,
  anon_sym_set_from_resource = 64,
  sym_set_resource = 65,
  sym_set_resource_fallback = 66,
  aux_sym_set_token1 = 67,
  anon_sym_no_focus = 68,
  anon_sym_for_window = 69,
  anon_sym_LBRACK = 70,
  anon_sym_RBRACK = 71,
  sym_floating_criteria = 72,
  anon_sym_class_EQ = 73,
  anon_sym_window_role_EQ = 74,
  anon_sym_title_EQ = 75,
  anon_sym_hide_edge_borders = 76,
  anon_sym_both = 77,
  anon_sym_smart_no_gaps = 78,
  anon_sym_default_floating_border = 79,
  anon_sym_default_border = 80,
  anon_sym_border = 81,
  anon_sym_normal = 82,
  anon_sym_pixel = 83,
  anon_sym_title_align = 84,
  anon_sym_center = 85,
  anon_sym_workspace_layout = 86,
  anon_sym_default = 87,
  anon_sym_stacking = 88,
  anon_sym_tabbed = 89,
  anon_sym_default_orientation = 90,
  anon_sym_auto = 91,
  anon_sym_include = 92,
  sym_include_source = 93,
  anon_sym_floating_modifier = 94,
  aux_sym_floating_modifier_value_token1 = 95,
  anon_sym_floating_minimum_size = 96,
  anon_sym_floating_maximum_size = 97,
  sym_floating_size_op = 98,
  anon_sym_bindsym = 99,
  anon_sym_bindcode = 100,
  sym_keymap_trigger = 101,
  anon_sym_DASH_DASHrelease = 102,
  anon_sym_DASH_DASHborder = 103,
  anon_sym_DASH_DASHwhole_DASHwindow = 104,
  anon_sym_DASH_DASHexclude_DASHtitlebar = 105,
  anon_sym_font = 106,
  sym_font_name = 107,
  anon_sym_mode = 108,
  sym_mode_name = 109,
  anon_sym_LBRACE = 110,
  anon_sym_RBRACE = 111,
  sym_variable = 112,
  sym_px_unit = 113,
  sym_ppt_unit = 114,
  sym_number = 115,
  sym_quoted_string = 116,
  anon_sym_BSLASH = 117,
  sym_value = 118,
  anon_sym_kill = 119,
  anon_sym_restart = 120,
  anon_sym_sticky = 121,
  anon_sym_enable = 122,
  anon_sym_disable = 123,
  anon_sym_toggle = 124,
  sym_source_file = 125,
  sym__statement = 126,
  sym_smart_borders = 127,
  sym_smart_borders_value = 128,
  sym_smart_gaps = 129,
  sym_smart_gaps_value = 130,
  sym_gaps = 131,
  sym_gaps_option = 132,
  sym_tiling_drag = 133,
  sym_tiling_drag_value = 134,
  sym_tiling_drag_swap = 135,
  sym_tiling_drag_modifier = 136,
  sym_show_marks = 137,
  sym_show_marks_value = 138,
  sym_focus_on_window_activation = 139,
  sym_focus_on_window_activation_value = 140,
  sym_force_display_urgency_hint = 141,
  sym_workspace_auto_back_and_forth = 142,
  sym_workspace_auto_back_and_forth_value = 143,
  sym_force_xinerama = 144,
  sym_force_xinerama_value = 145,
  sym_focus_wrapping = 146,
  sym_focus_wrapping_value = 147,
  sym_popup_during_fullscreen = 148,
  sym_popup_during_fullscreen_value = 149,
  sym_mouse_warping = 150,
  sym_focus_follows_mouse = 151,
  sym_focus_follows_mouse_value = 152,
  sym_ipc_socket = 153,
  sym_client = 154,
  sym_property = 155,
  sym_workspace = 156,
  sym_workspace_assign_output = 157,
  sym__workspace_id = 158,
  sym_exec = 159,
  sym_exec_always = 160,
  sym_assign = 161,
  sym_assign_workspace = 162,
  sym_assign_output = 163,
  sym__definition = 164,
  sym_set_from_resource = 165,
  sym_set = 166,
  sym_no_focus = 167,
  sym_for_window = 168,
  sym_criteria = 169,
  sym_all_criteria = 170,
  sym_class_criteria = 171,
  sym_window_role_criteria = 172,
  sym_title_criteria = 173,
  sym_hide_edge_borders = 174,
  sym_hide_edge_borders_value = 175,
  sym_border = 176,
  sym_border_value = 177,
  sym_title_align = 178,
  sym_title_align_value = 179,
  sym_workspace_layout = 180,
  sym_workspace_layout_value = 181,
  sym_default_orientation = 182,
  sym_default_orientation_value = 183,
  sym_include = 184,
  sym_floating_modifier = 185,
  sym_floating_modifier_value = 186,
  sym_floating_size = 187,
  sym_binding = 188,
  sym_keymap = 189,
  sym_keymap_flags = 190,
  sym_font = 191,
  sym_mode = 192,
  sym_mode_body = 193,
  sym_unit = 194,
  sym__value = 195,
  sym__i3_commands = 196,
  sym_focus = 197,
  sym_focus_value = 198,
  sym_sticky = 199,
  sym_sticky_value = 200,
  aux_sym_source_file_repeat1 = 201,
  aux_sym_gaps_repeat1 = 202,
  aux_sym_client_repeat1 = 203,
  aux_sym_for_window_repeat1 = 204,
  aux_sym_for_window_repeat2 = 205,
  aux_sym_criteria_repeat1 = 206,
  aux_sym_binding_repeat1 = 207,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [sym_comment] = "comment",
  [anon_sym_smart_borders] = "smart_borders",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_inverse_outer] = "inverse_outer",
  [anon_sym_smart_gaps] = "smart_gaps",
  [anon_sym_gaps] = "gaps",
  [anon_sym_outer] = "outer",
  [anon_sym_inner] = "inner",
  [anon_sym_horizontal] = "horizontal",
  [anon_sym_vertical] = "vertical",
  [anon_sym_top] = "top",
  [anon_sym_left] = "left",
  [anon_sym_bottom] = "bottom",
  [anon_sym_right] = "right",
  [anon_sym_plus] = "plus",
  [anon_sym_minus] = "minus",
  [anon_sym_set] = "set",
  [anon_sym_all] = "all",
  [anon_sym_current] = "current",
  [anon_sym_tiling_drag] = "tiling_drag",
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
  [anon_sym_kill] = "kill",
  [anon_sym_restart] = "restart",
  [anon_sym_sticky] = "sticky",
  [anon_sym_enable] = "enable",
  [anon_sym_disable] = "disable",
  [anon_sym_toggle] = "toggle",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_smart_borders] = "smart_borders",
  [sym_smart_borders_value] = "smart_borders_value",
  [sym_smart_gaps] = "smart_gaps",
  [sym_smart_gaps_value] = "smart_gaps_value",
  [sym_gaps] = "gaps",
  [sym_gaps_option] = "gaps_option",
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
  [sym__i3_commands] = "_i3_commands",
  [sym_focus] = "focus",
  [sym_focus_value] = "focus_value",
  [sym_sticky] = "sticky",
  [sym_sticky_value] = "sticky_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_gaps_repeat1] = "gaps_repeat1",
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
  [anon_sym_smart_borders] = anon_sym_smart_borders,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_inverse_outer] = anon_sym_inverse_outer,
  [anon_sym_smart_gaps] = anon_sym_smart_gaps,
  [anon_sym_gaps] = anon_sym_gaps,
  [anon_sym_outer] = anon_sym_outer,
  [anon_sym_inner] = anon_sym_inner,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_plus] = anon_sym_plus,
  [anon_sym_minus] = anon_sym_minus,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_current] = anon_sym_current,
  [anon_sym_tiling_drag] = anon_sym_tiling_drag,
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
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_restart] = anon_sym_restart,
  [anon_sym_sticky] = anon_sym_sticky,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_disable] = anon_sym_disable,
  [anon_sym_toggle] = anon_sym_toggle,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_smart_borders] = sym_smart_borders,
  [sym_smart_borders_value] = sym_smart_borders_value,
  [sym_smart_gaps] = sym_smart_gaps,
  [sym_smart_gaps_value] = sym_smart_gaps_value,
  [sym_gaps] = sym_gaps,
  [sym_gaps_option] = sym_gaps_option,
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
  [sym__i3_commands] = sym__i3_commands,
  [sym_focus] = sym_focus,
  [sym_focus_value] = sym_focus_value,
  [sym_sticky] = sym_sticky,
  [sym_sticky_value] = sym_sticky_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_gaps_repeat1] = aux_sym_gaps_repeat1,
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
  [anon_sym_smart_borders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inverse_outer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smart_gaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_current] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tiling_drag] = {
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
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sticky] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toggle] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_smart_borders] = {
    .visible = true,
    .named = true,
  },
  [sym_smart_borders_value] = {
    .visible = true,
    .named = true,
  },
  [sym_smart_gaps] = {
    .visible = true,
    .named = true,
  },
  [sym_smart_gaps_value] = {
    .visible = true,
    .named = true,
  },
  [sym_gaps] = {
    .visible = true,
    .named = true,
  },
  [sym_gaps_option] = {
    .visible = true,
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
  [sym__i3_commands] = {
    .visible = false,
    .named = true,
  },
  [sym_focus] = {
    .visible = true,
    .named = true,
  },
  [sym_focus_value] = {
    .visible = true,
    .named = true,
  },
  [sym_sticky] = {
    .visible = true,
    .named = true,
  },
  [sym_sticky_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gaps_repeat1] = {
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
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 3},
  [15] = {.index = 18, .length = 3},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 1},
  [22] = {.index = 30, .length = 1},
  [23] = {.index = 31, .length = 1},
  [24] = {.index = 32, .length = 3},
  [25] = {.index = 35, .length = 1},
  [26] = {.index = 36, .length = 6},
  [27] = {.index = 42, .length = 3},
  [28] = {.index = 45, .length = 1},
  [29] = {.index = 46, .length = 1},
  [30] = {.index = 47, .length = 1},
  [31] = {.index = 48, .length = 3},
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
    {field_value, 2},
  [8] =
    {field_identifier, 1},
  [9] =
    {field_identifier, 2, .inherited = true},
    {field_property, 1},
  [11] =
    {field_command, 2},
  [12] =
    {field_identifier, 0, .inherited = true},
  [13] =
    {field_identifier, 1},
    {field_value, 2},
  [15] =
    {field_identifier, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_unit, 0, .inherited = true},
  [18] =
    {field_identifier, 2, .inherited = true},
    {field_name, 2, .inherited = true},
    {field_unit, 2, .inherited = true},
  [21] =
    {field_mode, 1},
    {field_value, 2},
  [23] =
    {field_name, 2},
  [24] =
    {field_body, 2},
    {field_name, 1},
  [26] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [28] =
    {field_class, 1},
  [29] =
    {field_window_role, 1},
  [30] =
    {field_title, 1},
  [31] =
    {field_identifier, 1, .inherited = true},
  [32] =
    {field_fallback, 3},
    {field_identifier, 1},
    {field_resource, 2},
  [35] =
    {field_unit, 0},
  [36] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_unit, 0, .inherited = true},
    {field_unit, 1, .inherited = true},
  [42] =
    {field_identifier, 3, .inherited = true},
    {field_name, 3, .inherited = true},
    {field_unit, 3, .inherited = true},
  [45] =
    {field_name, 3},
  [46] =
    {field_name, 1},
  [47] =
    {field_unit, 1},
  [48] =
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
  [25] = 25,
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
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 41,
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
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 137,
  [191] = 191,
  [192] = 21,
  [193] = 102,
  [194] = 194,
  [195] = 195,
  [196] = 196,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(776);
      ADVANCE_MAP(
        '"', 1,
        '#', 778,
        '$', 767,
        '+', 766,
        '-', 16,
        '[', 855,
        '\\', 911,
        ']', 856,
        'a', 390,
        'b', 67,
        'c', 225,
        'd', 201,
        'e', 457,
        'f', 391,
        'g', 69,
        'h', 330,
        'i', 27,
        'k', 335,
        'l', 202,
        'm', 338,
        'n', 494,
        'o', 286,
        'p', 331,
        'r', 229,
        's', 236,
        't', 71,
        'u', 459,
        'v', 231,
        'w', 354,
        'x', 886,
        'y', 235,
        '{', 900,
        '}', 901,
        0x2192, 843,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(771);
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 777,
        '$', 767,
        '\\', 911,
        'b', 541,
        'd', 283,
        'e', 749,
        'f', 536,
        'g', 69,
        'k', 335,
        'm', 531,
        'p', 548,
        'r', 228,
        's', 685,
        '+', 766,
        '-', 766,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead != 0) ADVANCE(771);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(908);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(909);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(898);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 4,
        '#', 851,
        '$', 767,
        '[', 855,
        '\\', 911,
        ']', 856,
        'a', 389,
        'b', 493,
        'c', 410,
        'd', 283,
        'e', 749,
        'f', 432,
        'g', 69,
        'h', 498,
        'i', 309,
        'k', 335,
        'l', 202,
        'm', 339,
        'n', 520,
        'o', 702,
        'p', 423,
        'r', 229,
        's', 271,
        't', 372,
        'u', 576,
        'v', 231,
        'w', 353,
        0x2192, 843,
        '+', 766,
        '-', 766,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(910);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(767);
      if (lookahead == '-') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(767);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(768);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0) ADVANCE(772);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(772);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(642);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(678);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(745);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(850);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(830);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(736);
      if (lookahead == 'g') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(859);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(861);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(861);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(860);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(138);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(135);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(137);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(328);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(740);
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(740);
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(294);
      if (lookahead != 0) ADVANCE(852);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(290);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(744);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(442);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(183);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(320);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(240);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(512);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(609);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(602);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(643);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(293);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(443);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(108);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(716);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(649);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(446);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(746);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(301);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(658);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead == 'i') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(622);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(699);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(506);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == 'w') ADVANCE(325);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(506);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == 'w') ADVANCE(325);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(237);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(407);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(254);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(414);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(537);
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(537);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(430);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(539);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(540);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(707);
      if (lookahead == 'n') ADVANCE(657);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(838);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(837);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 's') ADVANCE(755);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(679);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(681);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(724);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(604);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(657);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(713);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(876);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(835);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(839);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(718);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == 'x') ADVANCE(345);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(584);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(515);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(524);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(542);
      if (lookahead == 'y') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(652);
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(580);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead == 'h') ADVANCE(500);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == 'p') ADVANCE(711);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead == 'h') ADVANCE(500);
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 285:
      if (lookahead == 'f') ADVANCE(782);
      END_STATE();
    case 286:
      if (lookahead == 'f') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(781);
      if (lookahead == 'u') ADVANCE(672);
      END_STATE();
    case 287:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 288:
      if (lookahead == 'f') ADVANCE(505);
      END_STATE();
    case 289:
      if (lookahead == 'f') ADVANCE(658);
      END_STATE();
    case 290:
      if (lookahead == 'f') ADVANCE(722);
      END_STATE();
    case 291:
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 292:
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == 'w') ADVANCE(605);
      END_STATE();
    case 293:
      if (lookahead == 'f') ADVANCE(529);
      END_STATE();
    case 294:
      if (lookahead == 'f') ADVANCE(589);
      END_STATE();
    case 295:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 296:
      if (lookahead == 'f') ADVANCE(533);
      END_STATE();
    case 297:
      if (lookahead == 'f') ADVANCE(369);
      END_STATE();
    case 298:
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 299:
      if (lookahead == 'f') ADVANCE(370);
      END_STATE();
    case 300:
      if (lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 301:
      if (lookahead == 'f') ADVANCE(730);
      END_STATE();
    case 302:
      if (lookahead == 'g') ADVANCE(858);
      END_STATE();
    case 303:
      if (lookahead == 'g') ADVANCE(875);
      END_STATE();
    case 304:
      if (lookahead == 'g') ADVANCE(800);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(827);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(819);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(857);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(318);
      if (lookahead == 'p') ADVANCE(790);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(451);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(452);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(587);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 317:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 318:
      if (lookahead == 'g') ADVANCE(411);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 320:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 321:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 322:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 323:
      if (lookahead == 'h') ADVANCE(863);
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 324:
      if (lookahead == 'h') ADVANCE(817);
      END_STATE();
    case 325:
      if (lookahead == 'h') ADVANCE(530);
      END_STATE();
    case 326:
      if (lookahead == 'h') ADVANCE(659);
      END_STATE();
    case 327:
      if (lookahead == 'h') ADVANCE(514);
      END_STATE();
    case 328:
      if (lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(751);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(655);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == 'x') ADVANCE(904);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(751);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 's') ADVANCE(816);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(732);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(693);
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(488);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 381:
      if (lookahead == 'k') ADVANCE(752);
      END_STATE();
    case 382:
      if (lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 383:
      if (lookahead == 'k') ADVANCE(636);
      END_STATE();
    case 384:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 385:
      if (lookahead == 'k') ADVANCE(627);
      END_STATE();
    case 386:
      if (lookahead == 'k') ADVANCE(261);
      END_STATE();
    case 387:
      if (lookahead == 'k') ADVANCE(360);
      END_STATE();
    case 388:
      if (lookahead == 'k') ADVANCE(653);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead == 'u') ADVANCE(676);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(926);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(869);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(868);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(788);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(741);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(664);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(580);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(684);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(671);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(511);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead == 'p') ADVANCE(655);
      if (lookahead == 'x') ADVANCE(904);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 426:
      if (lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(651);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 430:
      if (lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 431:
      if (lookahead == 'l') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 432:
      if (lookahead == 'l') ADVANCE(545);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 433:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 434:
      if (lookahead == 'm') ADVANCE(792);
      END_STATE();
    case 435:
      if (lookahead == 'm') ADVANCE(887);
      END_STATE();
    case 436:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 437:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 438:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 439:
      if (lookahead == 'm') ADVANCE(708);
      END_STATE();
    case 440:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 441:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 442:
      if (lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 443:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 444:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 445:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 446:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 447:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 448:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 449:
      if (lookahead == 'm') ADVANCE(729);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(846);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(877);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(824);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 458:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 459:
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 460:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 461:
      if (lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 462:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 463:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 464:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 465:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 466:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 467:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 469:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 470:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 471:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 472:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 473:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 474:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 475:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 477:
      if (lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 478:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 479:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 480:
      if (lookahead == 'n') ADVANCE(691);
      END_STATE();
    case 481:
      if (lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 482:
      if (lookahead == 'n') ADVANCE(668);
      END_STATE();
    case 483:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 484:
      if (lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 486:
      if (lookahead == 'n') ADVANCE(523);
      END_STATE();
    case 487:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 488:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(807);
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 546:
      if (lookahead == 'p') ADVANCE(790);
      END_STATE();
    case 547:
      if (lookahead == 'p') ADVANCE(703);
      END_STATE();
    case 548:
      if (lookahead == 'p') ADVANCE(655);
      if (lookahead == 'x') ADVANCE(904);
      END_STATE();
    case 549:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 550:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 551:
      if (lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 552:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 553:
      if (lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 554:
      if (lookahead == 'p') ADVANCE(628);
      END_STATE();
    case 555:
      if (lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 556:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 557:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 558:
      if (lookahead == 'p') ADVANCE(362);
      END_STATE();
    case 559:
      if (lookahead == 'p') ADVANCE(363);
      END_STATE();
    case 560:
      if (lookahead == 'p') ADVANCE(559);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(844);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(803);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(866);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(893);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(632);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(645);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 617:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 618:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(805);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(785);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(794);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(795);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(853);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(841);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(780);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(864);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(862);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(812);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(552);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(553);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(894);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(791);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(793);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(836);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(811);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(799);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(927);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(872);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(873);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 702:
      if (lookahead == 'u') ADVANCE(672);
      END_STATE();
    case 703:
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 704:
      if (lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 705:
      if (lookahead == 'u') ADVANCE(622);
      END_STATE();
    case 706:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 707:
      if (lookahead == 'u') ADVANCE(624);
      END_STATE();
    case 708:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 709:
      if (lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 710:
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 711:
      if (lookahead == 'u') ADVANCE(661);
      END_STATE();
    case 712:
      if (lookahead == 'u') ADVANCE(633);
      END_STATE();
    case 713:
      if (lookahead == 'u') ADVANCE(634);
      END_STATE();
    case 714:
      if (lookahead == 'u') ADVANCE(667);
      END_STATE();
    case 715:
      if (lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 716:
      if (lookahead == 'u') ADVANCE(606);
      END_STATE();
    case 717:
      if (lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 718:
      if (lookahead == 'u') ADVANCE(612);
      END_STATE();
    case 719:
      if (lookahead == 'u') ADVANCE(417);
      END_STATE();
    case 720:
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 721:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 722:
      if (lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 723:
      if (lookahead == 'u') ADVANCE(418);
      END_STATE();
    case 724:
      if (lookahead == 'u') ADVANCE(646);
      END_STATE();
    case 725:
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 726:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 727:
      if (lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 728:
      if (lookahead == 'u') ADVANCE(694);
      END_STATE();
    case 729:
      if (lookahead == 'u') ADVANCE(448);
      END_STATE();
    case 730:
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 731:
      if (lookahead == 'v') ADVANCE(233);
      END_STATE();
    case 732:
      if (lookahead == 'v') ADVANCE(218);
      END_STATE();
    case 733:
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 734:
      if (lookahead == 'w') ADVANCE(854);
      END_STATE();
    case 735:
      if (lookahead == 'w') ADVANCE(892);
      END_STATE();
    case 736:
      if (lookahead == 'w') ADVANCE(433);
      END_STATE();
    case 737:
      if (lookahead == 'w') ADVANCE(62);
      END_STATE();
    case 738:
      if (lookahead == 'w') ADVANCE(450);
      END_STATE();
    case 739:
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 740:
      if (lookahead == 'w') ADVANCE(373);
      END_STATE();
    case 741:
      if (lookahead == 'w') ADVANCE(80);
      END_STATE();
    case 742:
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 743:
      if (lookahead == 'w') ADVANCE(650);
      END_STATE();
    case 744:
      if (lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 745:
      if (lookahead == 'w') ADVANCE(375);
      END_STATE();
    case 746:
      if (lookahead == 'w') ADVANCE(377);
      END_STATE();
    case 747:
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 748:
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 749:
      if (lookahead == 'x') ADVANCE(250);
      END_STATE();
    case 750:
      if (lookahead == 'x') ADVANCE(347);
      END_STATE();
    case 751:
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 752:
      if (lookahead == 'y') ADVANCE(928);
      END_STATE();
    case 753:
      if (lookahead == 'y') ADVANCE(847);
      END_STATE();
    case 754:
      if (lookahead == 'y') ADVANCE(848);
      END_STATE();
    case 755:
      if (lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 756:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 757:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 758:
      if (lookahead == 'y') ADVANCE(629);
      END_STATE();
    case 759:
      if (lookahead == 'y') ADVANCE(525);
      END_STATE();
    case 760:
      if (lookahead == 'z') ADVANCE(528);
      END_STATE();
    case 761:
      if (lookahead == 'z') ADVANCE(221);
      END_STATE();
    case 762:
      if (lookahead == 'z') ADVANCE(222);
      END_STATE();
    case 763:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(763);
      if (lookahead != 0) ADVANCE(774);
      END_STATE();
    case 764:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(764);
      if (lookahead != 0) ADVANCE(772);
      END_STATE();
    case 765:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(765);
      if (lookahead != 0) ADVANCE(770);
      END_STATE();
    case 766:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 767:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(902);
      END_STATE();
    case 768:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 769:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(880);
      END_STATE();
    case 770:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(773);
      END_STATE();
    case 771:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 772:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 773:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 774:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(769);
      END_STATE();
    case 775:
      if (eof) ADVANCE(776);
      ADVANCE_MAP(
        '"', 10,
        '#', 779,
        'a', 619,
        'b', 68,
        'c', 426,
        'd', 282,
        'e', 747,
        'f', 431,
        'g', 69,
        'h', 329,
        'i', 491,
        'l', 244,
        'm', 499,
        'n', 496,
        'p', 332,
        'r', 333,
        's', 268,
        't', 371,
        'u', 459,
        'w', 501,
        '}', 901,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(775);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(777);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(779);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(779);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_smart_borders);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_inverse_outer);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_smart_gaps);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_gaps);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_outer);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_inner);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_plus);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_minus);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_current);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_swap_modifier);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_titlebar);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_show_marks);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_focus_on_window_activation);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(479);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_urgent);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_focus);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_force_display_urgency_hint);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_workspace_auto_back_and_forth);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_force_xinerama);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_focus_wrapping);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_force);
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_popup_during_fullscreen);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_leave_fullscreen);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_mouse_warping);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_focus_follows_mouse);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_ipc_DASHsocket);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_client_DOT);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_focused);
      if (lookahead == '_') ADVANCE(346);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_focused_inactive);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_unfocused);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_primary);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_nonprimary);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_set_from_resource);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_set_resource);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(850);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_set_resource_fallback);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(851);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_no_focus);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_floating_criteria);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_floating_criteria);
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_class_EQ);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_window_role_EQ);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_title_EQ);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_smart_no_gaps);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_pixel);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(138);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_stacking);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_tabbed);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(880);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_floating_modifier_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_floating_size_op);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_DASH_DASHborder);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_DASH_DASHwhole_DASHwindow);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_DASH_DASHexclude_DASHtitlebar);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_mode_name);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_px_unit);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_ppt_unit);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'i') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 's') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(925);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_sticky);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 775},
  [2] = {.lex_state = 775},
  [3] = {.lex_state = 775},
  [4] = {.lex_state = 775},
  [5] = {.lex_state = 775},
  [6] = {.lex_state = 775},
  [7] = {.lex_state = 775},
  [8] = {.lex_state = 775},
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
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 775},
  [51] = {.lex_state = 775},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 200},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 775},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 200},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 200},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 200},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 200},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 200},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 763},
  [105] = {.lex_state = 764},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 764},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 775},
  [117] = {.lex_state = 775},
  [118] = {.lex_state = 775},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 764},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 764},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 765},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 764},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 764},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_smart_borders] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_inverse_outer] = ACTIONS(1),
    [anon_sym_smart_gaps] = ACTIONS(1),
    [anon_sym_gaps] = ACTIONS(1),
    [anon_sym_outer] = ACTIONS(1),
    [anon_sym_inner] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_plus] = ACTIONS(1),
    [anon_sym_minus] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_current] = ACTIONS(1),
    [anon_sym_tiling_drag] = ACTIONS(1),
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
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_primary] = ACTIONS(1),
    [anon_sym_nonprimary] = ACTIONS(1),
    [anon_sym_set_from_resource] = ACTIONS(1),
    [sym_set_resource] = ACTIONS(1),
    [sym_set_resource_fallback] = ACTIONS(1),
    [anon_sym_no_focus] = ACTIONS(1),
    [anon_sym_for_window] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_floating_criteria] = ACTIONS(1),
    [anon_sym_class_EQ] = ACTIONS(1),
    [anon_sym_window_role_EQ] = ACTIONS(1),
    [anon_sym_title_EQ] = ACTIONS(1),
    [anon_sym_hide_edge_borders] = ACTIONS(1),
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
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_restart] = ACTIONS(1),
    [anon_sym_sticky] = ACTIONS(1),
    [anon_sym_enable] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(177),
    [sym__statement] = STATE(2),
    [sym_smart_borders] = STATE(102),
    [sym_smart_gaps] = STATE(102),
    [sym_gaps] = STATE(102),
    [sym_tiling_drag] = STATE(102),
    [sym_show_marks] = STATE(102),
    [sym_focus_on_window_activation] = STATE(102),
    [sym_force_display_urgency_hint] = STATE(102),
    [sym_workspace_auto_back_and_forth] = STATE(102),
    [sym_force_xinerama] = STATE(102),
    [sym_focus_wrapping] = STATE(102),
    [sym_popup_during_fullscreen] = STATE(102),
    [sym_mouse_warping] = STATE(102),
    [sym_focus_follows_mouse] = STATE(102),
    [sym_ipc_socket] = STATE(102),
    [sym_client] = STATE(102),
    [sym_workspace] = STATE(102),
    [sym_exec] = STATE(102),
    [sym_exec_always] = STATE(102),
    [sym_assign] = STATE(102),
    [sym__definition] = STATE(102),
    [sym_set_from_resource] = STATE(102),
    [sym_set] = STATE(102),
    [sym_no_focus] = STATE(102),
    [sym_for_window] = STATE(102),
    [sym_hide_edge_borders] = STATE(102),
    [sym_border] = STATE(102),
    [sym_title_align] = STATE(102),
    [sym_workspace_layout] = STATE(102),
    [sym_default_orientation] = STATE(102),
    [sym_include] = STATE(102),
    [sym_floating_modifier] = STATE(102),
    [sym_floating_size] = STATE(102),
    [sym_binding] = STATE(102),
    [sym_font] = STATE(102),
    [sym_mode] = STATE(102),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_smart_borders] = ACTIONS(7),
    [anon_sym_smart_gaps] = ACTIONS(9),
    [anon_sym_gaps] = ACTIONS(11),
    [anon_sym_tiling_drag] = ACTIONS(13),
    [anon_sym_show_marks] = ACTIONS(15),
    [anon_sym_focus_on_window_activation] = ACTIONS(17),
    [anon_sym_force_display_urgency_hint] = ACTIONS(19),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(21),
    [anon_sym_force_xinerama] = ACTIONS(23),
    [anon_sym_focus_wrapping] = ACTIONS(25),
    [anon_sym_workspace] = ACTIONS(27),
    [anon_sym_popup_during_fullscreen] = ACTIONS(29),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(33),
    [anon_sym_ipc_DASHsocket] = ACTIONS(35),
    [anon_sym_client_DOT] = ACTIONS(37),
    [anon_sym_exec] = ACTIONS(39),
    [anon_sym_exec_always] = ACTIONS(41),
    [anon_sym_assign] = ACTIONS(43),
    [anon_sym_set_from_resource] = ACTIONS(45),
    [aux_sym_set_token1] = ACTIONS(47),
    [anon_sym_no_focus] = ACTIONS(49),
    [anon_sym_for_window] = ACTIONS(51),
    [anon_sym_hide_edge_borders] = ACTIONS(53),
    [anon_sym_default_floating_border] = ACTIONS(55),
    [anon_sym_default_border] = ACTIONS(55),
    [anon_sym_border] = ACTIONS(55),
    [anon_sym_title_align] = ACTIONS(57),
    [anon_sym_workspace_layout] = ACTIONS(59),
    [anon_sym_default_orientation] = ACTIONS(61),
    [anon_sym_include] = ACTIONS(63),
    [anon_sym_floating_modifier] = ACTIONS(65),
    [anon_sym_floating_minimum_size] = ACTIONS(67),
    [anon_sym_floating_maximum_size] = ACTIONS(67),
    [anon_sym_bindsym] = ACTIONS(69),
    [anon_sym_bindcode] = ACTIONS(69),
    [anon_sym_font] = ACTIONS(71),
    [anon_sym_mode] = ACTIONS(73),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_smart_borders] = STATE(102),
    [sym_smart_gaps] = STATE(102),
    [sym_gaps] = STATE(102),
    [sym_tiling_drag] = STATE(102),
    [sym_show_marks] = STATE(102),
    [sym_focus_on_window_activation] = STATE(102),
    [sym_force_display_urgency_hint] = STATE(102),
    [sym_workspace_auto_back_and_forth] = STATE(102),
    [sym_force_xinerama] = STATE(102),
    [sym_focus_wrapping] = STATE(102),
    [sym_popup_during_fullscreen] = STATE(102),
    [sym_mouse_warping] = STATE(102),
    [sym_focus_follows_mouse] = STATE(102),
    [sym_ipc_socket] = STATE(102),
    [sym_client] = STATE(102),
    [sym_workspace] = STATE(102),
    [sym_exec] = STATE(102),
    [sym_exec_always] = STATE(102),
    [sym_assign] = STATE(102),
    [sym__definition] = STATE(102),
    [sym_set_from_resource] = STATE(102),
    [sym_set] = STATE(102),
    [sym_no_focus] = STATE(102),
    [sym_for_window] = STATE(102),
    [sym_hide_edge_borders] = STATE(102),
    [sym_border] = STATE(102),
    [sym_title_align] = STATE(102),
    [sym_workspace_layout] = STATE(102),
    [sym_default_orientation] = STATE(102),
    [sym_include] = STATE(102),
    [sym_floating_modifier] = STATE(102),
    [sym_floating_size] = STATE(102),
    [sym_binding] = STATE(102),
    [sym_font] = STATE(102),
    [sym_mode] = STATE(102),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [anon_sym_smart_borders] = ACTIONS(7),
    [anon_sym_smart_gaps] = ACTIONS(9),
    [anon_sym_gaps] = ACTIONS(11),
    [anon_sym_tiling_drag] = ACTIONS(13),
    [anon_sym_show_marks] = ACTIONS(15),
    [anon_sym_focus_on_window_activation] = ACTIONS(17),
    [anon_sym_force_display_urgency_hint] = ACTIONS(19),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(21),
    [anon_sym_force_xinerama] = ACTIONS(23),
    [anon_sym_focus_wrapping] = ACTIONS(25),
    [anon_sym_workspace] = ACTIONS(27),
    [anon_sym_popup_during_fullscreen] = ACTIONS(29),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(33),
    [anon_sym_ipc_DASHsocket] = ACTIONS(35),
    [anon_sym_client_DOT] = ACTIONS(37),
    [anon_sym_exec] = ACTIONS(39),
    [anon_sym_exec_always] = ACTIONS(41),
    [anon_sym_assign] = ACTIONS(43),
    [anon_sym_set_from_resource] = ACTIONS(45),
    [aux_sym_set_token1] = ACTIONS(47),
    [anon_sym_no_focus] = ACTIONS(49),
    [anon_sym_for_window] = ACTIONS(51),
    [anon_sym_hide_edge_borders] = ACTIONS(53),
    [anon_sym_default_floating_border] = ACTIONS(55),
    [anon_sym_default_border] = ACTIONS(55),
    [anon_sym_border] = ACTIONS(55),
    [anon_sym_title_align] = ACTIONS(57),
    [anon_sym_workspace_layout] = ACTIONS(59),
    [anon_sym_default_orientation] = ACTIONS(61),
    [anon_sym_include] = ACTIONS(63),
    [anon_sym_floating_modifier] = ACTIONS(65),
    [anon_sym_floating_minimum_size] = ACTIONS(67),
    [anon_sym_floating_maximum_size] = ACTIONS(67),
    [anon_sym_bindsym] = ACTIONS(69),
    [anon_sym_bindcode] = ACTIONS(69),
    [anon_sym_font] = ACTIONS(71),
    [anon_sym_mode] = ACTIONS(73),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_smart_borders] = STATE(102),
    [sym_smart_gaps] = STATE(102),
    [sym_gaps] = STATE(102),
    [sym_tiling_drag] = STATE(102),
    [sym_show_marks] = STATE(102),
    [sym_focus_on_window_activation] = STATE(102),
    [sym_force_display_urgency_hint] = STATE(102),
    [sym_workspace_auto_back_and_forth] = STATE(102),
    [sym_force_xinerama] = STATE(102),
    [sym_focus_wrapping] = STATE(102),
    [sym_popup_during_fullscreen] = STATE(102),
    [sym_mouse_warping] = STATE(102),
    [sym_focus_follows_mouse] = STATE(102),
    [sym_ipc_socket] = STATE(102),
    [sym_client] = STATE(102),
    [sym_workspace] = STATE(102),
    [sym_exec] = STATE(102),
    [sym_exec_always] = STATE(102),
    [sym_assign] = STATE(102),
    [sym__definition] = STATE(102),
    [sym_set_from_resource] = STATE(102),
    [sym_set] = STATE(102),
    [sym_no_focus] = STATE(102),
    [sym_for_window] = STATE(102),
    [sym_hide_edge_borders] = STATE(102),
    [sym_border] = STATE(102),
    [sym_title_align] = STATE(102),
    [sym_workspace_layout] = STATE(102),
    [sym_default_orientation] = STATE(102),
    [sym_include] = STATE(102),
    [sym_floating_modifier] = STATE(102),
    [sym_floating_size] = STATE(102),
    [sym_binding] = STATE(102),
    [sym_font] = STATE(102),
    [sym_mode] = STATE(102),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(79),
    [anon_sym_smart_borders] = ACTIONS(82),
    [anon_sym_smart_gaps] = ACTIONS(85),
    [anon_sym_gaps] = ACTIONS(88),
    [anon_sym_tiling_drag] = ACTIONS(91),
    [anon_sym_show_marks] = ACTIONS(94),
    [anon_sym_focus_on_window_activation] = ACTIONS(97),
    [anon_sym_force_display_urgency_hint] = ACTIONS(100),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(103),
    [anon_sym_force_xinerama] = ACTIONS(106),
    [anon_sym_focus_wrapping] = ACTIONS(109),
    [anon_sym_workspace] = ACTIONS(112),
    [anon_sym_popup_during_fullscreen] = ACTIONS(115),
    [anon_sym_mouse_warping] = ACTIONS(118),
    [anon_sym_focus_follows_mouse] = ACTIONS(121),
    [anon_sym_ipc_DASHsocket] = ACTIONS(124),
    [anon_sym_client_DOT] = ACTIONS(127),
    [anon_sym_exec] = ACTIONS(130),
    [anon_sym_exec_always] = ACTIONS(133),
    [anon_sym_assign] = ACTIONS(136),
    [anon_sym_set_from_resource] = ACTIONS(139),
    [aux_sym_set_token1] = ACTIONS(142),
    [anon_sym_no_focus] = ACTIONS(145),
    [anon_sym_for_window] = ACTIONS(148),
    [anon_sym_hide_edge_borders] = ACTIONS(151),
    [anon_sym_default_floating_border] = ACTIONS(154),
    [anon_sym_default_border] = ACTIONS(154),
    [anon_sym_border] = ACTIONS(154),
    [anon_sym_title_align] = ACTIONS(157),
    [anon_sym_workspace_layout] = ACTIONS(160),
    [anon_sym_default_orientation] = ACTIONS(163),
    [anon_sym_include] = ACTIONS(166),
    [anon_sym_floating_modifier] = ACTIONS(169),
    [anon_sym_floating_minimum_size] = ACTIONS(172),
    [anon_sym_floating_maximum_size] = ACTIONS(172),
    [anon_sym_bindsym] = ACTIONS(175),
    [anon_sym_bindcode] = ACTIONS(175),
    [anon_sym_font] = ACTIONS(178),
    [anon_sym_mode] = ACTIONS(181),
  },
  [4] = {
    [sym__statement] = STATE(6),
    [sym_smart_borders] = STATE(193),
    [sym_smart_gaps] = STATE(193),
    [sym_gaps] = STATE(193),
    [sym_tiling_drag] = STATE(193),
    [sym_show_marks] = STATE(193),
    [sym_focus_on_window_activation] = STATE(193),
    [sym_force_display_urgency_hint] = STATE(193),
    [sym_workspace_auto_back_and_forth] = STATE(193),
    [sym_force_xinerama] = STATE(193),
    [sym_focus_wrapping] = STATE(193),
    [sym_popup_during_fullscreen] = STATE(193),
    [sym_mouse_warping] = STATE(193),
    [sym_focus_follows_mouse] = STATE(193),
    [sym_ipc_socket] = STATE(193),
    [sym_client] = STATE(193),
    [sym_workspace] = STATE(193),
    [sym_exec] = STATE(193),
    [sym_exec_always] = STATE(193),
    [sym_assign] = STATE(193),
    [sym__definition] = STATE(193),
    [sym_set_from_resource] = STATE(193),
    [sym_set] = STATE(193),
    [sym_no_focus] = STATE(193),
    [sym_for_window] = STATE(193),
    [sym_hide_edge_borders] = STATE(193),
    [sym_border] = STATE(193),
    [sym_title_align] = STATE(193),
    [sym_workspace_layout] = STATE(193),
    [sym_default_orientation] = STATE(193),
    [sym_include] = STATE(193),
    [sym_floating_modifier] = STATE(193),
    [sym_floating_size] = STATE(193),
    [sym_binding] = STATE(193),
    [sym_font] = STATE(193),
    [sym_mode] = STATE(193),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(184),
    [anon_sym_smart_borders] = ACTIONS(7),
    [anon_sym_smart_gaps] = ACTIONS(9),
    [anon_sym_gaps] = ACTIONS(11),
    [anon_sym_tiling_drag] = ACTIONS(13),
    [anon_sym_show_marks] = ACTIONS(15),
    [anon_sym_focus_on_window_activation] = ACTIONS(17),
    [anon_sym_force_display_urgency_hint] = ACTIONS(19),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(21),
    [anon_sym_force_xinerama] = ACTIONS(23),
    [anon_sym_focus_wrapping] = ACTIONS(25),
    [anon_sym_workspace] = ACTIONS(27),
    [anon_sym_popup_during_fullscreen] = ACTIONS(29),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(33),
    [anon_sym_ipc_DASHsocket] = ACTIONS(35),
    [anon_sym_client_DOT] = ACTIONS(37),
    [anon_sym_exec] = ACTIONS(39),
    [anon_sym_exec_always] = ACTIONS(41),
    [anon_sym_assign] = ACTIONS(43),
    [anon_sym_set_from_resource] = ACTIONS(45),
    [aux_sym_set_token1] = ACTIONS(47),
    [anon_sym_no_focus] = ACTIONS(49),
    [anon_sym_for_window] = ACTIONS(51),
    [anon_sym_hide_edge_borders] = ACTIONS(53),
    [anon_sym_default_floating_border] = ACTIONS(55),
    [anon_sym_default_border] = ACTIONS(55),
    [anon_sym_border] = ACTIONS(55),
    [anon_sym_title_align] = ACTIONS(57),
    [anon_sym_workspace_layout] = ACTIONS(59),
    [anon_sym_default_orientation] = ACTIONS(61),
    [anon_sym_include] = ACTIONS(63),
    [anon_sym_floating_modifier] = ACTIONS(65),
    [anon_sym_floating_minimum_size] = ACTIONS(67),
    [anon_sym_floating_maximum_size] = ACTIONS(67),
    [anon_sym_bindsym] = ACTIONS(69),
    [anon_sym_bindcode] = ACTIONS(69),
    [anon_sym_font] = ACTIONS(71),
    [anon_sym_mode] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(186),
  },
  [5] = {
    [sym__statement] = STATE(5),
    [sym_smart_borders] = STATE(193),
    [sym_smart_gaps] = STATE(193),
    [sym_gaps] = STATE(193),
    [sym_tiling_drag] = STATE(193),
    [sym_show_marks] = STATE(193),
    [sym_focus_on_window_activation] = STATE(193),
    [sym_force_display_urgency_hint] = STATE(193),
    [sym_workspace_auto_back_and_forth] = STATE(193),
    [sym_force_xinerama] = STATE(193),
    [sym_focus_wrapping] = STATE(193),
    [sym_popup_during_fullscreen] = STATE(193),
    [sym_mouse_warping] = STATE(193),
    [sym_focus_follows_mouse] = STATE(193),
    [sym_ipc_socket] = STATE(193),
    [sym_client] = STATE(193),
    [sym_workspace] = STATE(193),
    [sym_exec] = STATE(193),
    [sym_exec_always] = STATE(193),
    [sym_assign] = STATE(193),
    [sym__definition] = STATE(193),
    [sym_set_from_resource] = STATE(193),
    [sym_set] = STATE(193),
    [sym_no_focus] = STATE(193),
    [sym_for_window] = STATE(193),
    [sym_hide_edge_borders] = STATE(193),
    [sym_border] = STATE(193),
    [sym_title_align] = STATE(193),
    [sym_workspace_layout] = STATE(193),
    [sym_default_orientation] = STATE(193),
    [sym_include] = STATE(193),
    [sym_floating_modifier] = STATE(193),
    [sym_floating_size] = STATE(193),
    [sym_binding] = STATE(193),
    [sym_font] = STATE(193),
    [sym_mode] = STATE(193),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(188),
    [anon_sym_smart_borders] = ACTIONS(82),
    [anon_sym_smart_gaps] = ACTIONS(85),
    [anon_sym_gaps] = ACTIONS(88),
    [anon_sym_tiling_drag] = ACTIONS(91),
    [anon_sym_show_marks] = ACTIONS(94),
    [anon_sym_focus_on_window_activation] = ACTIONS(97),
    [anon_sym_force_display_urgency_hint] = ACTIONS(100),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(103),
    [anon_sym_force_xinerama] = ACTIONS(106),
    [anon_sym_focus_wrapping] = ACTIONS(109),
    [anon_sym_workspace] = ACTIONS(112),
    [anon_sym_popup_during_fullscreen] = ACTIONS(115),
    [anon_sym_mouse_warping] = ACTIONS(118),
    [anon_sym_focus_follows_mouse] = ACTIONS(121),
    [anon_sym_ipc_DASHsocket] = ACTIONS(124),
    [anon_sym_client_DOT] = ACTIONS(127),
    [anon_sym_exec] = ACTIONS(130),
    [anon_sym_exec_always] = ACTIONS(133),
    [anon_sym_assign] = ACTIONS(136),
    [anon_sym_set_from_resource] = ACTIONS(139),
    [aux_sym_set_token1] = ACTIONS(142),
    [anon_sym_no_focus] = ACTIONS(145),
    [anon_sym_for_window] = ACTIONS(148),
    [anon_sym_hide_edge_borders] = ACTIONS(151),
    [anon_sym_default_floating_border] = ACTIONS(154),
    [anon_sym_default_border] = ACTIONS(154),
    [anon_sym_border] = ACTIONS(154),
    [anon_sym_title_align] = ACTIONS(157),
    [anon_sym_workspace_layout] = ACTIONS(160),
    [anon_sym_default_orientation] = ACTIONS(163),
    [anon_sym_include] = ACTIONS(166),
    [anon_sym_floating_modifier] = ACTIONS(169),
    [anon_sym_floating_minimum_size] = ACTIONS(172),
    [anon_sym_floating_maximum_size] = ACTIONS(172),
    [anon_sym_bindsym] = ACTIONS(175),
    [anon_sym_bindcode] = ACTIONS(175),
    [anon_sym_font] = ACTIONS(178),
    [anon_sym_mode] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(77),
  },
  [6] = {
    [sym__statement] = STATE(5),
    [sym_smart_borders] = STATE(193),
    [sym_smart_gaps] = STATE(193),
    [sym_gaps] = STATE(193),
    [sym_tiling_drag] = STATE(193),
    [sym_show_marks] = STATE(193),
    [sym_focus_on_window_activation] = STATE(193),
    [sym_force_display_urgency_hint] = STATE(193),
    [sym_workspace_auto_back_and_forth] = STATE(193),
    [sym_force_xinerama] = STATE(193),
    [sym_focus_wrapping] = STATE(193),
    [sym_popup_during_fullscreen] = STATE(193),
    [sym_mouse_warping] = STATE(193),
    [sym_focus_follows_mouse] = STATE(193),
    [sym_ipc_socket] = STATE(193),
    [sym_client] = STATE(193),
    [sym_workspace] = STATE(193),
    [sym_exec] = STATE(193),
    [sym_exec_always] = STATE(193),
    [sym_assign] = STATE(193),
    [sym__definition] = STATE(193),
    [sym_set_from_resource] = STATE(193),
    [sym_set] = STATE(193),
    [sym_no_focus] = STATE(193),
    [sym_for_window] = STATE(193),
    [sym_hide_edge_borders] = STATE(193),
    [sym_border] = STATE(193),
    [sym_title_align] = STATE(193),
    [sym_workspace_layout] = STATE(193),
    [sym_default_orientation] = STATE(193),
    [sym_include] = STATE(193),
    [sym_floating_modifier] = STATE(193),
    [sym_floating_size] = STATE(193),
    [sym_binding] = STATE(193),
    [sym_font] = STATE(193),
    [sym_mode] = STATE(193),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(184),
    [anon_sym_smart_borders] = ACTIONS(7),
    [anon_sym_smart_gaps] = ACTIONS(9),
    [anon_sym_gaps] = ACTIONS(11),
    [anon_sym_tiling_drag] = ACTIONS(13),
    [anon_sym_show_marks] = ACTIONS(15),
    [anon_sym_focus_on_window_activation] = ACTIONS(17),
    [anon_sym_force_display_urgency_hint] = ACTIONS(19),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(21),
    [anon_sym_force_xinerama] = ACTIONS(23),
    [anon_sym_focus_wrapping] = ACTIONS(25),
    [anon_sym_workspace] = ACTIONS(27),
    [anon_sym_popup_during_fullscreen] = ACTIONS(29),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(33),
    [anon_sym_ipc_DASHsocket] = ACTIONS(35),
    [anon_sym_client_DOT] = ACTIONS(37),
    [anon_sym_exec] = ACTIONS(39),
    [anon_sym_exec_always] = ACTIONS(41),
    [anon_sym_assign] = ACTIONS(43),
    [anon_sym_set_from_resource] = ACTIONS(45),
    [aux_sym_set_token1] = ACTIONS(47),
    [anon_sym_no_focus] = ACTIONS(49),
    [anon_sym_for_window] = ACTIONS(51),
    [anon_sym_hide_edge_borders] = ACTIONS(53),
    [anon_sym_default_floating_border] = ACTIONS(55),
    [anon_sym_default_border] = ACTIONS(55),
    [anon_sym_border] = ACTIONS(55),
    [anon_sym_title_align] = ACTIONS(57),
    [anon_sym_workspace_layout] = ACTIONS(59),
    [anon_sym_default_orientation] = ACTIONS(61),
    [anon_sym_include] = ACTIONS(63),
    [anon_sym_floating_modifier] = ACTIONS(65),
    [anon_sym_floating_minimum_size] = ACTIONS(67),
    [anon_sym_floating_maximum_size] = ACTIONS(67),
    [anon_sym_bindsym] = ACTIONS(69),
    [anon_sym_bindcode] = ACTIONS(69),
    [anon_sym_font] = ACTIONS(71),
    [anon_sym_mode] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(191),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(195), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(193), 38,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_smart_borders,
      anon_sym_smart_gaps,
      anon_sym_gaps,
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
  [45] = 2,
    ACTIONS(195), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(193), 38,
      sym_comment,
      anon_sym_smart_borders,
      anon_sym_smart_gaps,
      anon_sym_gaps,
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
  [90] = 16,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_exec,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_mode,
    ACTIONS(205), 1,
      sym_variable,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(213), 1,
      anon_sym_sticky,
    STATE(14), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(207), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(211), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(22), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [149] = 16,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_exec,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_mode,
    ACTIONS(205), 1,
      sym_variable,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(213), 1,
      anon_sym_sticky,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(207), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(211), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(22), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [208] = 16,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_exec,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_mode,
    ACTIONS(205), 1,
      sym_variable,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(213), 1,
      anon_sym_sticky,
    STATE(19), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(207), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(211), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(22), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [267] = 16,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_exec,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_mode,
    ACTIONS(205), 1,
      sym_variable,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(213), 1,
      anon_sym_sticky,
    STATE(16), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(207), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(211), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(11), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [326] = 16,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_exec,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_mode,
    ACTIONS(205), 1,
      sym_variable,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(213), 1,
      anon_sym_sticky,
    STATE(15), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(207), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(211), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(10), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [385] = 15,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(215), 1,
      aux_sym__statement_token1,
    ACTIONS(217), 1,
      anon_sym_gaps,
    ACTIONS(219), 1,
      anon_sym_focus,
    ACTIONS(223), 1,
      anon_sym_mode,
    ACTIONS(225), 1,
      sym_variable,
    ACTIONS(229), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_sticky,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(227), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(231), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(221), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [440] = 15,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(217), 1,
      anon_sym_gaps,
    ACTIONS(219), 1,
      anon_sym_focus,
    ACTIONS(223), 1,
      anon_sym_mode,
    ACTIONS(225), 1,
      sym_variable,
    ACTIONS(229), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_sticky,
    ACTIONS(235), 1,
      aux_sym__statement_token1,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(227), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(231), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(221), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [495] = 15,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(217), 1,
      anon_sym_gaps,
    ACTIONS(219), 1,
      anon_sym_focus,
    ACTIONS(223), 1,
      anon_sym_mode,
    ACTIONS(225), 1,
      sym_variable,
    ACTIONS(229), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_sticky,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(227), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(231), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(221), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [550] = 15,
    ACTIONS(239), 1,
      aux_sym__statement_token1,
    ACTIONS(241), 1,
      anon_sym_gaps,
    ACTIONS(244), 1,
      anon_sym_focus,
    ACTIONS(247), 1,
      anon_sym_exec,
    ACTIONS(253), 1,
      anon_sym_mode,
    ACTIONS(256), 1,
      sym_variable,
    ACTIONS(262), 1,
      anon_sym_BSLASH,
    ACTIONS(268), 1,
      anon_sym_sticky,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(259), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(265), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(250), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [605] = 15,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(217), 1,
      anon_sym_gaps,
    ACTIONS(219), 1,
      anon_sym_focus,
    ACTIONS(223), 1,
      anon_sym_mode,
    ACTIONS(225), 1,
      sym_variable,
    ACTIONS(229), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_sticky,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(227), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(231), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(221), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [660] = 15,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(217), 1,
      anon_sym_gaps,
    ACTIONS(219), 1,
      anon_sym_focus,
    ACTIONS(223), 1,
      anon_sym_mode,
    ACTIONS(225), 1,
      sym_variable,
    ACTIONS(229), 1,
      anon_sym_BSLASH,
    ACTIONS(233), 1,
      anon_sym_sticky,
    ACTIONS(271), 1,
      aux_sym__statement_token1,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(25), 1,
      sym__value,
    STATE(134), 1,
      sym_unit,
    ACTIONS(227), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(231), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(221), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(133), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [715] = 11,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_exec,
    ACTIONS(213), 1,
      anon_sym_sticky,
    ACTIONS(273), 1,
      anon_sym_mode,
    ACTIONS(275), 1,
      sym_variable,
    STATE(168), 1,
      sym_unit,
    ACTIONS(207), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(277), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(167), 6,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_focus,
      sym_sticky,
  [758] = 1,
    ACTIONS(279), 19,
      anon_sym_gaps,
      anon_sym_focus,
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
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [780] = 3,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    STATE(22), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(281), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [804] = 3,
    ACTIONS(288), 1,
      sym_number,
    STATE(24), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(286), 13,
      anon_sym_outer,
      anon_sym_inner,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_top,
      anon_sym_left,
      anon_sym_bottom,
      anon_sym_right,
      anon_sym_plus,
      anon_sym_minus,
      anon_sym_set,
      anon_sym_all,
      anon_sym_current,
  [827] = 3,
    ACTIONS(293), 1,
      sym_number,
    STATE(24), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(290), 13,
      anon_sym_outer,
      anon_sym_inner,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_top,
      anon_sym_left,
      anon_sym_bottom,
      anon_sym_right,
      anon_sym_plus,
      anon_sym_minus,
      anon_sym_set,
      anon_sym_all,
      anon_sym_current,
  [850] = 2,
    ACTIONS(295), 1,
      aux_sym__statement_token1,
    ACTIONS(297), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [870] = 1,
    ACTIONS(299), 15,
      anon_sym_gaps,
      anon_sym_focus,
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
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [888] = 2,
    STATE(23), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(286), 13,
      anon_sym_outer,
      anon_sym_inner,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_top,
      anon_sym_left,
      anon_sym_bottom,
      anon_sym_right,
      anon_sym_plus,
      anon_sym_minus,
      anon_sym_set,
      anon_sym_all,
      anon_sym_current,
  [908] = 2,
    ACTIONS(301), 1,
      aux_sym__statement_token1,
    ACTIONS(303), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [928] = 2,
    ACTIONS(305), 1,
      aux_sym__statement_token1,
    ACTIONS(307), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [948] = 1,
    ACTIONS(309), 15,
      anon_sym_gaps,
      anon_sym_focus,
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
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [966] = 2,
    ACTIONS(311), 1,
      aux_sym__statement_token1,
    ACTIONS(313), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [986] = 2,
    ACTIONS(315), 1,
      aux_sym__statement_token1,
    ACTIONS(317), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [1006] = 2,
    ACTIONS(319), 1,
      aux_sym__statement_token1,
    ACTIONS(321), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [1026] = 2,
    ACTIONS(323), 1,
      aux_sym__statement_token1,
    ACTIONS(325), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [1046] = 2,
    ACTIONS(327), 1,
      aux_sym__statement_token1,
    ACTIONS(329), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [1066] = 2,
    ACTIONS(331), 1,
      aux_sym__statement_token1,
    ACTIONS(333), 14,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_sticky,
  [1086] = 1,
    ACTIONS(335), 14,
      anon_sym_outer,
      anon_sym_inner,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_top,
      anon_sym_left,
      anon_sym_bottom,
      anon_sym_right,
      anon_sym_plus,
      anon_sym_minus,
      anon_sym_set,
      anon_sym_all,
      anon_sym_current,
      sym_number,
  [1103] = 7,
    ACTIONS(337), 1,
      anon_sym_all,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(341), 1,
      sym_floating_criteria,
    ACTIONS(343), 1,
      anon_sym_class_EQ,
    ACTIONS(345), 1,
      anon_sym_window_role_EQ,
    ACTIONS(347), 1,
      anon_sym_title_EQ,
    STATE(39), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1129] = 7,
    ACTIONS(349), 1,
      anon_sym_all,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    ACTIONS(354), 1,
      sym_floating_criteria,
    ACTIONS(357), 1,
      anon_sym_class_EQ,
    ACTIONS(360), 1,
      anon_sym_window_role_EQ,
    ACTIONS(363), 1,
      anon_sym_title_EQ,
    STATE(39), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1155] = 7,
    ACTIONS(337), 1,
      anon_sym_all,
    ACTIONS(341), 1,
      sym_floating_criteria,
    ACTIONS(343), 1,
      anon_sym_class_EQ,
    ACTIONS(345), 1,
      anon_sym_window_role_EQ,
    ACTIONS(347), 1,
      anon_sym_title_EQ,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    STATE(39), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1181] = 6,
    ACTIONS(337), 1,
      anon_sym_all,
    ACTIONS(343), 1,
      anon_sym_class_EQ,
    ACTIONS(345), 1,
      anon_sym_window_role_EQ,
    ACTIONS(347), 1,
      anon_sym_title_EQ,
    ACTIONS(368), 1,
      sym_floating_criteria,
    STATE(40), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1204] = 6,
    ACTIONS(337), 1,
      anon_sym_all,
    ACTIONS(343), 1,
      anon_sym_class_EQ,
    ACTIONS(345), 1,
      anon_sym_window_role_EQ,
    ACTIONS(347), 1,
      anon_sym_title_EQ,
    ACTIONS(370), 1,
      sym_floating_criteria,
    STATE(38), 5,
      sym_all_criteria,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1227] = 5,
    ACTIONS(372), 1,
      sym_keymap_trigger,
    ACTIONS(376), 1,
      sym_variable,
    STATE(13), 1,
      sym_keymap,
    STATE(44), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(374), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1247] = 5,
    ACTIONS(372), 1,
      sym_keymap_trigger,
    ACTIONS(376), 1,
      sym_variable,
    STATE(12), 1,
      sym_keymap,
    STATE(46), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(374), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1267] = 7,
    ACTIONS(378), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_u2192,
    ACTIONS(382), 1,
      anon_sym_number,
    ACTIONS(384), 1,
      sym_variable,
    ACTIONS(386), 1,
      sym_number,
    STATE(123), 1,
      sym__workspace_id,
    STATE(124), 2,
      sym_assign_workspace,
      sym_assign_output,
  [1290] = 3,
    ACTIONS(388), 2,
      sym_keymap_trigger,
      sym_variable,
    STATE(46), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(390), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1305] = 5,
    ACTIONS(393), 1,
      anon_sym_off,
    ACTIONS(395), 1,
      anon_sym_swap_modifier,
    STATE(111), 1,
      sym_tiling_drag_value,
    ACTIONS(397), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
    STATE(103), 2,
      sym_tiling_drag_swap,
      sym_tiling_drag_modifier,
  [1323] = 6,
    ACTIONS(378), 1,
      anon_sym_output,
    ACTIONS(382), 1,
      anon_sym_number,
    ACTIONS(384), 1,
      sym_variable,
    ACTIONS(386), 1,
      sym_number,
    STATE(123), 1,
      sym__workspace_id,
    STATE(158), 2,
      sym_assign_workspace,
      sym_assign_output,
  [1343] = 3,
    ACTIONS(401), 1,
      anon_sym_smart,
    STATE(180), 1,
      sym_hide_edge_borders_value,
    ACTIONS(399), 5,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_none,
      anon_sym_both,
      anon_sym_smart_no_gaps,
  [1357] = 3,
    ACTIONS(405), 1,
      anon_sym_focused,
    STATE(74), 1,
      sym_property,
    ACTIONS(403), 5,
      anon_sym_urgent,
      anon_sym_focused_inactive,
      anon_sym_unfocused,
      anon_sym_placeholder,
      anon_sym_background,
  [1371] = 1,
    ACTIONS(407), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_primary,
      anon_sym_nonprimary,
  [1380] = 1,
    ACTIONS(409), 6,
      anon_sym_all,
      anon_sym_RBRACK,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1389] = 1,
    ACTIONS(411), 6,
      anon_sym_all,
      anon_sym_RBRACK,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1398] = 1,
    ACTIONS(413), 6,
      anon_sym_all,
      anon_sym_RBRACK,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1407] = 1,
    ACTIONS(415), 6,
      anon_sym_all,
      anon_sym_RBRACK,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1416] = 1,
    ACTIONS(417), 6,
      sym_keymap_trigger,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
      sym_variable,
  [1425] = 4,
    ACTIONS(419), 1,
      aux_sym__statement_token1,
    ACTIONS(421), 1,
      sym_number,
    STATE(146), 1,
      sym_unit,
    ACTIONS(227), 2,
      sym_px_unit,
      sym_ppt_unit,
  [1439] = 2,
    STATE(162), 1,
      sym_focus_value,
    ACTIONS(423), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
  [1449] = 2,
    STATE(136), 1,
      sym_focus_wrapping_value,
    ACTIONS(425), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_force,
      anon_sym_workspace,
  [1459] = 2,
    STATE(143), 1,
      sym_popup_during_fullscreen_value,
    ACTIONS(427), 4,
      anon_sym_all,
      anon_sym_smart,
      anon_sym_ignore,
      anon_sym_leave_fullscreen,
  [1469] = 2,
    STATE(120), 1,
      sym_focus_on_window_activation_value,
    ACTIONS(429), 4,
      anon_sym_smart,
      anon_sym_urgent,
      anon_sym_focus,
      anon_sym_none,
  [1479] = 2,
    STATE(170), 1,
      sym_sticky_value,
    ACTIONS(431), 3,
      anon_sym_enable,
      anon_sym_disable,
      anon_sym_toggle,
  [1488] = 2,
    STATE(86), 1,
      sym_border_value,
    ACTIONS(433), 3,
      anon_sym_none,
      anon_sym_normal,
      anon_sym_pixel,
  [1497] = 2,
    STATE(185), 1,
      sym_title_align_value,
    ACTIONS(435), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [1506] = 2,
    STATE(188), 1,
      sym_workspace_layout_value,
    ACTIONS(437), 3,
      anon_sym_default,
      anon_sym_stacking,
      anon_sym_tabbed,
  [1515] = 2,
    STATE(191), 1,
      sym_default_orientation_value,
    ACTIONS(439), 3,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_auto,
  [1524] = 3,
    ACTIONS(441), 1,
      aux_sym__statement_token1,
    STATE(178), 1,
      sym_unit,
    ACTIONS(227), 2,
      sym_px_unit,
      sym_ppt_unit,
  [1535] = 4,
    ACTIONS(443), 1,
      sym_variable,
    ACTIONS(445), 1,
      sym_number,
    STATE(140), 1,
      sym_workspace_assign_output,
    STATE(141), 1,
      sym__workspace_id,
  [1548] = 2,
    STATE(100), 1,
      sym_smart_gaps_value,
    ACTIONS(447), 3,
      anon_sym_on,
      anon_sym_off,
      anon_sym_inverse_outer,
  [1557] = 2,
    STATE(97), 1,
      sym_smart_borders_value,
    ACTIONS(449), 3,
      anon_sym_on,
      anon_sym_off,
      anon_sym_inverse_outer,
  [1566] = 2,
    STATE(147), 1,
      sym_focus_follows_mouse_value,
    ACTIONS(451), 2,
      anon_sym_yes,
      anon_sym_no,
  [1574] = 3,
    ACTIONS(453), 1,
      aux_sym__statement_token1,
    ACTIONS(455), 1,
      sym_variable,
    STATE(76), 1,
      aux_sym_client_repeat1,
  [1584] = 2,
    STATE(132), 1,
      sym_force_xinerama_value,
    ACTIONS(457), 2,
      anon_sym_yes,
      anon_sym_no,
  [1592] = 3,
    ACTIONS(455), 1,
      sym_variable,
    ACTIONS(459), 1,
      aux_sym__statement_token1,
    STATE(72), 1,
      aux_sym_client_repeat1,
  [1602] = 2,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(9), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
  [1610] = 3,
    ACTIONS(461), 1,
      aux_sym__statement_token1,
    ACTIONS(463), 1,
      sym_variable,
    STATE(76), 1,
      aux_sym_client_repeat1,
  [1620] = 2,
    STATE(115), 1,
      sym_show_marks_value,
    ACTIONS(466), 2,
      anon_sym_yes,
      anon_sym_no,
  [1628] = 3,
    ACTIONS(468), 1,
      aux_sym_floating_modifier_value_token1,
    ACTIONS(470), 1,
      sym_variable,
    STATE(94), 1,
      sym_floating_modifier_value,
  [1638] = 3,
    ACTIONS(384), 1,
      sym_variable,
    ACTIONS(472), 1,
      sym_number,
    STATE(159), 1,
      sym__workspace_id,
  [1648] = 2,
    STATE(127), 1,
      sym_workspace_auto_back_and_forth_value,
    ACTIONS(474), 2,
      anon_sym_yes,
      anon_sym_no,
  [1656] = 1,
    ACTIONS(476), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
  [1661] = 2,
    ACTIONS(478), 1,
      anon_sym_LBRACK,
    STATE(176), 1,
      sym_criteria,
  [1668] = 2,
    ACTIONS(480), 1,
      sym_variable,
    ACTIONS(482), 1,
      sym_value,
  [1675] = 2,
    ACTIONS(484), 1,
      aux_sym__statement_token1,
    ACTIONS(486), 1,
      sym_variable,
  [1682] = 2,
    ACTIONS(488), 1,
      aux_sym__statement_token1,
    ACTIONS(490), 1,
      sym_number,
  [1689] = 2,
    ACTIONS(492), 1,
      aux_sym__statement_token1,
    ACTIONS(494), 1,
      sym_number,
  [1696] = 2,
    ACTIONS(496), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(498), 1,
      sym_value,
  [1703] = 2,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_mode_body,
  [1710] = 2,
    ACTIONS(502), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(504), 1,
      sym_value,
  [1717] = 2,
    ACTIONS(506), 1,
      aux_sym__statement_token1,
    ACTIONS(508), 1,
      sym_px_unit,
  [1724] = 2,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_criteria,
  [1731] = 2,
    ACTIONS(510), 1,
      aux_sym__statement_token1,
    ACTIONS(512), 1,
      sym_variable,
  [1738] = 1,
    ACTIONS(514), 1,
      aux_sym__statement_token1,
  [1742] = 1,
    ACTIONS(516), 1,
      aux_sym__statement_token1,
  [1746] = 1,
    ACTIONS(518), 1,
      sym_floating_size_op,
  [1750] = 1,
    ACTIONS(520), 1,
      aux_sym__statement_token1,
  [1754] = 1,
    ACTIONS(522), 1,
      aux_sym__statement_token1,
  [1758] = 1,
    ACTIONS(524), 1,
      sym_keymap_trigger,
  [1762] = 1,
    ACTIONS(526), 1,
      aux_sym__statement_token1,
  [1766] = 1,
    ACTIONS(528), 1,
      aux_sym__statement_token1,
  [1770] = 1,
    ACTIONS(530), 1,
      sym_variable,
  [1774] = 1,
    ACTIONS(532), 1,
      aux_sym__statement_token1,
  [1778] = 1,
    ACTIONS(534), 1,
      aux_sym__statement_token1,
  [1782] = 1,
    ACTIONS(536), 1,
      sym_include_source,
  [1786] = 1,
    ACTIONS(538), 1,
      sym_value,
  [1790] = 1,
    ACTIONS(540), 1,
      aux_sym__statement_token1,
  [1794] = 1,
    ACTIONS(542), 1,
      aux_sym__statement_token1,
  [1798] = 1,
    ACTIONS(544), 1,
      aux_sym__statement_token1,
  [1802] = 1,
    ACTIONS(546), 1,
      aux_sym__statement_token1,
  [1806] = 1,
    ACTIONS(548), 1,
      sym_value,
  [1810] = 1,
    ACTIONS(550), 1,
      aux_sym__statement_token1,
  [1814] = 1,
    ACTIONS(552), 1,
      aux_sym__statement_token1,
  [1818] = 1,
    ACTIONS(554), 1,
      aux_sym__statement_token1,
  [1822] = 1,
    ACTIONS(556), 1,
      aux_sym__statement_token1,
  [1826] = 1,
    ACTIONS(558), 1,
      aux_sym__statement_token1,
  [1830] = 1,
    ACTIONS(560), 1,
      sym_quoted_string,
  [1834] = 1,
    ACTIONS(562), 1,
      sym_quoted_string,
  [1838] = 1,
    ACTIONS(564), 1,
      sym_quoted_string,
  [1842] = 1,
    ACTIONS(566), 1,
      aux_sym__statement_token1,
  [1846] = 1,
    ACTIONS(568), 1,
      aux_sym__statement_token1,
  [1850] = 1,
    ACTIONS(570), 1,
      anon_sym_ms,
  [1854] = 1,
    ACTIONS(572), 1,
      aux_sym__statement_token1,
  [1858] = 1,
    ACTIONS(574), 1,
      aux_sym__statement_token1,
  [1862] = 1,
    ACTIONS(576), 1,
      aux_sym__statement_token1,
  [1866] = 1,
    ACTIONS(578), 1,
      sym_set_resource_fallback,
  [1870] = 1,
    ACTIONS(580), 1,
      aux_sym__statement_token1,
  [1874] = 1,
    ACTIONS(582), 1,
      aux_sym__statement_token1,
  [1878] = 1,
    ACTIONS(584), 1,
      sym_mode_name,
  [1882] = 1,
    ACTIONS(586), 1,
      aux_sym__statement_token1,
  [1886] = 1,
    ACTIONS(588), 1,
      aux_sym__statement_token1,
  [1890] = 1,
    ACTIONS(590), 1,
      aux_sym__statement_token1,
  [1894] = 1,
    ACTIONS(592), 1,
      aux_sym__statement_token1,
  [1898] = 1,
    ACTIONS(594), 1,
      aux_sym__statement_token1,
  [1902] = 1,
    ACTIONS(596), 1,
      aux_sym__statement_token1,
  [1906] = 1,
    ACTIONS(598), 1,
      aux_sym__statement_token1,
  [1910] = 1,
    ACTIONS(600), 1,
      aux_sym__statement_token1,
  [1914] = 1,
    ACTIONS(602), 1,
      anon_sym_output,
  [1918] = 1,
    ACTIONS(604), 1,
      aux_sym__statement_token1,
  [1922] = 1,
    ACTIONS(606), 1,
      sym_number,
  [1926] = 1,
    ACTIONS(608), 1,
      aux_sym__statement_token1,
  [1930] = 1,
    ACTIONS(610), 1,
      anon_sym_output,
  [1934] = 1,
    ACTIONS(612), 1,
      aux_sym__statement_token1,
  [1938] = 1,
    ACTIONS(614), 1,
      aux_sym__statement_token1,
  [1942] = 1,
    ACTIONS(616), 1,
      aux_sym__statement_token1,
  [1946] = 1,
    ACTIONS(618), 1,
      aux_sym__statement_token1,
  [1950] = 1,
    ACTIONS(620), 1,
      aux_sym__statement_token1,
  [1954] = 1,
    ACTIONS(622), 1,
      aux_sym__statement_token1,
  [1958] = 1,
    ACTIONS(624), 1,
      aux_sym__statement_token1,
  [1962] = 1,
    ACTIONS(626), 1,
      aux_sym__statement_token1,
  [1966] = 1,
    ACTIONS(628), 1,
      aux_sym__statement_token1,
  [1970] = 1,
    ACTIONS(630), 1,
      aux_sym__statement_token1,
  [1974] = 1,
    ACTIONS(632), 1,
      sym_number,
  [1978] = 1,
    ACTIONS(634), 1,
      sym_number,
  [1982] = 1,
    ACTIONS(636), 1,
      sym_value,
  [1986] = 1,
    ACTIONS(638), 1,
      aux_sym__statement_token1,
  [1990] = 1,
    ACTIONS(640), 1,
      sym_value,
  [1994] = 1,
    ACTIONS(642), 1,
      aux_sym__statement_token1,
  [1998] = 1,
    ACTIONS(644), 1,
      aux_sym__statement_token1,
  [2002] = 1,
    ACTIONS(646), 1,
      aux_sym__statement_token1,
  [2006] = 1,
    ACTIONS(648), 1,
      aux_sym__statement_token1,
  [2010] = 1,
    ACTIONS(650), 1,
      aux_sym__statement_token1,
  [2014] = 1,
    ACTIONS(652), 1,
      aux_sym__statement_token1,
  [2018] = 1,
    ACTIONS(654), 1,
      aux_sym__statement_token1,
  [2022] = 1,
    ACTIONS(656), 1,
      aux_sym__statement_token1,
  [2026] = 1,
    ACTIONS(658), 1,
      sym_mode_name,
  [2030] = 1,
    ACTIONS(660), 1,
      aux_sym__statement_token1,
  [2034] = 1,
    ACTIONS(662), 1,
      aux_sym__statement_token1,
  [2038] = 1,
    ACTIONS(664), 1,
      aux_sym__statement_token1,
  [2042] = 1,
    ACTIONS(666), 1,
      aux_sym__statement_token1,
  [2046] = 1,
    ACTIONS(668), 1,
      aux_sym__statement_token1,
  [2050] = 1,
    ACTIONS(670), 1,
      sym_font_name,
  [2054] = 1,
    ACTIONS(672), 1,
      sym_mode_name,
  [2058] = 1,
    ACTIONS(674), 1,
      sym_set_resource,
  [2062] = 1,
    ACTIONS(676), 1,
      aux_sym__statement_token1,
  [2066] = 1,
    ACTIONS(678), 1,
      sym_value,
  [2070] = 1,
    ACTIONS(680), 1,
      aux_sym__statement_token1,
  [2074] = 1,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
  [2078] = 1,
    ACTIONS(684), 1,
      aux_sym__statement_token1,
  [2082] = 1,
    ACTIONS(686), 1,
      aux_sym__statement_token1,
  [2086] = 1,
    ACTIONS(688), 1,
      aux_sym__statement_token1,
  [2090] = 1,
    ACTIONS(690), 1,
      sym_value,
  [2094] = 1,
    ACTIONS(692), 1,
      aux_sym__statement_token1,
  [2098] = 1,
    ACTIONS(694), 1,
      sym_variable,
  [2102] = 1,
    ACTIONS(696), 1,
      aux_sym__statement_token1,
  [2106] = 1,
    ACTIONS(698), 1,
      aux_sym__statement_token1,
  [2110] = 1,
    ACTIONS(700), 1,
      aux_sym__statement_token1,
  [2114] = 1,
    ACTIONS(702), 1,
      aux_sym__statement_token1,
  [2118] = 1,
    ACTIONS(704), 1,
      aux_sym__statement_token1,
  [2122] = 1,
    ACTIONS(706), 1,
      aux_sym__statement_token1,
  [2126] = 1,
    ACTIONS(602), 1,
      aux_sym__statement_token1,
  [2130] = 1,
    ACTIONS(708), 1,
      aux_sym__statement_token1,
  [2134] = 1,
    ACTIONS(279), 1,
      aux_sym__statement_token1,
  [2138] = 1,
    ACTIONS(710), 1,
      aux_sym__statement_token1,
  [2142] = 1,
    ACTIONS(712), 1,
      aux_sym__statement_token1,
  [2146] = 1,
    ACTIONS(714), 1,
      aux_sym__statement_token1,
  [2150] = 1,
    ACTIONS(716), 1,
      aux_sym__statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 267,
  [SMALL_STATE(13)] = 326,
  [SMALL_STATE(14)] = 385,
  [SMALL_STATE(15)] = 440,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 550,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 660,
  [SMALL_STATE(20)] = 715,
  [SMALL_STATE(21)] = 758,
  [SMALL_STATE(22)] = 780,
  [SMALL_STATE(23)] = 804,
  [SMALL_STATE(24)] = 827,
  [SMALL_STATE(25)] = 850,
  [SMALL_STATE(26)] = 870,
  [SMALL_STATE(27)] = 888,
  [SMALL_STATE(28)] = 908,
  [SMALL_STATE(29)] = 928,
  [SMALL_STATE(30)] = 948,
  [SMALL_STATE(31)] = 966,
  [SMALL_STATE(32)] = 986,
  [SMALL_STATE(33)] = 1006,
  [SMALL_STATE(34)] = 1026,
  [SMALL_STATE(35)] = 1046,
  [SMALL_STATE(36)] = 1066,
  [SMALL_STATE(37)] = 1086,
  [SMALL_STATE(38)] = 1103,
  [SMALL_STATE(39)] = 1129,
  [SMALL_STATE(40)] = 1155,
  [SMALL_STATE(41)] = 1181,
  [SMALL_STATE(42)] = 1204,
  [SMALL_STATE(43)] = 1227,
  [SMALL_STATE(44)] = 1247,
  [SMALL_STATE(45)] = 1267,
  [SMALL_STATE(46)] = 1290,
  [SMALL_STATE(47)] = 1305,
  [SMALL_STATE(48)] = 1323,
  [SMALL_STATE(49)] = 1343,
  [SMALL_STATE(50)] = 1357,
  [SMALL_STATE(51)] = 1371,
  [SMALL_STATE(52)] = 1380,
  [SMALL_STATE(53)] = 1389,
  [SMALL_STATE(54)] = 1398,
  [SMALL_STATE(55)] = 1407,
  [SMALL_STATE(56)] = 1416,
  [SMALL_STATE(57)] = 1425,
  [SMALL_STATE(58)] = 1439,
  [SMALL_STATE(59)] = 1449,
  [SMALL_STATE(60)] = 1459,
  [SMALL_STATE(61)] = 1469,
  [SMALL_STATE(62)] = 1479,
  [SMALL_STATE(63)] = 1488,
  [SMALL_STATE(64)] = 1497,
  [SMALL_STATE(65)] = 1506,
  [SMALL_STATE(66)] = 1515,
  [SMALL_STATE(67)] = 1524,
  [SMALL_STATE(68)] = 1535,
  [SMALL_STATE(69)] = 1548,
  [SMALL_STATE(70)] = 1557,
  [SMALL_STATE(71)] = 1566,
  [SMALL_STATE(72)] = 1574,
  [SMALL_STATE(73)] = 1584,
  [SMALL_STATE(74)] = 1592,
  [SMALL_STATE(75)] = 1602,
  [SMALL_STATE(76)] = 1610,
  [SMALL_STATE(77)] = 1620,
  [SMALL_STATE(78)] = 1628,
  [SMALL_STATE(79)] = 1638,
  [SMALL_STATE(80)] = 1648,
  [SMALL_STATE(81)] = 1656,
  [SMALL_STATE(82)] = 1661,
  [SMALL_STATE(83)] = 1668,
  [SMALL_STATE(84)] = 1675,
  [SMALL_STATE(85)] = 1682,
  [SMALL_STATE(86)] = 1689,
  [SMALL_STATE(87)] = 1696,
  [SMALL_STATE(88)] = 1703,
  [SMALL_STATE(89)] = 1710,
  [SMALL_STATE(90)] = 1717,
  [SMALL_STATE(91)] = 1724,
  [SMALL_STATE(92)] = 1731,
  [SMALL_STATE(93)] = 1738,
  [SMALL_STATE(94)] = 1742,
  [SMALL_STATE(95)] = 1746,
  [SMALL_STATE(96)] = 1750,
  [SMALL_STATE(97)] = 1754,
  [SMALL_STATE(98)] = 1758,
  [SMALL_STATE(99)] = 1762,
  [SMALL_STATE(100)] = 1766,
  [SMALL_STATE(101)] = 1770,
  [SMALL_STATE(102)] = 1774,
  [SMALL_STATE(103)] = 1778,
  [SMALL_STATE(104)] = 1782,
  [SMALL_STATE(105)] = 1786,
  [SMALL_STATE(106)] = 1790,
  [SMALL_STATE(107)] = 1794,
  [SMALL_STATE(108)] = 1798,
  [SMALL_STATE(109)] = 1802,
  [SMALL_STATE(110)] = 1806,
  [SMALL_STATE(111)] = 1810,
  [SMALL_STATE(112)] = 1814,
  [SMALL_STATE(113)] = 1818,
  [SMALL_STATE(114)] = 1822,
  [SMALL_STATE(115)] = 1826,
  [SMALL_STATE(116)] = 1830,
  [SMALL_STATE(117)] = 1834,
  [SMALL_STATE(118)] = 1838,
  [SMALL_STATE(119)] = 1842,
  [SMALL_STATE(120)] = 1846,
  [SMALL_STATE(121)] = 1850,
  [SMALL_STATE(122)] = 1854,
  [SMALL_STATE(123)] = 1858,
  [SMALL_STATE(124)] = 1862,
  [SMALL_STATE(125)] = 1866,
  [SMALL_STATE(126)] = 1870,
  [SMALL_STATE(127)] = 1874,
  [SMALL_STATE(128)] = 1878,
  [SMALL_STATE(129)] = 1882,
  [SMALL_STATE(130)] = 1886,
  [SMALL_STATE(131)] = 1890,
  [SMALL_STATE(132)] = 1894,
  [SMALL_STATE(133)] = 1898,
  [SMALL_STATE(134)] = 1902,
  [SMALL_STATE(135)] = 1906,
  [SMALL_STATE(136)] = 1910,
  [SMALL_STATE(137)] = 1914,
  [SMALL_STATE(138)] = 1918,
  [SMALL_STATE(139)] = 1922,
  [SMALL_STATE(140)] = 1926,
  [SMALL_STATE(141)] = 1930,
  [SMALL_STATE(142)] = 1934,
  [SMALL_STATE(143)] = 1938,
  [SMALL_STATE(144)] = 1942,
  [SMALL_STATE(145)] = 1946,
  [SMALL_STATE(146)] = 1950,
  [SMALL_STATE(147)] = 1954,
  [SMALL_STATE(148)] = 1958,
  [SMALL_STATE(149)] = 1962,
  [SMALL_STATE(150)] = 1966,
  [SMALL_STATE(151)] = 1970,
  [SMALL_STATE(152)] = 1974,
  [SMALL_STATE(153)] = 1978,
  [SMALL_STATE(154)] = 1982,
  [SMALL_STATE(155)] = 1986,
  [SMALL_STATE(156)] = 1990,
  [SMALL_STATE(157)] = 1994,
  [SMALL_STATE(158)] = 1998,
  [SMALL_STATE(159)] = 2002,
  [SMALL_STATE(160)] = 2006,
  [SMALL_STATE(161)] = 2010,
  [SMALL_STATE(162)] = 2014,
  [SMALL_STATE(163)] = 2018,
  [SMALL_STATE(164)] = 2022,
  [SMALL_STATE(165)] = 2026,
  [SMALL_STATE(166)] = 2030,
  [SMALL_STATE(167)] = 2034,
  [SMALL_STATE(168)] = 2038,
  [SMALL_STATE(169)] = 2042,
  [SMALL_STATE(170)] = 2046,
  [SMALL_STATE(171)] = 2050,
  [SMALL_STATE(172)] = 2054,
  [SMALL_STATE(173)] = 2058,
  [SMALL_STATE(174)] = 2062,
  [SMALL_STATE(175)] = 2066,
  [SMALL_STATE(176)] = 2070,
  [SMALL_STATE(177)] = 2074,
  [SMALL_STATE(178)] = 2078,
  [SMALL_STATE(179)] = 2082,
  [SMALL_STATE(180)] = 2086,
  [SMALL_STATE(181)] = 2090,
  [SMALL_STATE(182)] = 2094,
  [SMALL_STATE(183)] = 2098,
  [SMALL_STATE(184)] = 2102,
  [SMALL_STATE(185)] = 2106,
  [SMALL_STATE(186)] = 2110,
  [SMALL_STATE(187)] = 2114,
  [SMALL_STATE(188)] = 2118,
  [SMALL_STATE(189)] = 2122,
  [SMALL_STATE(190)] = 2126,
  [SMALL_STATE(191)] = 2130,
  [SMALL_STATE(192)] = 2134,
  [SMALL_STATE(193)] = 2138,
  [SMALL_STATE(194)] = 2142,
  [SMALL_STATE(195)] = 2146,
  [SMALL_STATE(196)] = 2150,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 15),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 15),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 27),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(27),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(58),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(87),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(63),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(128),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(129),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(130),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(20),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(133),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 26), SHIFT_REPEAT(62),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5, 0, 31),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gaps_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gaps_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat2, 1, 0, 14),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 1, 0, 14),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 25),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 25),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 9),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 9),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 29),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 29),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 30),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 30),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4, 0, 17),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4, 0, 17),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps_option, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_criteria, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_criteria, 2, 0, 20),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_role_criteria, 2, 0, 21),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_criteria, 2, 0, 22),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_flags, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 3, 0, 10),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 2, 0, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 19),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 2, 0, 19), SHIFT_REPEAT(92),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border_value, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_border_value, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 2, 0, 6),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps, 3, 0, 8),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 1, 0, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 1, 0, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier, 2, 0, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_borders_value, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_borders, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_gaps_value, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_gaps, 2, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_value, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_swap, 2, 0, 9),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_swap, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_modifier, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_display_urgency_hint, 3, 0, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks_value, 1, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3, 0, 11),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 3, 0, 11),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation_value, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation, 2, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth_value, 1, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 1, 0, 12),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 13),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama_value, 1, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama, 2, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping_value, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_id, 1, 0, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 3, 0, 16),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen_value, 1, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mouse_warping, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 17),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse, 2, 0, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 18),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps, 4, 0, 8),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_assign_output, 3, 0, 12),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipc_socket, 2, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 2, 0, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_output, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 2, 0, 23),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_from_resource, 4, 0, 24),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_value, 1, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 2, 0, 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 2, 0, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky_value, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky, 2, 0, 5),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_size, 4, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_focus, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 28),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders_value, 1, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders, 2, 0, 5),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align_value, 1, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align, 2, 0, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout_value, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout, 2, 0, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation_value, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation, 2, 0, 5),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 7),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse_value, 1, 0, 0),
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
