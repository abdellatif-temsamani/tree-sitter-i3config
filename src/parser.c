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
#define STATE_COUNT 261
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 258
#define ALIAS_COUNT 0
#define TOKEN_COUNT 152
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 36

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
  anon_sym_exec = 53,
  anon_sym_DASH_DASHno_DASHstartup_DASHid = 54,
  anon_sym_exec_always = 55,
  anon_sym_assign = 56,
  anon_sym_u2192 = 57,
  anon_sym_number = 58,
  anon_sym_output = 59,
  anon_sym_primary = 60,
  anon_sym_nonprimary = 61,
  anon_sym_set_from_resource = 62,
  sym_set_resource = 63,
  sym_set_resource_fallback = 64,
  aux_sym_set_token1 = 65,
  anon_sym_no_focus = 66,
  anon_sym_for_window = 67,
  anon_sym_LBRACK = 68,
  anon_sym_RBRACK = 69,
  aux_sym__criteria_value_token1 = 70,
  anon_sym_EQ = 71,
  anon_sym_hide_edge_borders = 72,
  anon_sym_both = 73,
  anon_sym_smart_no_gaps = 74,
  anon_sym_default_floating_border = 75,
  anon_sym_default_border = 76,
  anon_sym_border = 77,
  anon_sym_normal = 78,
  anon_sym_pixel = 79,
  anon_sym_title_align = 80,
  anon_sym_center = 81,
  anon_sym_workspace_layout = 82,
  anon_sym_default = 83,
  anon_sym_stacking = 84,
  anon_sym_tabbed = 85,
  anon_sym_default_orientation = 86,
  anon_sym_auto = 87,
  anon_sym_include = 88,
  sym_include_source = 89,
  anon_sym_floating_modifier = 90,
  anon_sym_floating_minimum_size = 91,
  anon_sym_floating_maximum_size = 92,
  sym_floating_size_op = 93,
  anon_sym_bindsym = 94,
  anon_sym_bindcode = 95,
  sym_keymap_trigger = 96,
  anon_sym_DASH_DASHrelease = 97,
  anon_sym_DASH_DASHborder = 98,
  anon_sym_DASH_DASHwhole_DASHwindow = 99,
  anon_sym_DASH_DASHexclude_DASHtitlebar = 100,
  anon_sym_font = 101,
  sym_font_name = 102,
  anon_sym_mode = 103,
  sym_mode_name = 104,
  anon_sym_LBRACE = 105,
  anon_sym_RBRACE = 106,
  sym_identifier = 107,
  sym_px_unit = 108,
  sym_ppt_unit = 109,
  sym_number = 110,
  anon_sym_up = 111,
  anon_sym_down = 112,
  sym_quoted_string = 113,
  anon_sym_BSLASH = 114,
  sym_value = 115,
  anon_sym_kill = 116,
  anon_sym_restart = 117,
  anon_sym_back_and_forth = 118,
  anon_sym_next = 119,
  anon_sym_prev = 120,
  anon_sym_next_on_output = 121,
  anon_sym_prev_on_output = 122,
  anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth = 123,
  anon_sym_swap = 124,
  anon_sym_container = 125,
  anon_sym_with = 126,
  anon_sym_id = 127,
  anon_sym_con_id = 128,
  anon_sym_mark = 129,
  anon_sym_move = 130,
  anon_sym_scratchpad = 131,
  anon_sym_window = 132,
  anon_sym_to = 133,
  anon_sym_absolute = 134,
  anon_sym_positioncenter = 135,
  anon_sym_position = 136,
  anon_sym_mouse = 137,
  anon_sym_fullscreen = 138,
  anon_sym_floating = 139,
  anon_sym_toggle = 140,
  anon_sym_layout = 141,
  anon_sym_split = 142,
  anon_sym_splitv = 143,
  anon_sym_splith = 144,
  anon_sym_v = 145,
  anon_sym_h = 146,
  anon_sym_parent = 147,
  anon_sym_mode_toggle = 148,
  anon_sym_sticky = 149,
  anon_sym_enable = 150,
  anon_sym_disable = 151,
  sym_source_file = 152,
  sym__statement = 153,
  sym_smart_borders = 154,
  sym_smart_borders_value = 155,
  sym_smart_gaps = 156,
  sym_smart_gaps_value = 157,
  sym_gaps = 158,
  sym_gaps_option = 159,
  sym_tiling_drag = 160,
  sym_tiling_drag_value = 161,
  sym_tiling_drag_swap = 162,
  sym_tiling_drag_modifier = 163,
  sym_show_marks = 164,
  sym_show_marks_value = 165,
  sym_focus_on_window_activation = 166,
  sym_focus_on_window_activation_value = 167,
  sym_force_display_urgency_hint = 168,
  sym_workspace_auto_back_and_forth = 169,
  sym_workspace_auto_back_and_forth_value = 170,
  sym_force_xinerama = 171,
  sym_force_xinerama_value = 172,
  sym_focus_wrapping = 173,
  sym_focus_wrapping_value = 174,
  sym_popup_during_fullscreen = 175,
  sym_popup_during_fullscreen_value = 176,
  sym_mouse_warping = 177,
  sym_focus_follows_mouse = 178,
  sym_focus_follows_mouse_value = 179,
  sym_ipc_socket = 180,
  sym_client = 181,
  sym_property = 182,
  sym_exec = 183,
  sym_exec_always = 184,
  sym_assign = 185,
  sym_assign_workspace = 186,
  sym_assign_output = 187,
  sym__output_value = 188,
  sym__definition = 189,
  sym_set_from_resource = 190,
  sym_set = 191,
  sym_no_focus = 192,
  sym_for_window = 193,
  sym_criteria = 194,
  sym__criteria_value = 195,
  sym_hide_edge_borders = 196,
  sym_hide_edge_borders_value = 197,
  sym_border = 198,
  sym_border_value = 199,
  sym_title_align = 200,
  sym_title_align_value = 201,
  sym_workspace_layout = 202,
  sym_workspace_layout_value = 203,
  sym_default_orientation = 204,
  sym_default_orientation_value = 205,
  sym_include = 206,
  sym_floating_modifier = 207,
  sym_floating_modifier_value = 208,
  sym_floating_size = 209,
  sym_binding = 210,
  sym_keymap = 211,
  sym_keymap_flags = 212,
  sym_font = 213,
  sym_mode = 214,
  sym_mode_body = 215,
  sym_unit = 216,
  sym__directions = 217,
  sym__value = 218,
  sym__i3_commands = 219,
  sym_workspace = 220,
  sym_workspace_value = 221,
  sym__workspace_switch = 222,
  sym__workspace_assign_output = 223,
  sym__workspace_id = 224,
  sym_swap = 225,
  sym_move = 226,
  sym_move_value = 227,
  sym__move_directional = 228,
  sym__move_center = 229,
  sym__move_position = 230,
  sym__move_output = 231,
  sym__move_workspace = 232,
  sym__move_amount = 233,
  sym_workspace_number = 234,
  sym_window_mode = 235,
  sym_layout = 236,
  sym_layout_value = 237,
  sym_layout_mode = 238,
  sym_split = 239,
  sym_split_value = 240,
  sym_focus = 241,
  sym_focus_value = 242,
  sym__focus_direction = 243,
  sym__focus_output = 244,
  sym__focus_workspace = 245,
  sym_sticky = 246,
  sym_sticky_value = 247,
  aux_sym_source_file_repeat1 = 248,
  aux_sym_gaps_repeat1 = 249,
  aux_sym_client_repeat1 = 250,
  aux_sym_for_window_repeat1 = 251,
  aux_sym_criteria_repeat1 = 252,
  aux_sym_binding_repeat1 = 253,
  aux_sym_binding_repeat2 = 254,
  aux_sym__move_position_repeat1 = 255,
  aux_sym_layout_value_repeat1 = 256,
  aux_sym__focus_output_repeat1 = 257,
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
  [anon_sym_exec] = "exec",
  [anon_sym_DASH_DASHno_DASHstartup_DASHid] = "--no-startup-id",
  [anon_sym_exec_always] = "exec_always",
  [anon_sym_assign] = "assign",
  [anon_sym_u2192] = "\u2192",
  [anon_sym_number] = "number",
  [anon_sym_output] = "output",
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
  [aux_sym__criteria_value_token1] = "_criteria_value_token1",
  [anon_sym_EQ] = "=",
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
  [sym_identifier] = "identifier",
  [sym_px_unit] = "px_unit",
  [sym_ppt_unit] = "ppt_unit",
  [sym_number] = "number",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [sym_quoted_string] = "quoted_string",
  [anon_sym_BSLASH] = "\\",
  [sym_value] = "value",
  [anon_sym_kill] = "kill",
  [anon_sym_restart] = "restart",
  [anon_sym_back_and_forth] = "back_and_forth",
  [anon_sym_next] = "next",
  [anon_sym_prev] = "prev",
  [anon_sym_next_on_output] = "next_on_output",
  [anon_sym_prev_on_output] = "prev_on_output",
  [anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth] = "--no-auto-back-and-forth",
  [anon_sym_swap] = "swap",
  [anon_sym_container] = "container",
  [anon_sym_with] = "with",
  [anon_sym_id] = "id",
  [anon_sym_con_id] = "con_id",
  [anon_sym_mark] = "mark",
  [anon_sym_move] = "move",
  [anon_sym_scratchpad] = "scratchpad",
  [anon_sym_window] = "window",
  [anon_sym_to] = "to",
  [anon_sym_absolute] = "absolute",
  [anon_sym_positioncenter] = "position center",
  [anon_sym_position] = "position",
  [anon_sym_mouse] = "mouse",
  [anon_sym_fullscreen] = "fullscreen",
  [anon_sym_floating] = "floating",
  [anon_sym_toggle] = "toggle",
  [anon_sym_layout] = "layout",
  [anon_sym_split] = "split",
  [anon_sym_splitv] = "splitv",
  [anon_sym_splith] = "splith",
  [anon_sym_v] = "v",
  [anon_sym_h] = "h",
  [anon_sym_parent] = "parent",
  [anon_sym_mode_toggle] = "mode_toggle",
  [anon_sym_sticky] = "sticky",
  [anon_sym_enable] = "enable",
  [anon_sym_disable] = "disable",
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
  [sym_exec] = "exec",
  [sym_exec_always] = "exec_always",
  [sym_assign] = "assign",
  [sym_assign_workspace] = "assign_workspace",
  [sym_assign_output] = "assign_output",
  [sym__output_value] = "_output_value",
  [sym__definition] = "_definition",
  [sym_set_from_resource] = "set_from_resource",
  [sym_set] = "set",
  [sym_no_focus] = "no_focus",
  [sym_for_window] = "for_window",
  [sym_criteria] = "criteria",
  [sym__criteria_value] = "_criteria_value",
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
  [sym__directions] = "_directions",
  [sym__value] = "_value",
  [sym__i3_commands] = "_i3_commands",
  [sym_workspace] = "workspace",
  [sym_workspace_value] = "workspace_value",
  [sym__workspace_switch] = "_workspace_switch",
  [sym__workspace_assign_output] = "_workspace_assign_output",
  [sym__workspace_id] = "_workspace_id",
  [sym_swap] = "swap",
  [sym_move] = "move",
  [sym_move_value] = "move_value",
  [sym__move_directional] = "_move_directional",
  [sym__move_center] = "_move_center",
  [sym__move_position] = "_move_position",
  [sym__move_output] = "_move_output",
  [sym__move_workspace] = "_move_workspace",
  [sym__move_amount] = "_move_amount",
  [sym_workspace_number] = "workspace_number",
  [sym_window_mode] = "window_mode",
  [sym_layout] = "layout",
  [sym_layout_value] = "layout_value",
  [sym_layout_mode] = "layout_mode",
  [sym_split] = "split",
  [sym_split_value] = "split_value",
  [sym_focus] = "focus",
  [sym_focus_value] = "focus_value",
  [sym__focus_direction] = "_focus_direction",
  [sym__focus_output] = "_focus_output",
  [sym__focus_workspace] = "_focus_workspace",
  [sym_sticky] = "sticky",
  [sym_sticky_value] = "sticky_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_gaps_repeat1] = "gaps_repeat1",
  [aux_sym_client_repeat1] = "client_repeat1",
  [aux_sym_for_window_repeat1] = "for_window_repeat1",
  [aux_sym_criteria_repeat1] = "criteria_repeat1",
  [aux_sym_binding_repeat1] = "binding_repeat1",
  [aux_sym_binding_repeat2] = "binding_repeat2",
  [aux_sym__move_position_repeat1] = "_move_position_repeat1",
  [aux_sym_layout_value_repeat1] = "layout_value_repeat1",
  [aux_sym__focus_output_repeat1] = "_focus_output_repeat1",
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
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_DASH_DASHno_DASHstartup_DASHid] = anon_sym_DASH_DASHno_DASHstartup_DASHid,
  [anon_sym_exec_always] = anon_sym_exec_always,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_u2192] = anon_sym_u2192,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_output] = anon_sym_output,
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
  [aux_sym__criteria_value_token1] = aux_sym__criteria_value_token1,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym_identifier] = sym_identifier,
  [sym_px_unit] = sym_px_unit,
  [sym_ppt_unit] = sym_ppt_unit,
  [sym_number] = sym_number,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [sym_quoted_string] = sym_quoted_string,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_value] = sym_value,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_restart] = anon_sym_restart,
  [anon_sym_back_and_forth] = anon_sym_back_and_forth,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_prev] = anon_sym_prev,
  [anon_sym_next_on_output] = anon_sym_next_on_output,
  [anon_sym_prev_on_output] = anon_sym_prev_on_output,
  [anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth] = anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth,
  [anon_sym_swap] = anon_sym_swap,
  [anon_sym_container] = anon_sym_container,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_con_id] = anon_sym_con_id,
  [anon_sym_mark] = anon_sym_mark,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_scratchpad] = anon_sym_scratchpad,
  [anon_sym_window] = anon_sym_window,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_absolute] = anon_sym_absolute,
  [anon_sym_positioncenter] = anon_sym_positioncenter,
  [anon_sym_position] = anon_sym_position,
  [anon_sym_mouse] = anon_sym_mouse,
  [anon_sym_fullscreen] = anon_sym_fullscreen,
  [anon_sym_floating] = anon_sym_floating,
  [anon_sym_toggle] = anon_sym_toggle,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_splitv] = anon_sym_splitv,
  [anon_sym_splith] = anon_sym_splith,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_parent] = anon_sym_parent,
  [anon_sym_mode_toggle] = anon_sym_mode_toggle,
  [anon_sym_sticky] = anon_sym_sticky,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_disable] = anon_sym_disable,
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
  [sym_exec] = sym_exec,
  [sym_exec_always] = sym_exec_always,
  [sym_assign] = sym_assign,
  [sym_assign_workspace] = sym_assign_workspace,
  [sym_assign_output] = sym_assign_output,
  [sym__output_value] = sym__output_value,
  [sym__definition] = sym__definition,
  [sym_set_from_resource] = sym_set_from_resource,
  [sym_set] = sym_set,
  [sym_no_focus] = sym_no_focus,
  [sym_for_window] = sym_for_window,
  [sym_criteria] = sym_criteria,
  [sym__criteria_value] = sym__criteria_value,
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
  [sym__directions] = sym__directions,
  [sym__value] = sym__value,
  [sym__i3_commands] = sym__i3_commands,
  [sym_workspace] = sym_workspace,
  [sym_workspace_value] = sym_workspace_value,
  [sym__workspace_switch] = sym__workspace_switch,
  [sym__workspace_assign_output] = sym__workspace_assign_output,
  [sym__workspace_id] = sym__workspace_id,
  [sym_swap] = sym_swap,
  [sym_move] = sym_move,
  [sym_move_value] = sym_move_value,
  [sym__move_directional] = sym__move_directional,
  [sym__move_center] = sym__move_center,
  [sym__move_position] = sym__move_position,
  [sym__move_output] = sym__move_output,
  [sym__move_workspace] = sym__move_workspace,
  [sym__move_amount] = sym__move_amount,
  [sym_workspace_number] = sym_workspace_number,
  [sym_window_mode] = sym_window_mode,
  [sym_layout] = sym_layout,
  [sym_layout_value] = sym_layout_value,
  [sym_layout_mode] = sym_layout_mode,
  [sym_split] = sym_split,
  [sym_split_value] = sym_split_value,
  [sym_focus] = sym_focus,
  [sym_focus_value] = sym_focus_value,
  [sym__focus_direction] = sym__focus_direction,
  [sym__focus_output] = sym__focus_output,
  [sym__focus_workspace] = sym__focus_workspace,
  [sym_sticky] = sym_sticky,
  [sym_sticky_value] = sym_sticky_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_gaps_repeat1] = aux_sym_gaps_repeat1,
  [aux_sym_client_repeat1] = aux_sym_client_repeat1,
  [aux_sym_for_window_repeat1] = aux_sym_for_window_repeat1,
  [aux_sym_criteria_repeat1] = aux_sym_criteria_repeat1,
  [aux_sym_binding_repeat1] = aux_sym_binding_repeat1,
  [aux_sym_binding_repeat2] = aux_sym_binding_repeat2,
  [aux_sym__move_position_repeat1] = aux_sym__move_position_repeat1,
  [aux_sym_layout_value_repeat1] = aux_sym_layout_value_repeat1,
  [aux_sym__focus_output_repeat1] = aux_sym__focus_output_repeat1,
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
  [anon_sym_output] = {
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
  [aux_sym__criteria_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym_identifier] = {
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
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
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
  [anon_sym_back_and_forth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next_on_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prev_on_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_container] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_con_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mark] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scratchpad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_absolute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positioncenter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toggle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splitv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode_toggle] = {
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
  [sym__output_value] = {
    .visible = false,
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
  [sym__criteria_value] = {
    .visible = false,
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
  [sym__directions] = {
    .visible = false,
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
  [sym_workspace] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_value] = {
    .visible = true,
    .named = true,
  },
  [sym__workspace_switch] = {
    .visible = false,
    .named = true,
  },
  [sym__workspace_assign_output] = {
    .visible = false,
    .named = true,
  },
  [sym__workspace_id] = {
    .visible = false,
    .named = true,
  },
  [sym_swap] = {
    .visible = true,
    .named = true,
  },
  [sym_move] = {
    .visible = true,
    .named = true,
  },
  [sym_move_value] = {
    .visible = true,
    .named = true,
  },
  [sym__move_directional] = {
    .visible = false,
    .named = true,
  },
  [sym__move_center] = {
    .visible = false,
    .named = true,
  },
  [sym__move_position] = {
    .visible = false,
    .named = true,
  },
  [sym__move_output] = {
    .visible = false,
    .named = true,
  },
  [sym__move_workspace] = {
    .visible = false,
    .named = true,
  },
  [sym__move_amount] = {
    .visible = false,
    .named = true,
  },
  [sym_workspace_number] = {
    .visible = true,
    .named = true,
  },
  [sym_window_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_value] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_split] = {
    .visible = true,
    .named = true,
  },
  [sym_split_value] = {
    .visible = true,
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
  [sym__focus_direction] = {
    .visible = false,
    .named = true,
  },
  [sym__focus_output] = {
    .visible = false,
    .named = true,
  },
  [sym__focus_workspace] = {
    .visible = false,
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
  [aux_sym_criteria_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__move_position_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_layout_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__focus_output_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_command = 2,
  field_fallback = 3,
  field_follow_mouse_value = 4,
  field_identifier = 5,
  field_mode = 6,
  field_name = 7,
  field_property = 8,
  field_resource = 9,
  field_source = 10,
  field_target = 11,
  field_unit = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_command] = "command",
  [field_fallback] = "fallback",
  [field_follow_mouse_value] = "follow_mouse_value",
  [field_identifier] = "identifier",
  [field_mode] = "mode",
  [field_name] = "name",
  [field_property] = "property",
  [field_resource] = "resource",
  [field_source] = "source",
  [field_target] = "target",
  [field_unit] = "unit",
  [field_value] = "value",
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
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 2},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 2},
  [16] = {.index = 17, .length = 3},
  [17] = {.index = 20, .length = 2},
  [18] = {.index = 22, .length = 3},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 2},
  [21] = {.index = 28, .length = 1},
  [22] = {.index = 29, .length = 2},
  [23] = {.index = 31, .length = 1},
  [24] = {.index = 32, .length = 2},
  [25] = {.index = 34, .length = 3},
  [26] = {.index = 37, .length = 1},
  [27] = {.index = 38, .length = 3},
  [28] = {.index = 41, .length = 6},
  [29] = {.index = 47, .length = 1},
  [30] = {.index = 48, .length = 1},
  [31] = {.index = 49, .length = 1},
  [32] = {.index = 50, .length = 3},
  [33] = {.index = 53, .length = 1},
  [34] = {.index = 54, .length = 2},
  [35] = {.index = 56, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
  [1] =
    {field_identifier, 0, .inherited = true},
  [2] =
    {field_follow_mouse_value, 1},
  [3] =
    {field_property, 1},
  [4] =
    {field_command, 1},
  [5] =
    {field_value, 1},
  [6] =
    {field_mode, 1},
  [7] =
    {field_source, 1},
  [8] =
    {field_value, 2},
  [9] =
    {field_identifier, 1},
  [10] =
    {field_identifier, 1, .inherited = true},
  [11] =
    {field_identifier, 2, .inherited = true},
    {field_property, 1},
  [13] =
    {field_command, 2},
  [14] =
    {field_value, 0, .inherited = true},
  [15] =
    {field_identifier, 1},
    {field_value, 2},
  [17] =
    {field_identifier, 2, .inherited = true},
    {field_name, 2, .inherited = true},
    {field_unit, 2, .inherited = true},
  [20] =
    {field_mode, 1},
    {field_value, 2},
  [22] =
    {field_identifier, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_unit, 0, .inherited = true},
  [25] =
    {field_name, 2},
  [26] =
    {field_body, 2},
    {field_name, 1},
  [28] =
    {field_identifier, 2, .inherited = true},
  [29] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [31] =
    {field_value, 1, .inherited = true},
  [32] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [34] =
    {field_fallback, 3},
    {field_identifier, 1},
    {field_resource, 2},
  [37] =
    {field_unit, 0},
  [38] =
    {field_identifier, 3, .inherited = true},
    {field_name, 3, .inherited = true},
    {field_unit, 3, .inherited = true},
  [41] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_unit, 0, .inherited = true},
    {field_unit, 1, .inherited = true},
  [47] =
    {field_name, 3},
  [48] =
    {field_name, 1},
  [49] =
    {field_unit, 1},
  [50] =
    {field_identifier, 4, .inherited = true},
    {field_name, 4, .inherited = true},
    {field_unit, 4, .inherited = true},
  [53] =
    {field_value, 3},
  [54] =
    {field_target, 3},
    {field_value, 4},
  [56] =
    {field_value, 4},
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
  [4] = 2,
  [5] = 5,
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
  [79] = 77,
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
  [107] = 104,
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
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 20,
  [257] = 158,
  [258] = 258,
  [259] = 259,
  [260] = 260,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(913);
      ADVANCE_MAP(
        '"', 1,
        '#', 915,
        '$', 903,
        '+', 902,
        '-', 18,
        '=', 993,
        '[', 990,
        '\\', 1047,
        ']', 991,
        'a', 150,
        'b', 76,
        'c', 273,
        'd', 242,
        'e', 527,
        'f', 456,
        'g', 77,
        'h', 1098,
        'i', 34,
        'k', 426,
        'l', 78,
        'm', 87,
        'n', 243,
        'o', 337,
        'p', 92,
        'r', 278,
        's', 177,
        't', 81,
        'u', 530,
        'v', 1097,
        'w', 393,
        'x', 1017,
        'y', 280,
        '{', 1032,
        '}', 1033,
        0x2192, 979,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(908);
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 914,
        '$', 903,
        '\\', 1047,
        'b', 635,
        'd', 334,
        'e', 885,
        'f', 499,
        'g', 77,
        'k', 426,
        'l', 79,
        'm', 581,
        'n', 610,
        'o', 860,
        'p', 643,
        'r', 278,
        's', 659,
        'u', 638,
        'w', 636,
        '+', 902,
        '-', 902,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(914);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 's') ADVANCE(642);
      if (lookahead == 't') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead != 0) ADVANCE(908);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1045);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1030);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1046);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 11,
        '#', 986,
        '$', 903,
        '[', 990,
        '\\', 1047,
        'a', 455,
        'b', 575,
        'c', 826,
        'd', 333,
        'e', 528,
        'f', 499,
        'g', 77,
        'h', 1099,
        'i', 365,
        'k', 426,
        'l', 78,
        'm', 402,
        'n', 609,
        'o', 861,
        'p', 488,
        'r', 278,
        's', 322,
        't', 579,
        'u', 679,
        'v', 1097,
        'w', 636,
        '+', 902,
        '-', 902,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(903);
      if (lookahead == '-') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(903);
      if (lookahead == '=') ADVANCE(993);
      if (lookahead == ']') ADVANCE(991);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '$', 903,
        '[', 990,
        '\\', 1047,
        'b', 635,
        'd', 334,
        'e', 885,
        'f', 498,
        'g', 77,
        'k', 426,
        'l', 79,
        'm', 611,
        'n', 580,
        'o', 860,
        'p', 93,
        'r', 278,
        's', 659,
        'u', 638,
        'w', 636,
        'y', 280,
        0x2192, 979,
        '+', 902,
        '-', 902,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 17:
      if (lookahead == '$') ADVANCE(905);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0) ADVANCE(909);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(909);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(810);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(557);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(747);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(985);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(967);
      END_STATE();
    case 34:
      if (lookahead == '3') ADVANCE(871);
      if (lookahead == 'd') ADVANCE(1075);
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '[', 990,
        'a', 455,
        'd', 335,
        'l', 284,
        'm', 620,
        'o', 860,
        'p', 91,
        'r', 391,
        's', 642,
        't', 82,
        'u', 638,
        'w', 636,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(162);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(874);
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(874);
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(345);
      if (lookahead != 0) ADVANCE(987);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(342);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(878);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(509);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(386);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(399);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(119);
      if (lookahead == 'g') ADVANCE(689);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(217);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(503);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(376);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(222);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(612);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(704);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(798);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(748);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(346);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(511);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(615);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(843);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(757);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(513);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(627);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(353);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(167);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(880);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(355);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(1082);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(865);
      if (lookahead == 'f') ADVANCE(765);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(955);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(680);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 's') ADVANCE(953);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(728);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(716);
      if (lookahead == 'i') ADVANCE(886);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead == 'p') ADVANCE(762);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 'x') ADVANCE(1038);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(716);
      if (lookahead == 'p') ADVANCE(762);
      if (lookahead == 'x') ADVANCE(1038);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(894);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(892);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(847);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(847);
      if (lookahead == 's') ADVANCE(824);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(808);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(812);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(752);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(703);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(895);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(846);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(816);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(851);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(854);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(742);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == 'u') ADVANCE(791);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(742);
      if (lookahead == 's') ADVANCE(740);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(592);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(388);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(592);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(388);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(473);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(478);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(629);
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(629);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(631);
      if (lookahead == 'f') ADVANCE(496);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(631);
      if (lookahead == 'f') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(633);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(634);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(830);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(974);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(973);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(290);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'h') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(782);
      if (lookahead == 'h') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(617);
      if (lookahead == 's') ADVANCE(891);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(799);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(800);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(893);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(697);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(850);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(833);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(714);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(836);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(837);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1076);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1008);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(968);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(970);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(972);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1079);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(975);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(754);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(849);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'x') ADVANCE(435);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(585);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(599);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(602);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(883);
      if (lookahead == 'o') ADVANCE(944);
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1028);
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(951);
      if (lookahead == 'p') ADVANCE(686);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(958);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1087);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1103);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1104);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(1011);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1019);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(1021);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(984);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1015);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1027);
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == 'u') ADVANCE(724);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead == 'p') ADVANCE(835);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(783);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(487);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(919);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(918);
      if (lookahead == 'u') ADVANCE(786);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(825);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(765);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(589);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(862);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == 'w') ADVANCE(711);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(431);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(693);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(618);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(625);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(623);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(434);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(624);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(863);
      END_STATE();
    case 356:
      if (lookahead == 'g') ADVANCE(1090);
      END_STATE();
    case 357:
      if (lookahead == 'g') ADVANCE(1007);
      END_STATE();
    case 358:
      if (lookahead == 'g') ADVANCE(937);
      END_STATE();
    case 359:
      if (lookahead == 'g') ADVANCE(964);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(956);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(1089);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(385);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(373);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(373);
      if (lookahead == 'p') ADVANCE(927);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(689);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(522);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(476);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(480);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(374);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 380:
      if (lookahead == 'h') ADVANCE(995);
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 381:
      if (lookahead == 'h') ADVANCE(1074);
      END_STATE();
    case 382:
      if (lookahead == 'h') ADVANCE(1065);
      END_STATE();
    case 383:
      if (lookahead == 'h') ADVANCE(1070);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(954);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(767);
      END_STATE();
    case 386:
      if (lookahead == 'h') ADVANCE(432);
      END_STATE();
    case 387:
      if (lookahead == 'h') ADVANCE(648);
      END_STATE();
    case 388:
      if (lookahead == 'h') ADVANCE(619);
      END_STATE();
    case 389:
      if (lookahead == 'h') ADVANCE(605);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(896);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(886);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(897);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(866);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(898);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 444:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 445:
      if (lookahead == 'k') ADVANCE(1077);
      END_STATE();
    case 446:
      if (lookahead == 'k') ADVANCE(887);
      END_STATE();
    case 447:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 448:
      if (lookahead == 'k') ADVANCE(741);
      END_STATE();
    case 449:
      if (lookahead == 'k') ADVANCE(732);
      END_STATE();
    case 450:
      if (lookahead == 'k') ADVANCE(367);
      END_STATE();
    case 451:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 452:
      if (lookahead == 'k') ADVANCE(308);
      END_STATE();
    case 453:
      if (lookahead == 'k') ADVANCE(409);
      END_STATE();
    case 454:
      if (lookahead == 'k') ADVANCE(761);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(935);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(1063);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(1001);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(1000);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(926);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(844);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(744);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(775);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(804);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(597);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(828);
      if (lookahead == 'p') ADVANCE(762);
      if (lookahead == 'x') ADVANCE(1038);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(855);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(758);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(929);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(1018);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(845);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(600);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(859);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(1042);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(978);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(1085);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(1088);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(1002);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(963);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(1009);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(945);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(275);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(1041);
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(813);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(787);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(613);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(809);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(781);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(790);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(1010);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(943);
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(872);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(869);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(853);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(877);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(876);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(841);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(857);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(856);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(721);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(1041);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(1072);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(1071);
      END_STATE();
    case 641:
      if (lookahead == 'p') ADVANCE(827);
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 642:
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 643:
      if (lookahead == 'p') ADVANCE(762);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == 'x') ADVANCE(1038);
      END_STATE();
    case 644:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 645:
      if (lookahead == 'p') ADVANCE(727);
      END_STATE();
    case 646:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(733);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(474);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(736);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(686);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(835);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(839);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(840);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(416);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(487);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 660:
      if (lookahead == 'p') ADVANCE(658);
      END_STATE();
    case 661:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(923);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(999);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(1003);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(980);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(1022);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(939);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(940);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(1073);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(971);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(920);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(1084);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(1014);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(1024);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(997);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(888);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(889);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(768);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(807);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(789);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(795);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(749);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(942);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(922);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(931);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(932);
      END_STATE();
    case 731:
      if (lookahead == 's') ADVANCE(988);
      END_STATE();
    case 732:
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(921);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(977);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(917);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(996);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(994);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(949);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 743:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 744:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(822);
      END_STATE();
    case 746:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 748:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 749:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 750:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 751:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 752:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 753:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 754:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 755:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 756:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 758:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 759:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 760:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 761:
      if (lookahead == 's') ADVANCE(661);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(1039);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(934);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(928);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(1066);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(930);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(946);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(1094);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(1092);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(981);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(1100);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(948);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(1006);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(1064);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(1068);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(1069);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(1004);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(933);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(1005);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(947);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 826:
      if (lookahead == 'u') ADVANCE(724);
      END_STATE();
    case 827:
      if (lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 828:
      if (lookahead == 'u') ADVANCE(728);
      END_STATE();
    case 829:
      if (lookahead == 'u') ADVANCE(646);
      END_STATE();
    case 830:
      if (lookahead == 'u') ADVANCE(729);
      END_STATE();
    case 831:
      if (lookahead == 'u') ADVANCE(479);
      END_STATE();
    case 832:
      if (lookahead == 'u') ADVANCE(730);
      END_STATE();
    case 833:
      if (lookahead == 'u') ADVANCE(731);
      END_STATE();
    case 834:
      if (lookahead == 'u') ADVANCE(770);
      END_STATE();
    case 835:
      if (lookahead == 'u') ADVANCE(771);
      END_STATE();
    case 836:
      if (lookahead == 'u') ADVANCE(738);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(739);
      END_STATE();
    case 838:
      if (lookahead == 'u') ADVANCE(796);
      END_STATE();
    case 839:
      if (lookahead == 'u') ADVANCE(778);
      END_STATE();
    case 840:
      if (lookahead == 'u') ADVANCE(779);
      END_STATE();
    case 841:
      if (lookahead == 'u') ADVANCE(713);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(780);
      END_STATE();
    case 843:
      if (lookahead == 'u') ADVANCE(712);
      END_STATE();
    case 844:
      if (lookahead == 'u') ADVANCE(805);
      END_STATE();
    case 845:
      if (lookahead == 'u') ADVANCE(508);
      END_STATE();
    case 846:
      if (lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 847:
      if (lookahead == 'u') ADVANCE(803);
      END_STATE();
    case 848:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 849:
      if (lookahead == 'u') ADVANCE(715);
      END_STATE();
    case 850:
      if (lookahead == 'u') ADVANCE(751);
      END_STATE();
    case 851:
      if (lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 852:
      if (lookahead == 'u') ADVANCE(806);
      END_STATE();
    case 853:
      if (lookahead == 'u') ADVANCE(544);
      END_STATE();
    case 854:
      if (lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 855:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 856:
      if (lookahead == 'u') ADVANCE(753);
      END_STATE();
    case 857:
      if (lookahead == 'u') ADVANCE(819);
      END_STATE();
    case 858:
      if (lookahead == 'u') ADVANCE(823);
      END_STATE();
    case 859:
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 860:
      if (lookahead == 'u') ADVANCE(825);
      END_STATE();
    case 861:
      if (lookahead == 'u') ADVANCE(821);
      END_STATE();
    case 862:
      if (lookahead == 'u') ADVANCE(494);
      END_STATE();
    case 863:
      if (lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 864:
      if (lookahead == 'v') ADVANCE(1067);
      END_STATE();
    case 865:
      if (lookahead == 'v') ADVANCE(277);
      END_STATE();
    case 866:
      if (lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 867:
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 868:
      if (lookahead == 'w') ADVANCE(1080);
      END_STATE();
    case 869:
      if (lookahead == 'w') ADVANCE(989);
      END_STATE();
    case 870:
      if (lookahead == 'w') ADVANCE(1023);
      END_STATE();
    case 871:
      if (lookahead == 'w') ADVANCE(500);
      END_STATE();
    case 872:
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 873:
      if (lookahead == 'w') ADVANCE(518);
      END_STATE();
    case 874:
      if (lookahead == 'w') ADVANCE(430);
      END_STATE();
    case 875:
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 876:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 877:
      if (lookahead == 'w') ADVANCE(756);
      END_STATE();
    case 878:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 879:
      if (lookahead == 'w') ADVANCE(440);
      END_STATE();
    case 880:
      if (lookahead == 'w') ADVANCE(442);
      END_STATE();
    case 881:
      if (lookahead == 'x') ADVANCE(275);
      END_STATE();
    case 882:
      if (lookahead == 'x') ADVANCE(203);
      END_STATE();
    case 883:
      if (lookahead == 'x') ADVANCE(766);
      END_STATE();
    case 884:
      if (lookahead == 'x') ADVANCE(407);
      END_STATE();
    case 885:
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 886:
      if (lookahead == 'x') ADVANCE(287);
      END_STATE();
    case 887:
      if (lookahead == 'y') ADVANCE(1102);
      END_STATE();
    case 888:
      if (lookahead == 'y') ADVANCE(982);
      END_STATE();
    case 889:
      if (lookahead == 'y') ADVANCE(983);
      END_STATE();
    case 890:
      if (lookahead == 'y') ADVANCE(587);
      END_STATE();
    case 891:
      if (lookahead == 'y') ADVANCE(502);
      END_STATE();
    case 892:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 893:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 894:
      if (lookahead == 'y') ADVANCE(734);
      END_STATE();
    case 895:
      if (lookahead == 'y') ADVANCE(622);
      END_STATE();
    case 896:
      if (lookahead == 'z') ADVANCE(621);
      END_STATE();
    case 897:
      if (lookahead == 'z') ADVANCE(266);
      END_STATE();
    case 898:
      if (lookahead == 'z') ADVANCE(267);
      END_STATE();
    case 899:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(899);
      if (lookahead != 0) ADVANCE(909);
      END_STATE();
    case 900:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(900);
      if (lookahead != 0) ADVANCE(911);
      END_STATE();
    case 901:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(901);
      if (lookahead != 0) ADVANCE(907);
      END_STATE();
    case 902:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 903:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 904:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1034);
      END_STATE();
    case 905:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 906:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1013);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1012);
      END_STATE();
    case 907:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(910);
      END_STATE();
    case 908:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 909:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 910:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 911:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(906);
      END_STATE();
    case 912:
      if (eof) ADVANCE(913);
      ADVANCE_MAP(
        '"', 5,
        '#', 916,
        '-', 27,
        'a', 151,
        'b', 137,
        'c', 463,
        'd', 331,
        'e', 881,
        'f', 497,
        'g', 77,
        'h', 390,
        'i', 568,
        'l', 284,
        'm', 577,
        'n', 578,
        'o', 338,
        'p', 395,
        'r', 391,
        's', 178,
        't', 392,
        'u', 530,
        'w', 436,
        '}', 1033,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(912);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(914);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(916);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(915);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(916);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_smart_borders);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_inverse_outer);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_smart_gaps);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_gaps);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_outer);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_inner);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_plus);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_minus);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_current);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_swap_modifier);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_titlebar);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_show_marks);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_focus_on_window_activation);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(553);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_urgent);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_focus);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_force_display_urgency_hint);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_workspace_auto_back_and_forth);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_force_xinerama);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_focus_wrapping);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_force);
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_popup_during_fullscreen);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_leave_fullscreen);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_mouse_warping);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_focus_follows_mouse);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_ipc_DASHsocket);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_client_DOT);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_focused);
      if (lookahead == '_') ADVANCE(411);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_focused_inactive);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_unfocused);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_primary);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_nonprimary);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_set_from_resource);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_set_resource);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(985);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_set_resource_fallback);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(986);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_no_focus);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__criteria_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_smart_no_gaps);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_pixel);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_stacking);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_tabbed);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1013);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1012);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_floating_size_op);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_DASH_DASHborder);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_DASH_DASHwhole_DASHwindow);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_DASH_DASHexclude_DASHtitlebar);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '_') ADVANCE(798);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_mode_name);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1034);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1037);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_px_unit);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_ppt_unit);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'i') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 's') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1037);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1062);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_back_and_forth);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '_') ADVANCE(601);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_prev);
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_next_on_output);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_prev_on_output);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_swap);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_swap);
      if (lookahead == '_') ADVANCE(509);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_con_id);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_scratchpad);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_window);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == 'g') ADVANCE(373);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_absolute);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_positioncenter);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_mouse);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_mouse);
      if (lookahead == '_') ADVANCE(878);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_floating);
      if (lookahead == '_') ADVANCE(503);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == 'h') ADVANCE(1096);
      if (lookahead == 'v') ADVANCE(1095);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_splitv);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_splith);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_mode_toggle);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_sticky);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 912},
  [2] = {.lex_state = 912},
  [3] = {.lex_state = 912},
  [4] = {.lex_state = 912},
  [5] = {.lex_state = 912},
  [6] = {.lex_state = 912},
  [7] = {.lex_state = 912},
  [8] = {.lex_state = 912},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 912},
  [34] = {.lex_state = 912},
  [35] = {.lex_state = 912},
  [36] = {.lex_state = 912},
  [37] = {.lex_state = 912},
  [38] = {.lex_state = 912},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 912},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 912},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 912},
  [65] = {.lex_state = 912},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 912},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 15},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 912},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 899},
  [143] = {.lex_state = 900},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 901},
  [153] = {.lex_state = 912},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 899},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 899},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 912},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 899},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 899},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 899},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 899},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
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
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_DASH_DASHno_DASHstartup_DASHid] = ACTIONS(1),
    [anon_sym_exec_always] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_u2192] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_primary] = ACTIONS(1),
    [anon_sym_nonprimary] = ACTIONS(1),
    [anon_sym_set_from_resource] = ACTIONS(1),
    [sym_set_resource] = ACTIONS(1),
    [sym_set_resource_fallback] = ACTIONS(1),
    [anon_sym_no_focus] = ACTIONS(1),
    [anon_sym_for_window] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
    [sym_px_unit] = ACTIONS(1),
    [sym_ppt_unit] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_restart] = ACTIONS(1),
    [anon_sym_back_and_forth] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_prev] = ACTIONS(1),
    [anon_sym_next_on_output] = ACTIONS(1),
    [anon_sym_prev_on_output] = ACTIONS(1),
    [anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth] = ACTIONS(1),
    [anon_sym_swap] = ACTIONS(1),
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_con_id] = ACTIONS(1),
    [anon_sym_mark] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_scratchpad] = ACTIONS(1),
    [anon_sym_window] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_absolute] = ACTIONS(1),
    [anon_sym_positioncenter] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_mouse] = ACTIONS(1),
    [anon_sym_fullscreen] = ACTIONS(1),
    [anon_sym_floating] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_split] = ACTIONS(1),
    [anon_sym_splitv] = ACTIONS(1),
    [anon_sym_splith] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_mode_toggle] = ACTIONS(1),
    [anon_sym_sticky] = ACTIONS(1),
    [anon_sym_enable] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(154),
    [sym__statement] = STATE(3),
    [sym_smart_borders] = STATE(158),
    [sym_smart_gaps] = STATE(158),
    [sym_gaps] = STATE(158),
    [sym_tiling_drag] = STATE(158),
    [sym_show_marks] = STATE(158),
    [sym_focus_on_window_activation] = STATE(158),
    [sym_force_display_urgency_hint] = STATE(158),
    [sym_workspace_auto_back_and_forth] = STATE(158),
    [sym_force_xinerama] = STATE(158),
    [sym_focus_wrapping] = STATE(158),
    [sym_popup_during_fullscreen] = STATE(158),
    [sym_mouse_warping] = STATE(158),
    [sym_focus_follows_mouse] = STATE(158),
    [sym_ipc_socket] = STATE(158),
    [sym_client] = STATE(158),
    [sym_exec] = STATE(158),
    [sym_exec_always] = STATE(158),
    [sym_assign] = STATE(158),
    [sym__definition] = STATE(158),
    [sym_set_from_resource] = STATE(158),
    [sym_set] = STATE(158),
    [sym_no_focus] = STATE(158),
    [sym_for_window] = STATE(158),
    [sym_hide_edge_borders] = STATE(158),
    [sym_border] = STATE(158),
    [sym_title_align] = STATE(158),
    [sym_workspace_layout] = STATE(158),
    [sym_default_orientation] = STATE(158),
    [sym_include] = STATE(158),
    [sym_floating_modifier] = STATE(158),
    [sym_floating_size] = STATE(158),
    [sym_binding] = STATE(158),
    [sym_font] = STATE(158),
    [sym_mode] = STATE(158),
    [sym_workspace] = STATE(158),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [sym__statement] = STATE(2),
    [sym_smart_borders] = STATE(257),
    [sym_smart_gaps] = STATE(257),
    [sym_gaps] = STATE(257),
    [sym_tiling_drag] = STATE(257),
    [sym_show_marks] = STATE(257),
    [sym_focus_on_window_activation] = STATE(257),
    [sym_force_display_urgency_hint] = STATE(257),
    [sym_workspace_auto_back_and_forth] = STATE(257),
    [sym_force_xinerama] = STATE(257),
    [sym_focus_wrapping] = STATE(257),
    [sym_popup_during_fullscreen] = STATE(257),
    [sym_mouse_warping] = STATE(257),
    [sym_focus_follows_mouse] = STATE(257),
    [sym_ipc_socket] = STATE(257),
    [sym_client] = STATE(257),
    [sym_exec] = STATE(257),
    [sym_exec_always] = STATE(257),
    [sym_assign] = STATE(257),
    [sym__definition] = STATE(257),
    [sym_set_from_resource] = STATE(257),
    [sym_set] = STATE(257),
    [sym_no_focus] = STATE(257),
    [sym_for_window] = STATE(257),
    [sym_hide_edge_borders] = STATE(257),
    [sym_border] = STATE(257),
    [sym_title_align] = STATE(257),
    [sym_workspace_layout] = STATE(257),
    [sym_default_orientation] = STATE(257),
    [sym_include] = STATE(257),
    [sym_floating_modifier] = STATE(257),
    [sym_floating_size] = STATE(257),
    [sym_binding] = STATE(257),
    [sym_font] = STATE(257),
    [sym_mode] = STATE(257),
    [sym_workspace] = STATE(257),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(75),
    [anon_sym_smart_borders] = ACTIONS(78),
    [anon_sym_smart_gaps] = ACTIONS(81),
    [anon_sym_gaps] = ACTIONS(84),
    [anon_sym_tiling_drag] = ACTIONS(87),
    [anon_sym_show_marks] = ACTIONS(90),
    [anon_sym_focus_on_window_activation] = ACTIONS(93),
    [anon_sym_force_display_urgency_hint] = ACTIONS(96),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(99),
    [anon_sym_force_xinerama] = ACTIONS(102),
    [anon_sym_focus_wrapping] = ACTIONS(105),
    [anon_sym_workspace] = ACTIONS(108),
    [anon_sym_popup_during_fullscreen] = ACTIONS(111),
    [anon_sym_mouse_warping] = ACTIONS(114),
    [anon_sym_focus_follows_mouse] = ACTIONS(117),
    [anon_sym_ipc_DASHsocket] = ACTIONS(120),
    [anon_sym_client_DOT] = ACTIONS(123),
    [anon_sym_exec] = ACTIONS(126),
    [anon_sym_exec_always] = ACTIONS(129),
    [anon_sym_assign] = ACTIONS(132),
    [anon_sym_set_from_resource] = ACTIONS(135),
    [aux_sym_set_token1] = ACTIONS(138),
    [anon_sym_no_focus] = ACTIONS(141),
    [anon_sym_for_window] = ACTIONS(144),
    [anon_sym_hide_edge_borders] = ACTIONS(147),
    [anon_sym_default_floating_border] = ACTIONS(150),
    [anon_sym_default_border] = ACTIONS(150),
    [anon_sym_border] = ACTIONS(150),
    [anon_sym_title_align] = ACTIONS(153),
    [anon_sym_workspace_layout] = ACTIONS(156),
    [anon_sym_default_orientation] = ACTIONS(159),
    [anon_sym_include] = ACTIONS(162),
    [anon_sym_floating_modifier] = ACTIONS(165),
    [anon_sym_floating_minimum_size] = ACTIONS(168),
    [anon_sym_floating_maximum_size] = ACTIONS(168),
    [anon_sym_bindsym] = ACTIONS(171),
    [anon_sym_bindcode] = ACTIONS(171),
    [anon_sym_font] = ACTIONS(174),
    [anon_sym_mode] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(180),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym_smart_borders] = STATE(158),
    [sym_smart_gaps] = STATE(158),
    [sym_gaps] = STATE(158),
    [sym_tiling_drag] = STATE(158),
    [sym_show_marks] = STATE(158),
    [sym_focus_on_window_activation] = STATE(158),
    [sym_force_display_urgency_hint] = STATE(158),
    [sym_workspace_auto_back_and_forth] = STATE(158),
    [sym_force_xinerama] = STATE(158),
    [sym_focus_wrapping] = STATE(158),
    [sym_popup_during_fullscreen] = STATE(158),
    [sym_mouse_warping] = STATE(158),
    [sym_focus_follows_mouse] = STATE(158),
    [sym_ipc_socket] = STATE(158),
    [sym_client] = STATE(158),
    [sym_exec] = STATE(158),
    [sym_exec_always] = STATE(158),
    [sym_assign] = STATE(158),
    [sym__definition] = STATE(158),
    [sym_set_from_resource] = STATE(158),
    [sym_set] = STATE(158),
    [sym_no_focus] = STATE(158),
    [sym_for_window] = STATE(158),
    [sym_hide_edge_borders] = STATE(158),
    [sym_border] = STATE(158),
    [sym_title_align] = STATE(158),
    [sym_workspace_layout] = STATE(158),
    [sym_default_orientation] = STATE(158),
    [sym_include] = STATE(158),
    [sym_floating_modifier] = STATE(158),
    [sym_floating_size] = STATE(158),
    [sym_binding] = STATE(158),
    [sym_font] = STATE(158),
    [sym_mode] = STATE(158),
    [sym_workspace] = STATE(158),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(182),
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
  [4] = {
    [sym__statement] = STATE(4),
    [sym_smart_borders] = STATE(158),
    [sym_smart_gaps] = STATE(158),
    [sym_gaps] = STATE(158),
    [sym_tiling_drag] = STATE(158),
    [sym_show_marks] = STATE(158),
    [sym_focus_on_window_activation] = STATE(158),
    [sym_force_display_urgency_hint] = STATE(158),
    [sym_workspace_auto_back_and_forth] = STATE(158),
    [sym_force_xinerama] = STATE(158),
    [sym_focus_wrapping] = STATE(158),
    [sym_popup_during_fullscreen] = STATE(158),
    [sym_mouse_warping] = STATE(158),
    [sym_focus_follows_mouse] = STATE(158),
    [sym_ipc_socket] = STATE(158),
    [sym_client] = STATE(158),
    [sym_exec] = STATE(158),
    [sym_exec_always] = STATE(158),
    [sym_assign] = STATE(158),
    [sym__definition] = STATE(158),
    [sym_set_from_resource] = STATE(158),
    [sym_set] = STATE(158),
    [sym_no_focus] = STATE(158),
    [sym_for_window] = STATE(158),
    [sym_hide_edge_borders] = STATE(158),
    [sym_border] = STATE(158),
    [sym_title_align] = STATE(158),
    [sym_workspace_layout] = STATE(158),
    [sym_default_orientation] = STATE(158),
    [sym_include] = STATE(158),
    [sym_floating_modifier] = STATE(158),
    [sym_floating_size] = STATE(158),
    [sym_binding] = STATE(158),
    [sym_font] = STATE(158),
    [sym_mode] = STATE(158),
    [sym_workspace] = STATE(158),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_comment] = ACTIONS(184),
    [anon_sym_smart_borders] = ACTIONS(78),
    [anon_sym_smart_gaps] = ACTIONS(81),
    [anon_sym_gaps] = ACTIONS(84),
    [anon_sym_tiling_drag] = ACTIONS(87),
    [anon_sym_show_marks] = ACTIONS(90),
    [anon_sym_focus_on_window_activation] = ACTIONS(93),
    [anon_sym_force_display_urgency_hint] = ACTIONS(96),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(99),
    [anon_sym_force_xinerama] = ACTIONS(102),
    [anon_sym_focus_wrapping] = ACTIONS(105),
    [anon_sym_workspace] = ACTIONS(108),
    [anon_sym_popup_during_fullscreen] = ACTIONS(111),
    [anon_sym_mouse_warping] = ACTIONS(114),
    [anon_sym_focus_follows_mouse] = ACTIONS(117),
    [anon_sym_ipc_DASHsocket] = ACTIONS(120),
    [anon_sym_client_DOT] = ACTIONS(123),
    [anon_sym_exec] = ACTIONS(126),
    [anon_sym_exec_always] = ACTIONS(129),
    [anon_sym_assign] = ACTIONS(132),
    [anon_sym_set_from_resource] = ACTIONS(135),
    [aux_sym_set_token1] = ACTIONS(138),
    [anon_sym_no_focus] = ACTIONS(141),
    [anon_sym_for_window] = ACTIONS(144),
    [anon_sym_hide_edge_borders] = ACTIONS(147),
    [anon_sym_default_floating_border] = ACTIONS(150),
    [anon_sym_default_border] = ACTIONS(150),
    [anon_sym_border] = ACTIONS(150),
    [anon_sym_title_align] = ACTIONS(153),
    [anon_sym_workspace_layout] = ACTIONS(156),
    [anon_sym_default_orientation] = ACTIONS(159),
    [anon_sym_include] = ACTIONS(162),
    [anon_sym_floating_modifier] = ACTIONS(165),
    [anon_sym_floating_minimum_size] = ACTIONS(168),
    [anon_sym_floating_maximum_size] = ACTIONS(168),
    [anon_sym_bindsym] = ACTIONS(171),
    [anon_sym_bindcode] = ACTIONS(171),
    [anon_sym_font] = ACTIONS(174),
    [anon_sym_mode] = ACTIONS(177),
  },
  [5] = {
    [sym__statement] = STATE(6),
    [sym_smart_borders] = STATE(257),
    [sym_smart_gaps] = STATE(257),
    [sym_gaps] = STATE(257),
    [sym_tiling_drag] = STATE(257),
    [sym_show_marks] = STATE(257),
    [sym_focus_on_window_activation] = STATE(257),
    [sym_force_display_urgency_hint] = STATE(257),
    [sym_workspace_auto_back_and_forth] = STATE(257),
    [sym_force_xinerama] = STATE(257),
    [sym_focus_wrapping] = STATE(257),
    [sym_popup_during_fullscreen] = STATE(257),
    [sym_mouse_warping] = STATE(257),
    [sym_focus_follows_mouse] = STATE(257),
    [sym_ipc_socket] = STATE(257),
    [sym_client] = STATE(257),
    [sym_exec] = STATE(257),
    [sym_exec_always] = STATE(257),
    [sym_assign] = STATE(257),
    [sym__definition] = STATE(257),
    [sym_set_from_resource] = STATE(257),
    [sym_set] = STATE(257),
    [sym_no_focus] = STATE(257),
    [sym_for_window] = STATE(257),
    [sym_hide_edge_borders] = STATE(257),
    [sym_border] = STATE(257),
    [sym_title_align] = STATE(257),
    [sym_workspace_layout] = STATE(257),
    [sym_default_orientation] = STATE(257),
    [sym_include] = STATE(257),
    [sym_floating_modifier] = STATE(257),
    [sym_floating_size] = STATE(257),
    [sym_binding] = STATE(257),
    [sym_font] = STATE(257),
    [sym_mode] = STATE(257),
    [sym_workspace] = STATE(257),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(187),
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
    [anon_sym_RBRACE] = ACTIONS(189),
  },
  [6] = {
    [sym__statement] = STATE(2),
    [sym_smart_borders] = STATE(257),
    [sym_smart_gaps] = STATE(257),
    [sym_gaps] = STATE(257),
    [sym_tiling_drag] = STATE(257),
    [sym_show_marks] = STATE(257),
    [sym_focus_on_window_activation] = STATE(257),
    [sym_force_display_urgency_hint] = STATE(257),
    [sym_workspace_auto_back_and_forth] = STATE(257),
    [sym_force_xinerama] = STATE(257),
    [sym_focus_wrapping] = STATE(257),
    [sym_popup_during_fullscreen] = STATE(257),
    [sym_mouse_warping] = STATE(257),
    [sym_focus_follows_mouse] = STATE(257),
    [sym_ipc_socket] = STATE(257),
    [sym_client] = STATE(257),
    [sym_exec] = STATE(257),
    [sym_exec_always] = STATE(257),
    [sym_assign] = STATE(257),
    [sym__definition] = STATE(257),
    [sym_set_from_resource] = STATE(257),
    [sym_set] = STATE(257),
    [sym_no_focus] = STATE(257),
    [sym_for_window] = STATE(257),
    [sym_hide_edge_borders] = STATE(257),
    [sym_border] = STATE(257),
    [sym_title_align] = STATE(257),
    [sym_workspace_layout] = STATE(257),
    [sym_default_orientation] = STATE(257),
    [sym_include] = STATE(257),
    [sym_floating_modifier] = STATE(257),
    [sym_floating_size] = STATE(257),
    [sym_binding] = STATE(257),
    [sym_font] = STATE(257),
    [sym_mode] = STATE(257),
    [sym_workspace] = STATE(257),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(187),
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
  [90] = 22,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_workspace,
    ACTIONS(201), 1,
      anon_sym_exec,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_mode,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      anon_sym_swap,
    ACTIONS(217), 1,
      anon_sym_move,
    ACTIONS(221), 1,
      anon_sym_layout,
    ACTIONS(223), 1,
      anon_sym_split,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(12), 1,
      aux_sym_binding_repeat2,
    STATE(17), 1,
      sym_criteria,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(209), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(213), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(219), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [173] = 22,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_workspace,
    ACTIONS(201), 1,
      anon_sym_exec,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_mode,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      anon_sym_swap,
    ACTIONS(217), 1,
      anon_sym_move,
    ACTIONS(221), 1,
      anon_sym_layout,
    ACTIONS(223), 1,
      anon_sym_split,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(13), 1,
      aux_sym_binding_repeat2,
    STATE(18), 1,
      sym_criteria,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(209), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(213), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(219), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [256] = 21,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_workspace,
    ACTIONS(201), 1,
      anon_sym_exec,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_mode,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      anon_sym_swap,
    ACTIONS(217), 1,
      anon_sym_move,
    ACTIONS(221), 1,
      anon_sym_layout,
    ACTIONS(223), 1,
      anon_sym_split,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(145), 1,
      sym_unit,
    STATE(146), 1,
      sym__value,
    ACTIONS(209), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(213), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(219), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [337] = 21,
    ACTIONS(27), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(227), 1,
      aux_sym__statement_token1,
    ACTIONS(229), 1,
      anon_sym_gaps,
    ACTIONS(231), 1,
      anon_sym_focus,
    ACTIONS(235), 1,
      anon_sym_mode,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      anon_sym_swap,
    ACTIONS(247), 1,
      anon_sym_move,
    ACTIONS(251), 1,
      anon_sym_layout,
    ACTIONS(253), 1,
      anon_sym_split,
    ACTIONS(255), 1,
      anon_sym_sticky,
    STATE(15), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(239), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(243), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(249), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(233), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [417] = 21,
    ACTIONS(27), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(229), 1,
      anon_sym_gaps,
    ACTIONS(231), 1,
      anon_sym_focus,
    ACTIONS(235), 1,
      anon_sym_mode,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      anon_sym_swap,
    ACTIONS(247), 1,
      anon_sym_move,
    ACTIONS(251), 1,
      anon_sym_layout,
    ACTIONS(253), 1,
      anon_sym_split,
    ACTIONS(255), 1,
      anon_sym_sticky,
    ACTIONS(257), 1,
      aux_sym__statement_token1,
    STATE(15), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(239), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(243), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(249), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(233), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [497] = 21,
    ACTIONS(27), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(229), 1,
      anon_sym_gaps,
    ACTIONS(231), 1,
      anon_sym_focus,
    ACTIONS(235), 1,
      anon_sym_mode,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      anon_sym_swap,
    ACTIONS(247), 1,
      anon_sym_move,
    ACTIONS(251), 1,
      anon_sym_layout,
    ACTIONS(253), 1,
      anon_sym_split,
    ACTIONS(255), 1,
      anon_sym_sticky,
    ACTIONS(257), 1,
      aux_sym__statement_token1,
    STATE(15), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(239), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(243), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(249), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(233), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [577] = 21,
    ACTIONS(259), 1,
      aux_sym__statement_token1,
    ACTIONS(261), 1,
      anon_sym_gaps,
    ACTIONS(264), 1,
      anon_sym_focus,
    ACTIONS(267), 1,
      anon_sym_workspace,
    ACTIONS(270), 1,
      anon_sym_exec,
    ACTIONS(276), 1,
      anon_sym_mode,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_BSLASH,
    ACTIONS(291), 1,
      anon_sym_swap,
    ACTIONS(294), 1,
      anon_sym_move,
    ACTIONS(300), 1,
      anon_sym_layout,
    ACTIONS(303), 1,
      anon_sym_split,
    ACTIONS(306), 1,
      anon_sym_sticky,
    STATE(15), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(282), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(288), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(297), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(273), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [657] = 21,
    ACTIONS(27), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(229), 1,
      anon_sym_gaps,
    ACTIONS(231), 1,
      anon_sym_focus,
    ACTIONS(235), 1,
      anon_sym_mode,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      anon_sym_swap,
    ACTIONS(247), 1,
      anon_sym_move,
    ACTIONS(251), 1,
      anon_sym_layout,
    ACTIONS(253), 1,
      anon_sym_split,
    ACTIONS(255), 1,
      anon_sym_sticky,
    ACTIONS(309), 1,
      aux_sym__statement_token1,
    STATE(15), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(239), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(243), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(249), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(233), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [737] = 20,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_workspace,
    ACTIONS(201), 1,
      anon_sym_exec,
    ACTIONS(205), 1,
      anon_sym_mode,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      anon_sym_swap,
    ACTIONS(217), 1,
      anon_sym_move,
    ACTIONS(221), 1,
      anon_sym_layout,
    ACTIONS(223), 1,
      anon_sym_split,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(14), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(209), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(213), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(219), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [814] = 20,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_workspace,
    ACTIONS(201), 1,
      anon_sym_exec,
    ACTIONS(205), 1,
      anon_sym_mode,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    ACTIONS(215), 1,
      anon_sym_swap,
    ACTIONS(217), 1,
      anon_sym_move,
    ACTIONS(221), 1,
      anon_sym_layout,
    ACTIONS(223), 1,
      anon_sym_split,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(16), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(145), 1,
      sym_unit,
    ACTIONS(209), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(213), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(219), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(144), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [891] = 17,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(199), 1,
      anon_sym_workspace,
    ACTIONS(201), 1,
      anon_sym_exec,
    ACTIONS(215), 1,
      anon_sym_swap,
    ACTIONS(217), 1,
      anon_sym_move,
    ACTIONS(221), 1,
      anon_sym_layout,
    ACTIONS(223), 1,
      anon_sym_split,
    ACTIONS(225), 1,
      anon_sym_sticky,
    ACTIONS(311), 1,
      anon_sym_mode,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(182), 1,
      sym_unit,
    ACTIONS(209), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(219), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(315), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(181), 12,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [959] = 2,
    ACTIONS(319), 1,
      anon_sym_mode,
    ACTIONS(317), 31,
      anon_sym_gaps,
      anon_sym_left,
      anon_sym_right,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_u2192,
      anon_sym_number,
      anon_sym_output,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      sym_number,
      anon_sym_up,
      anon_sym_down,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_parent,
      anon_sym_mode_toggle,
      anon_sym_sticky,
  [996] = 3,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(321), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1027] = 1,
    ACTIONS(326), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1052] = 2,
    ACTIONS(328), 1,
      aux_sym__statement_token1,
    ACTIONS(330), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1079] = 1,
    ACTIONS(332), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1104] = 2,
    ACTIONS(334), 1,
      aux_sym__statement_token1,
    ACTIONS(336), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1131] = 2,
    ACTIONS(338), 1,
      aux_sym__statement_token1,
    ACTIONS(340), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1158] = 2,
    ACTIONS(342), 1,
      aux_sym__statement_token1,
    ACTIONS(344), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1185] = 2,
    ACTIONS(346), 1,
      aux_sym__statement_token1,
    ACTIONS(348), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1212] = 2,
    ACTIONS(350), 1,
      aux_sym__statement_token1,
    ACTIONS(352), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1239] = 2,
    ACTIONS(354), 1,
      aux_sym__statement_token1,
    ACTIONS(356), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1266] = 2,
    ACTIONS(358), 1,
      aux_sym__statement_token1,
    ACTIONS(360), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1293] = 2,
    ACTIONS(362), 1,
      aux_sym__statement_token1,
    ACTIONS(364), 21,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1320] = 13,
    ACTIONS(368), 1,
      anon_sym_workspace,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(372), 1,
      anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth,
    ACTIONS(376), 1,
      anon_sym_scratchpad,
    ACTIONS(378), 1,
      anon_sym_to,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    STATE(100), 1,
      sym__directions,
    STATE(193), 1,
      sym_move_value,
    ACTIONS(374), 2,
      anon_sym_container,
      anon_sym_window,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1368] = 11,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    ACTIONS(386), 1,
      anon_sym_workspace,
    ACTIONS(390), 1,
      anon_sym_to,
    STATE(100), 1,
      sym__directions,
    STATE(229), 1,
      sym_move_value,
    ACTIONS(388), 2,
      anon_sym_container,
      anon_sym_window,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1410] = 11,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    ACTIONS(390), 1,
      anon_sym_to,
    ACTIONS(392), 1,
      anon_sym_workspace,
    ACTIONS(394), 1,
      anon_sym_number,
    STATE(100), 1,
      sym__directions,
    STATE(229), 1,
      sym_move_value,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1451] = 11,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    ACTIONS(392), 1,
      anon_sym_workspace,
    ACTIONS(394), 1,
      anon_sym_number,
    ACTIONS(396), 1,
      anon_sym_to,
    STATE(100), 1,
      sym__directions,
    STATE(248), 1,
      sym_move_value,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1492] = 10,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    ACTIONS(392), 1,
      anon_sym_workspace,
    ACTIONS(396), 1,
      anon_sym_to,
    STATE(100), 1,
      sym__directions,
    STATE(248), 1,
      sym_move_value,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1530] = 10,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    ACTIONS(390), 1,
      anon_sym_to,
    ACTIONS(392), 1,
      anon_sym_workspace,
    STATE(100), 1,
      sym__directions,
    STATE(229), 1,
      sym_move_value,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1568] = 3,
    ACTIONS(401), 1,
      sym_number,
    STATE(39), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(398), 13,
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
  [1591] = 9,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    ACTIONS(392), 1,
      anon_sym_workspace,
    STATE(100), 1,
      sym__directions,
    STATE(229), 1,
      sym_move_value,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1626] = 3,
    ACTIONS(405), 1,
      sym_number,
    STATE(39), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(403), 13,
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
  [1649] = 9,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    ACTIONS(392), 1,
      anon_sym_workspace,
    STATE(100), 1,
      sym__directions,
    STATE(248), 1,
      sym_move_value,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1684] = 9,
    ACTIONS(370), 1,
      anon_sym_output,
    ACTIONS(380), 1,
      anon_sym_absolute,
    ACTIONS(382), 1,
      anon_sym_positioncenter,
    ACTIONS(384), 1,
      anon_sym_position,
    ACTIONS(392), 1,
      anon_sym_workspace,
    STATE(100), 1,
      sym__directions,
    STATE(253), 1,
      sym_move_value,
    ACTIONS(366), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(194), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1719] = 2,
    STATE(41), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(403), 13,
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
  [1739] = 8,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(409), 1,
      anon_sym_workspace,
    ACTIONS(411), 1,
      anon_sym_output,
    STATE(48), 1,
      sym_criteria,
    STATE(127), 1,
      sym__focus_workspace,
    STATE(175), 1,
      sym_focus_value,
    STATE(173), 3,
      sym__directions,
      sym__focus_direction,
      sym__focus_output,
    ACTIONS(407), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_parent,
      anon_sym_mode_toggle,
  [1771] = 1,
    ACTIONS(413), 14,
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
  [1788] = 11,
    ACTIONS(415), 1,
      anon_sym_number,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(419), 1,
      sym_number,
    ACTIONS(421), 1,
      anon_sym_back_and_forth,
    ACTIONS(427), 1,
      anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth,
    STATE(120), 1,
      sym__workspace_id,
    STATE(228), 1,
      sym_workspace_value,
    STATE(231), 1,
      sym__workspace_switch,
    STATE(232), 1,
      sym__workspace_assign_output,
    ACTIONS(423), 2,
      anon_sym_next,
      anon_sym_prev,
    ACTIONS(425), 2,
      anon_sym_next_on_output,
      anon_sym_prev_on_output,
  [1824] = 6,
    ACTIONS(409), 1,
      anon_sym_workspace,
    ACTIONS(411), 1,
      anon_sym_output,
    STATE(127), 1,
      sym__focus_workspace,
    STATE(219), 1,
      sym_focus_value,
    STATE(173), 3,
      sym__directions,
      sym__focus_direction,
      sym__focus_output,
    ACTIONS(407), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_parent,
      anon_sym_mode_toggle,
  [1850] = 6,
    ACTIONS(431), 1,
      anon_sym_default,
    ACTIONS(433), 1,
      anon_sym_toggle,
    ACTIONS(435), 1,
      anon_sym_split,
    STATE(260), 1,
      sym_layout_value,
    STATE(54), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(429), 5,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_splitv,
      anon_sym_splith,
  [1874] = 3,
    ACTIONS(437), 1,
      aux_sym__statement_token1,
    STATE(50), 3,
      sym__output_value,
      sym__directions,
      aux_sym__focus_output_repeat1,
    ACTIONS(439), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [1891] = 3,
    ACTIONS(442), 1,
      aux_sym__statement_token1,
    STATE(50), 3,
      sym__output_value,
      sym__directions,
      aux_sym__focus_output_repeat1,
    ACTIONS(444), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [1908] = 5,
    ACTIONS(446), 1,
      sym_keymap_trigger,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(10), 1,
      sym_keymap,
    STATE(59), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(448), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1928] = 5,
    ACTIONS(446), 1,
      sym_keymap_trigger,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(9), 1,
      sym_keymap,
    STATE(52), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(448), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1948] = 3,
    ACTIONS(452), 1,
      aux_sym__statement_token1,
    STATE(55), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(435), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [1964] = 3,
    ACTIONS(454), 1,
      aux_sym__statement_token1,
    STATE(55), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(456), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [1980] = 2,
    STATE(51), 3,
      sym__output_value,
      sym__directions,
      aux_sym__focus_output_repeat1,
    ACTIONS(459), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [1994] = 3,
    ACTIONS(461), 1,
      aux_sym__statement_token1,
    STATE(55), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(435), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2010] = 2,
    STATE(169), 2,
      sym__output_value,
      sym__directions,
    ACTIONS(463), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [2023] = 3,
    ACTIONS(465), 2,
      sym_keymap_trigger,
      sym_identifier,
    STATE(59), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(467), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [2038] = 7,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_u2192,
    ACTIONS(472), 1,
      anon_sym_number,
    ACTIONS(474), 1,
      anon_sym_output,
    ACTIONS(476), 1,
      sym_number,
    STATE(130), 1,
      sym__workspace_id,
    STATE(129), 2,
      sym_assign_workspace,
      sym_assign_output,
  [2061] = 3,
    ACTIONS(435), 1,
      anon_sym_split,
    STATE(57), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(429), 5,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_splitv,
      anon_sym_splith,
  [2076] = 3,
    ACTIONS(480), 1,
      anon_sym_smart,
    STATE(184), 1,
      sym_hide_edge_borders_value,
    ACTIONS(478), 5,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_none,
      anon_sym_both,
      anon_sym_smart_no_gaps,
  [2090] = 6,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_number,
    ACTIONS(474), 1,
      anon_sym_output,
    ACTIONS(476), 1,
      sym_number,
    STATE(130), 1,
      sym__workspace_id,
    STATE(167), 2,
      sym_assign_workspace,
      sym_assign_output,
  [2110] = 5,
    ACTIONS(482), 1,
      anon_sym_off,
    ACTIONS(484), 1,
      anon_sym_swap_modifier,
    STATE(191), 1,
      sym_tiling_drag_value,
    ACTIONS(486), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
    STATE(186), 2,
      sym_tiling_drag_swap,
      sym_tiling_drag_modifier,
  [2128] = 3,
    ACTIONS(490), 1,
      anon_sym_focused,
    STATE(106), 1,
      sym_property,
    ACTIONS(488), 5,
      anon_sym_urgent,
      anon_sym_focused_inactive,
      anon_sym_unfocused,
      anon_sym_placeholder,
      anon_sym_background,
  [2142] = 2,
    ACTIONS(492), 1,
      aux_sym__statement_token1,
    ACTIONS(494), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2154] = 1,
    ACTIONS(496), 6,
      sym_keymap_trigger,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
      sym_identifier,
  [2163] = 3,
    STATE(202), 1,
      sym_split_value,
    ACTIONS(500), 2,
      anon_sym_v,
      anon_sym_h,
    ACTIONS(498), 3,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_toggle,
  [2176] = 4,
    ACTIONS(502), 1,
      aux_sym__statement_token1,
    ACTIONS(504), 1,
      sym_number,
    STATE(157), 1,
      sym_unit,
    ACTIONS(239), 2,
      sym_px_unit,
      sym_ppt_unit,
  [2190] = 2,
    STATE(205), 1,
      sym_focus_on_window_activation_value,
    ACTIONS(506), 4,
      anon_sym_smart,
      anon_sym_urgent,
      anon_sym_focus,
      anon_sym_none,
  [2200] = 4,
    ACTIONS(508), 1,
      aux_sym__statement_token1,
    ACTIONS(510), 1,
      sym_number,
    ACTIONS(512), 1,
      anon_sym_mouse,
    STATE(88), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2214] = 4,
    ACTIONS(514), 1,
      aux_sym__statement_token1,
    ACTIONS(516), 1,
      sym_number,
    STATE(122), 1,
      sym_unit,
    ACTIONS(239), 2,
      sym_px_unit,
      sym_ppt_unit,
  [2228] = 2,
    STATE(239), 1,
      sym_popup_during_fullscreen_value,
    ACTIONS(518), 4,
      anon_sym_all,
      anon_sym_smart,
      anon_sym_ignore,
      anon_sym_leave_fullscreen,
  [2238] = 2,
    STATE(218), 1,
      sym_focus_wrapping_value,
    ACTIONS(520), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_force,
      anon_sym_workspace,
  [2248] = 2,
    STATE(230), 1,
      sym__directions,
    ACTIONS(522), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
  [2258] = 2,
    STATE(204), 1,
      sym_sticky_value,
    ACTIONS(524), 3,
      anon_sym_toggle,
      anon_sym_enable,
      anon_sym_disable,
  [2267] = 4,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(528), 1,
      aux_sym__criteria_value_token1,
    STATE(85), 1,
      aux_sym_criteria_repeat1,
    STATE(108), 1,
      sym__criteria_value,
  [2280] = 2,
    STATE(178), 1,
      sym_smart_gaps_value,
    ACTIONS(530), 3,
      anon_sym_on,
      anon_sym_off,
      anon_sym_inverse_outer,
  [2289] = 4,
    ACTIONS(528), 1,
      aux_sym__criteria_value_token1,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_criteria_repeat1,
    STATE(108), 1,
      sym__criteria_value,
  [2302] = 2,
    STATE(118), 1,
      sym_border_value,
    ACTIONS(534), 3,
      anon_sym_none,
      anon_sym_normal,
      anon_sym_pixel,
  [2311] = 2,
    STATE(251), 1,
      sym_title_align_value,
    ACTIONS(536), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [2320] = 2,
    STATE(255), 1,
      sym_workspace_layout_value,
    ACTIONS(538), 3,
      anon_sym_default,
      anon_sym_stacking,
      anon_sym_tabbed,
  [2329] = 2,
    STATE(259), 1,
      sym_default_orientation_value,
    ACTIONS(540), 3,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_auto,
  [2338] = 3,
    ACTIONS(542), 1,
      aux_sym__statement_token1,
    STATE(212), 1,
      sym_unit,
    ACTIONS(239), 2,
      sym_px_unit,
      sym_ppt_unit,
  [2349] = 4,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    ACTIONS(546), 1,
      aux_sym__criteria_value_token1,
    STATE(85), 1,
      aux_sym_criteria_repeat1,
    STATE(108), 1,
      sym__criteria_value,
  [2362] = 2,
    STATE(172), 1,
      sym_smart_borders_value,
    ACTIONS(549), 3,
      anon_sym_on,
      anon_sym_off,
      anon_sym_inverse_outer,
  [2371] = 4,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(551), 1,
      anon_sym_number,
    ACTIONS(553), 1,
      sym_number,
    STATE(224), 1,
      sym__workspace_id,
  [2384] = 3,
    ACTIONS(510), 1,
      sym_number,
    ACTIONS(555), 1,
      aux_sym__statement_token1,
    STATE(89), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2395] = 3,
    ACTIONS(557), 1,
      aux_sym__statement_token1,
    ACTIONS(559), 1,
      sym_number,
    STATE(89), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2406] = 3,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_number,
    STATE(247), 1,
      sym_workspace_number,
  [2416] = 2,
    ACTIONS(568), 1,
      anon_sym_EQ,
    ACTIONS(566), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [2424] = 3,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_number,
    STATE(168), 1,
      sym__workspace_id,
  [2434] = 2,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
  [2442] = 2,
    STATE(243), 1,
      sym_focus_follows_mouse_value,
    ACTIONS(572), 2,
      anon_sym_yes,
      anon_sym_no,
  [2450] = 3,
    ACTIONS(574), 1,
      aux_sym__criteria_value_token1,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(139), 1,
      sym_floating_modifier_value,
  [2460] = 2,
    STATE(209), 1,
      sym_workspace_auto_back_and_forth_value,
    ACTIONS(578), 2,
      anon_sym_yes,
      anon_sym_no,
  [2468] = 2,
    STATE(211), 1,
      sym_force_xinerama_value,
    ACTIONS(580), 2,
      anon_sym_yes,
      anon_sym_no,
  [2476] = 3,
    ACTIONS(582), 1,
      aux_sym__statement_token1,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_client_repeat1,
  [2486] = 2,
    STATE(198), 1,
      sym_show_marks_value,
    ACTIONS(587), 2,
      anon_sym_yes,
      anon_sym_no,
  [2494] = 3,
    ACTIONS(510), 1,
      sym_number,
    ACTIONS(589), 1,
      aux_sym__statement_token1,
    STATE(237), 1,
      sym__move_amount,
  [2504] = 3,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(220), 1,
      sym__workspace_id,
  [2514] = 3,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(593), 1,
      sym_number,
    STATE(161), 1,
      sym__workspace_id,
  [2524] = 1,
    ACTIONS(595), 3,
      anon_sym_id,
      anon_sym_con_id,
      anon_sym_mark,
  [2530] = 3,
    ACTIONS(528), 1,
      aux_sym__criteria_value_token1,
    STATE(77), 1,
      aux_sym_criteria_repeat1,
    STATE(108), 1,
      sym__criteria_value,
  [2540] = 3,
    ACTIONS(597), 1,
      aux_sym__statement_token1,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_client_repeat1,
  [2550] = 3,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      aux_sym__statement_token1,
    STATE(105), 1,
      aux_sym_client_repeat1,
  [2560] = 3,
    ACTIONS(528), 1,
      aux_sym__criteria_value_token1,
    STATE(79), 1,
      aux_sym_criteria_repeat1,
    STATE(108), 1,
      sym__criteria_value,
  [2570] = 1,
    ACTIONS(603), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [2575] = 2,
    ACTIONS(605), 1,
      aux_sym__statement_token1,
    ACTIONS(607), 1,
      sym_px_unit,
  [2582] = 2,
    ACTIONS(609), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(611), 1,
      sym_value,
  [2589] = 2,
    ACTIONS(613), 1,
      sym_identifier,
    ACTIONS(615), 1,
      sym_value,
  [2596] = 1,
    ACTIONS(617), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
  [2601] = 2,
    ACTIONS(619), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(621), 1,
      sym_value,
  [2608] = 1,
    ACTIONS(623), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [2613] = 2,
    ACTIONS(625), 1,
      anon_sym_LBRACK,
    STATE(156), 1,
      sym_criteria,
  [2620] = 2,
    ACTIONS(627), 1,
      aux_sym__statement_token1,
    ACTIONS(629), 1,
      anon_sym_output,
  [2627] = 2,
    ACTIONS(631), 1,
      aux_sym__statement_token1,
    ACTIONS(633), 1,
      sym_number,
  [2634] = 2,
    ACTIONS(635), 1,
      aux_sym__statement_token1,
    ACTIONS(637), 1,
      sym_number,
  [2641] = 2,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_criteria,
  [2648] = 2,
    ACTIONS(639), 1,
      aux_sym__statement_token1,
    ACTIONS(641), 1,
      anon_sym_output,
  [2655] = 2,
    ACTIONS(643), 1,
      aux_sym__statement_token1,
    ACTIONS(645), 1,
      sym_identifier,
  [2662] = 2,
    ACTIONS(647), 1,
      aux_sym__statement_token1,
    ACTIONS(649), 1,
      sym_number,
  [2669] = 2,
    ACTIONS(651), 1,
      aux_sym__statement_token1,
    ACTIONS(653), 1,
      sym_number,
  [2676] = 2,
    ACTIONS(655), 1,
      aux_sym__statement_token1,
    ACTIONS(657), 1,
      sym_identifier,
  [2683] = 2,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_mode_body,
  [2690] = 2,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(663), 1,
      sym_number,
  [2697] = 1,
    ACTIONS(665), 1,
      aux_sym__statement_token1,
  [2701] = 1,
    ACTIONS(667), 1,
      aux_sym__statement_token1,
  [2705] = 1,
    ACTIONS(669), 1,
      aux_sym__statement_token1,
  [2709] = 1,
    ACTIONS(671), 1,
      aux_sym__statement_token1,
  [2713] = 1,
    ACTIONS(673), 1,
      sym_set_resource_fallback,
  [2717] = 1,
    ACTIONS(675), 1,
      aux_sym__statement_token1,
  [2721] = 1,
    ACTIONS(677), 1,
      sym_number,
  [2725] = 1,
    ACTIONS(679), 1,
      sym_mode_name,
  [2729] = 1,
    ACTIONS(681), 1,
      aux_sym__statement_token1,
  [2733] = 1,
    ACTIONS(683), 1,
      aux_sym__statement_token1,
  [2737] = 1,
    ACTIONS(685), 1,
      aux_sym__statement_token1,
  [2741] = 1,
    ACTIONS(687), 1,
      anon_sym_container,
  [2745] = 1,
    ACTIONS(689), 1,
      aux_sym__statement_token1,
  [2749] = 1,
    ACTIONS(691), 1,
      anon_sym_toggle,
  [2753] = 1,
    ACTIONS(693), 1,
      sym_floating_size_op,
  [2757] = 1,
    ACTIONS(695), 1,
      sym_value,
  [2761] = 1,
    ACTIONS(697), 1,
      sym_include_source,
  [2765] = 1,
    ACTIONS(699), 1,
      aux_sym__statement_token1,
  [2769] = 1,
    ACTIONS(701), 1,
      aux_sym__statement_token1,
  [2773] = 1,
    ACTIONS(703), 1,
      aux_sym__statement_token1,
  [2777] = 1,
    ACTIONS(705), 1,
      sym_set_resource,
  [2781] = 1,
    ACTIONS(707), 1,
      aux_sym__statement_token1,
  [2785] = 1,
    ACTIONS(709), 1,
      sym_number,
  [2789] = 1,
    ACTIONS(711), 1,
      sym_number,
  [2793] = 1,
    ACTIONS(713), 1,
      sym_keymap_trigger,
  [2797] = 1,
    ACTIONS(715), 1,
      sym_font_name,
  [2801] = 1,
    ACTIONS(717), 1,
      sym_mode_name,
  [2805] = 1,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
  [2809] = 1,
    ACTIONS(721), 1,
      sym_value,
  [2813] = 1,
    ACTIONS(723), 1,
      aux_sym__statement_token1,
  [2817] = 1,
    ACTIONS(725), 1,
      aux_sym__statement_token1,
  [2821] = 1,
    ACTIONS(727), 1,
      aux_sym__statement_token1,
  [2825] = 1,
    ACTIONS(729), 1,
      aux_sym__statement_token1,
  [2829] = 1,
    ACTIONS(731), 1,
      aux_sym__statement_token1,
  [2833] = 1,
    ACTIONS(733), 1,
      aux_sym__statement_token1,
  [2837] = 1,
    ACTIONS(735), 1,
      aux_sym__statement_token1,
  [2841] = 1,
    ACTIONS(737), 1,
      aux_sym__statement_token1,
  [2845] = 1,
    ACTIONS(739), 1,
      sym_quoted_string,
  [2849] = 1,
    ACTIONS(741), 1,
      aux_sym__statement_token1,
  [2853] = 1,
    ACTIONS(743), 1,
      aux_sym__statement_token1,
  [2857] = 1,
    ACTIONS(745), 1,
      aux_sym__statement_token1,
  [2861] = 1,
    ACTIONS(747), 1,
      aux_sym__statement_token1,
  [2865] = 1,
    ACTIONS(749), 1,
      aux_sym__statement_token1,
  [2869] = 1,
    ACTIONS(751), 1,
      aux_sym__statement_token1,
  [2873] = 1,
    ACTIONS(753), 1,
      sym_identifier,
  [2877] = 1,
    ACTIONS(755), 1,
      aux_sym__statement_token1,
  [2881] = 1,
    ACTIONS(757), 1,
      aux_sym__statement_token1,
  [2885] = 1,
    ACTIONS(759), 1,
      aux_sym__statement_token1,
  [2889] = 1,
    ACTIONS(761), 1,
      aux_sym__statement_token1,
  [2893] = 1,
    ACTIONS(763), 1,
      sym_value,
  [2897] = 1,
    ACTIONS(765), 1,
      aux_sym__statement_token1,
  [2901] = 1,
    ACTIONS(767), 1,
      aux_sym__statement_token1,
  [2905] = 1,
    ACTIONS(769), 1,
      sym_mode_name,
  [2909] = 1,
    ACTIONS(771), 1,
      aux_sym__statement_token1,
  [2913] = 1,
    ACTIONS(773), 1,
      aux_sym__statement_token1,
  [2917] = 1,
    ACTIONS(775), 1,
      aux_sym__statement_token1,
  [2921] = 1,
    ACTIONS(777), 1,
      anon_sym_with,
  [2925] = 1,
    ACTIONS(779), 1,
      aux_sym__statement_token1,
  [2929] = 1,
    ACTIONS(781), 1,
      sym_identifier,
  [2933] = 1,
    ACTIONS(783), 1,
      aux_sym__statement_token1,
  [2937] = 1,
    ACTIONS(785), 1,
      aux_sym__statement_token1,
  [2941] = 1,
    ACTIONS(787), 1,
      aux_sym__statement_token1,
  [2945] = 1,
    ACTIONS(789), 1,
      aux_sym__statement_token1,
  [2949] = 1,
    ACTIONS(791), 1,
      anon_sym_positioncenter,
  [2953] = 1,
    ACTIONS(793), 1,
      aux_sym__statement_token1,
  [2957] = 1,
    ACTIONS(795), 1,
      aux_sym__statement_token1,
  [2961] = 1,
    ACTIONS(797), 1,
      aux_sym__statement_token1,
  [2965] = 1,
    ACTIONS(799), 1,
      aux_sym__statement_token1,
  [2969] = 1,
    ACTIONS(801), 1,
      aux_sym__statement_token1,
  [2973] = 1,
    ACTIONS(803), 1,
      aux_sym__statement_token1,
  [2977] = 1,
    ACTIONS(452), 1,
      aux_sym__statement_token1,
  [2981] = 1,
    ACTIONS(805), 1,
      aux_sym__statement_token1,
  [2985] = 1,
    ACTIONS(807), 1,
      aux_sym__statement_token1,
  [2989] = 1,
    ACTIONS(809), 1,
      aux_sym__statement_token1,
  [2993] = 1,
    ACTIONS(811), 1,
      aux_sym__statement_token1,
  [2997] = 1,
    ACTIONS(813), 1,
      aux_sym__statement_token1,
  [3001] = 1,
    ACTIONS(815), 1,
      aux_sym__statement_token1,
  [3005] = 1,
    ACTIONS(817), 1,
      aux_sym__statement_token1,
  [3009] = 1,
    ACTIONS(819), 1,
      aux_sym__statement_token1,
  [3013] = 1,
    ACTIONS(821), 1,
      anon_sym_ms,
  [3017] = 1,
    ACTIONS(823), 1,
      aux_sym__statement_token1,
  [3021] = 1,
    ACTIONS(825), 1,
      aux_sym__statement_token1,
  [3025] = 1,
    ACTIONS(827), 1,
      aux_sym__statement_token1,
  [3029] = 1,
    ACTIONS(829), 1,
      aux_sym__statement_token1,
  [3033] = 1,
    ACTIONS(831), 1,
      aux_sym__statement_token1,
  [3037] = 1,
    ACTIONS(833), 1,
      aux_sym__statement_token1,
  [3041] = 1,
    ACTIONS(835), 1,
      aux_sym__statement_token1,
  [3045] = 1,
    ACTIONS(837), 1,
      aux_sym__statement_token1,
  [3049] = 1,
    ACTIONS(839), 1,
      aux_sym__statement_token1,
  [3053] = 1,
    ACTIONS(841), 1,
      aux_sym__statement_token1,
  [3057] = 1,
    ACTIONS(843), 1,
      aux_sym__statement_token1,
  [3061] = 1,
    ACTIONS(845), 1,
      aux_sym__statement_token1,
  [3065] = 1,
    ACTIONS(847), 1,
      aux_sym__statement_token1,
  [3069] = 1,
    ACTIONS(849), 1,
      aux_sym__statement_token1,
  [3073] = 1,
    ACTIONS(851), 1,
      aux_sym__statement_token1,
  [3077] = 1,
    ACTIONS(853), 1,
      sym_value,
  [3081] = 1,
    ACTIONS(855), 1,
      aux_sym__statement_token1,
  [3085] = 1,
    ACTIONS(849), 1,
      aux_sym__statement_token1,
  [3089] = 1,
    ACTIONS(857), 1,
      sym_value,
  [3093] = 1,
    ACTIONS(394), 1,
      anon_sym_number,
  [3097] = 1,
    ACTIONS(859), 1,
      sym_value,
  [3101] = 1,
    ACTIONS(861), 1,
      aux_sym__statement_token1,
  [3105] = 1,
    ACTIONS(863), 1,
      aux_sym__statement_token1,
  [3109] = 1,
    ACTIONS(865), 1,
      aux_sym__statement_token1,
  [3113] = 1,
    ACTIONS(867), 1,
      aux_sym__statement_token1,
  [3117] = 1,
    ACTIONS(867), 1,
      aux_sym__statement_token1,
  [3121] = 1,
    ACTIONS(869), 1,
      aux_sym__statement_token1,
  [3125] = 1,
    ACTIONS(871), 1,
      aux_sym__statement_token1,
  [3129] = 1,
    ACTIONS(555), 1,
      aux_sym__statement_token1,
  [3133] = 1,
    ACTIONS(873), 1,
      aux_sym__statement_token1,
  [3137] = 1,
    ACTIONS(875), 1,
      aux_sym__statement_token1,
  [3141] = 1,
    ACTIONS(877), 1,
      aux_sym__statement_token1,
  [3145] = 1,
    ACTIONS(879), 1,
      aux_sym__statement_token1,
  [3149] = 1,
    ACTIONS(881), 1,
      aux_sym__statement_token1,
  [3153] = 1,
    ACTIONS(883), 1,
      aux_sym__statement_token1,
  [3157] = 1,
    ACTIONS(885), 1,
      aux_sym__statement_token1,
  [3161] = 1,
    ACTIONS(887), 1,
      aux_sym__statement_token1,
  [3165] = 1,
    ACTIONS(889), 1,
      sym_value,
  [3169] = 1,
    ACTIONS(891), 1,
      aux_sym__statement_token1,
  [3173] = 1,
    ACTIONS(893), 1,
      aux_sym__statement_token1,
  [3177] = 1,
    ACTIONS(895), 1,
      aux_sym__statement_token1,
  [3181] = 1,
    ACTIONS(897), 1,
      aux_sym__statement_token1,
  [3185] = 1,
    ACTIONS(899), 1,
      aux_sym__statement_token1,
  [3189] = 1,
    ACTIONS(901), 1,
      aux_sym__statement_token1,
  [3193] = 1,
    ACTIONS(903), 1,
      aux_sym__statement_token1,
  [3197] = 1,
    ACTIONS(905), 1,
      aux_sym__statement_token1,
  [3201] = 1,
    ACTIONS(907), 1,
      aux_sym__statement_token1,
  [3205] = 1,
    ACTIONS(909), 1,
      aux_sym__statement_token1,
  [3209] = 1,
    ACTIONS(911), 1,
      aux_sym__statement_token1,
  [3213] = 1,
    ACTIONS(317), 1,
      aux_sym__statement_token1,
  [3217] = 1,
    ACTIONS(913), 1,
      aux_sym__statement_token1,
  [3221] = 1,
    ACTIONS(915), 1,
      aux_sym__statement_token1,
  [3225] = 1,
    ACTIONS(917), 1,
      aux_sym__statement_token1,
  [3229] = 1,
    ACTIONS(919), 1,
      aux_sym__statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 256,
  [SMALL_STATE(12)] = 337,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 497,
  [SMALL_STATE(15)] = 577,
  [SMALL_STATE(16)] = 657,
  [SMALL_STATE(17)] = 737,
  [SMALL_STATE(18)] = 814,
  [SMALL_STATE(19)] = 891,
  [SMALL_STATE(20)] = 959,
  [SMALL_STATE(21)] = 996,
  [SMALL_STATE(22)] = 1027,
  [SMALL_STATE(23)] = 1052,
  [SMALL_STATE(24)] = 1079,
  [SMALL_STATE(25)] = 1104,
  [SMALL_STATE(26)] = 1131,
  [SMALL_STATE(27)] = 1158,
  [SMALL_STATE(28)] = 1185,
  [SMALL_STATE(29)] = 1212,
  [SMALL_STATE(30)] = 1239,
  [SMALL_STATE(31)] = 1266,
  [SMALL_STATE(32)] = 1293,
  [SMALL_STATE(33)] = 1320,
  [SMALL_STATE(34)] = 1368,
  [SMALL_STATE(35)] = 1410,
  [SMALL_STATE(36)] = 1451,
  [SMALL_STATE(37)] = 1492,
  [SMALL_STATE(38)] = 1530,
  [SMALL_STATE(39)] = 1568,
  [SMALL_STATE(40)] = 1591,
  [SMALL_STATE(41)] = 1626,
  [SMALL_STATE(42)] = 1649,
  [SMALL_STATE(43)] = 1684,
  [SMALL_STATE(44)] = 1719,
  [SMALL_STATE(45)] = 1739,
  [SMALL_STATE(46)] = 1771,
  [SMALL_STATE(47)] = 1788,
  [SMALL_STATE(48)] = 1824,
  [SMALL_STATE(49)] = 1850,
  [SMALL_STATE(50)] = 1874,
  [SMALL_STATE(51)] = 1891,
  [SMALL_STATE(52)] = 1908,
  [SMALL_STATE(53)] = 1928,
  [SMALL_STATE(54)] = 1948,
  [SMALL_STATE(55)] = 1964,
  [SMALL_STATE(56)] = 1980,
  [SMALL_STATE(57)] = 1994,
  [SMALL_STATE(58)] = 2010,
  [SMALL_STATE(59)] = 2023,
  [SMALL_STATE(60)] = 2038,
  [SMALL_STATE(61)] = 2061,
  [SMALL_STATE(62)] = 2076,
  [SMALL_STATE(63)] = 2090,
  [SMALL_STATE(64)] = 2110,
  [SMALL_STATE(65)] = 2128,
  [SMALL_STATE(66)] = 2142,
  [SMALL_STATE(67)] = 2154,
  [SMALL_STATE(68)] = 2163,
  [SMALL_STATE(69)] = 2176,
  [SMALL_STATE(70)] = 2190,
  [SMALL_STATE(71)] = 2200,
  [SMALL_STATE(72)] = 2214,
  [SMALL_STATE(73)] = 2228,
  [SMALL_STATE(74)] = 2238,
  [SMALL_STATE(75)] = 2248,
  [SMALL_STATE(76)] = 2258,
  [SMALL_STATE(77)] = 2267,
  [SMALL_STATE(78)] = 2280,
  [SMALL_STATE(79)] = 2289,
  [SMALL_STATE(80)] = 2302,
  [SMALL_STATE(81)] = 2311,
  [SMALL_STATE(82)] = 2320,
  [SMALL_STATE(83)] = 2329,
  [SMALL_STATE(84)] = 2338,
  [SMALL_STATE(85)] = 2349,
  [SMALL_STATE(86)] = 2362,
  [SMALL_STATE(87)] = 2371,
  [SMALL_STATE(88)] = 2384,
  [SMALL_STATE(89)] = 2395,
  [SMALL_STATE(90)] = 2406,
  [SMALL_STATE(91)] = 2416,
  [SMALL_STATE(92)] = 2424,
  [SMALL_STATE(93)] = 2434,
  [SMALL_STATE(94)] = 2442,
  [SMALL_STATE(95)] = 2450,
  [SMALL_STATE(96)] = 2460,
  [SMALL_STATE(97)] = 2468,
  [SMALL_STATE(98)] = 2476,
  [SMALL_STATE(99)] = 2486,
  [SMALL_STATE(100)] = 2494,
  [SMALL_STATE(101)] = 2504,
  [SMALL_STATE(102)] = 2514,
  [SMALL_STATE(103)] = 2524,
  [SMALL_STATE(104)] = 2530,
  [SMALL_STATE(105)] = 2540,
  [SMALL_STATE(106)] = 2550,
  [SMALL_STATE(107)] = 2560,
  [SMALL_STATE(108)] = 2570,
  [SMALL_STATE(109)] = 2575,
  [SMALL_STATE(110)] = 2582,
  [SMALL_STATE(111)] = 2589,
  [SMALL_STATE(112)] = 2596,
  [SMALL_STATE(113)] = 2601,
  [SMALL_STATE(114)] = 2608,
  [SMALL_STATE(115)] = 2613,
  [SMALL_STATE(116)] = 2620,
  [SMALL_STATE(117)] = 2627,
  [SMALL_STATE(118)] = 2634,
  [SMALL_STATE(119)] = 2641,
  [SMALL_STATE(120)] = 2648,
  [SMALL_STATE(121)] = 2655,
  [SMALL_STATE(122)] = 2662,
  [SMALL_STATE(123)] = 2669,
  [SMALL_STATE(124)] = 2676,
  [SMALL_STATE(125)] = 2683,
  [SMALL_STATE(126)] = 2690,
  [SMALL_STATE(127)] = 2697,
  [SMALL_STATE(128)] = 2701,
  [SMALL_STATE(129)] = 2705,
  [SMALL_STATE(130)] = 2709,
  [SMALL_STATE(131)] = 2713,
  [SMALL_STATE(132)] = 2717,
  [SMALL_STATE(133)] = 2721,
  [SMALL_STATE(134)] = 2725,
  [SMALL_STATE(135)] = 2729,
  [SMALL_STATE(136)] = 2733,
  [SMALL_STATE(137)] = 2737,
  [SMALL_STATE(138)] = 2741,
  [SMALL_STATE(139)] = 2745,
  [SMALL_STATE(140)] = 2749,
  [SMALL_STATE(141)] = 2753,
  [SMALL_STATE(142)] = 2757,
  [SMALL_STATE(143)] = 2761,
  [SMALL_STATE(144)] = 2765,
  [SMALL_STATE(145)] = 2769,
  [SMALL_STATE(146)] = 2773,
  [SMALL_STATE(147)] = 2777,
  [SMALL_STATE(148)] = 2781,
  [SMALL_STATE(149)] = 2785,
  [SMALL_STATE(150)] = 2789,
  [SMALL_STATE(151)] = 2793,
  [SMALL_STATE(152)] = 2797,
  [SMALL_STATE(153)] = 2801,
  [SMALL_STATE(154)] = 2805,
  [SMALL_STATE(155)] = 2809,
  [SMALL_STATE(156)] = 2813,
  [SMALL_STATE(157)] = 2817,
  [SMALL_STATE(158)] = 2821,
  [SMALL_STATE(159)] = 2825,
  [SMALL_STATE(160)] = 2829,
  [SMALL_STATE(161)] = 2833,
  [SMALL_STATE(162)] = 2837,
  [SMALL_STATE(163)] = 2841,
  [SMALL_STATE(164)] = 2845,
  [SMALL_STATE(165)] = 2849,
  [SMALL_STATE(166)] = 2853,
  [SMALL_STATE(167)] = 2857,
  [SMALL_STATE(168)] = 2861,
  [SMALL_STATE(169)] = 2865,
  [SMALL_STATE(170)] = 2869,
  [SMALL_STATE(171)] = 2873,
  [SMALL_STATE(172)] = 2877,
  [SMALL_STATE(173)] = 2881,
  [SMALL_STATE(174)] = 2885,
  [SMALL_STATE(175)] = 2889,
  [SMALL_STATE(176)] = 2893,
  [SMALL_STATE(177)] = 2897,
  [SMALL_STATE(178)] = 2901,
  [SMALL_STATE(179)] = 2905,
  [SMALL_STATE(180)] = 2909,
  [SMALL_STATE(181)] = 2913,
  [SMALL_STATE(182)] = 2917,
  [SMALL_STATE(183)] = 2921,
  [SMALL_STATE(184)] = 2925,
  [SMALL_STATE(185)] = 2929,
  [SMALL_STATE(186)] = 2933,
  [SMALL_STATE(187)] = 2937,
  [SMALL_STATE(188)] = 2941,
  [SMALL_STATE(189)] = 2945,
  [SMALL_STATE(190)] = 2949,
  [SMALL_STATE(191)] = 2953,
  [SMALL_STATE(192)] = 2957,
  [SMALL_STATE(193)] = 2961,
  [SMALL_STATE(194)] = 2965,
  [SMALL_STATE(195)] = 2969,
  [SMALL_STATE(196)] = 2973,
  [SMALL_STATE(197)] = 2977,
  [SMALL_STATE(198)] = 2981,
  [SMALL_STATE(199)] = 2985,
  [SMALL_STATE(200)] = 2989,
  [SMALL_STATE(201)] = 2993,
  [SMALL_STATE(202)] = 2997,
  [SMALL_STATE(203)] = 3001,
  [SMALL_STATE(204)] = 3005,
  [SMALL_STATE(205)] = 3009,
  [SMALL_STATE(206)] = 3013,
  [SMALL_STATE(207)] = 3017,
  [SMALL_STATE(208)] = 3021,
  [SMALL_STATE(209)] = 3025,
  [SMALL_STATE(210)] = 3029,
  [SMALL_STATE(211)] = 3033,
  [SMALL_STATE(212)] = 3037,
  [SMALL_STATE(213)] = 3041,
  [SMALL_STATE(214)] = 3045,
  [SMALL_STATE(215)] = 3049,
  [SMALL_STATE(216)] = 3053,
  [SMALL_STATE(217)] = 3057,
  [SMALL_STATE(218)] = 3061,
  [SMALL_STATE(219)] = 3065,
  [SMALL_STATE(220)] = 3069,
  [SMALL_STATE(221)] = 3073,
  [SMALL_STATE(222)] = 3077,
  [SMALL_STATE(223)] = 3081,
  [SMALL_STATE(224)] = 3085,
  [SMALL_STATE(225)] = 3089,
  [SMALL_STATE(226)] = 3093,
  [SMALL_STATE(227)] = 3097,
  [SMALL_STATE(228)] = 3101,
  [SMALL_STATE(229)] = 3105,
  [SMALL_STATE(230)] = 3109,
  [SMALL_STATE(231)] = 3113,
  [SMALL_STATE(232)] = 3117,
  [SMALL_STATE(233)] = 3121,
  [SMALL_STATE(234)] = 3125,
  [SMALL_STATE(235)] = 3129,
  [SMALL_STATE(236)] = 3133,
  [SMALL_STATE(237)] = 3137,
  [SMALL_STATE(238)] = 3141,
  [SMALL_STATE(239)] = 3145,
  [SMALL_STATE(240)] = 3149,
  [SMALL_STATE(241)] = 3153,
  [SMALL_STATE(242)] = 3157,
  [SMALL_STATE(243)] = 3161,
  [SMALL_STATE(244)] = 3165,
  [SMALL_STATE(245)] = 3169,
  [SMALL_STATE(246)] = 3173,
  [SMALL_STATE(247)] = 3177,
  [SMALL_STATE(248)] = 3181,
  [SMALL_STATE(249)] = 3185,
  [SMALL_STATE(250)] = 3189,
  [SMALL_STATE(251)] = 3193,
  [SMALL_STATE(252)] = 3197,
  [SMALL_STATE(253)] = 3201,
  [SMALL_STATE(254)] = 3205,
  [SMALL_STATE(255)] = 3209,
  [SMALL_STATE(256)] = 3213,
  [SMALL_STATE(257)] = 3217,
  [SMALL_STATE(258)] = 3221,
  [SMALL_STATE(259)] = 3225,
  [SMALL_STATE(260)] = 3229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 16),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 27),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(44),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(45),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(47),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(110),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(80),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(134),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(135),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(117),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(19),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(144),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(138),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(33),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(140),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(49),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(68),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 28), SHIFT_REPEAT(76),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5, 0, 32),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 23),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_criteria, 3, 0, 23),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat2, 1, 0, 18),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 1, 0, 18),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 10),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 10),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 26),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 26),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 30),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 30),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 31),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 31),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4, 0, 19),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4, 0, 19),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gaps_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gaps_repeat1, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps_option, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__focus_output_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__focus_output_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_output, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_value, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_layout_value_repeat1, 2, 0, 0),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_layout_value_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_value, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_mode, 1, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_mode, 1, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_flags, 1, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_position, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_amount, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_amount, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 24),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 24), SHIFT_REPEAT(91),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_position, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__move_position_repeat1, 2, 0, 0),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__move_position_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__criteria_value, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 22),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 2, 0, 22), SHIFT_REPEAT(121),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_directional, 1, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 3, 0, 12),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 2, 0, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 1, 0, 14),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps, 3, 0, 9),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__criteria_value, 3, 0, 9),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_id, 1, 0, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__workspace_id, 1, 0, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 2, 0, 7),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 1, 0, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 1, 0, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 1, 0, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_amount, 2, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_amount, 2, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border_value, 1, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_border_value, 1, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_value, 1, 0, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 8),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 1, 0, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 15),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier, 2, 0, 6),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 16),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 3, 0, 17),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [719] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_focus, 2, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 19),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 20),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps, 4, 0, 9),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 3, 0, 21),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_assign_output, 3, 0, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 2, 0, 5),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_borders_value, 1, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders_value, 1, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 2, 0, 11),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_output, 2, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_from_resource, 4, 0, 25),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_borders, 2, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_value, 1, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_gaps_value, 1, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 2, 0, 6),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_gaps, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders, 2, 0, 6),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_value, 1, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_swap, 2, 0, 10),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 2, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_swap, 2, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag, 2, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_modifier, 2, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 2, 0, 6),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_value, 1, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_mode, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks_value, 1, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 2, 0, 5),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation_value, 1, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_value, 1, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky_value, 1, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky, 2, 0, 6),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_size, 4, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth_value, 1, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama_value, 1, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama, 2, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 29),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping_value, 1, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_display_urgency_hint, 3, 0, 6),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_workspace, 2, 0, 10),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_workspace, 2, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping, 2, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 3, 0, 9),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 2, 0, 11),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_value, 1, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace, 2, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 3, 0, 9),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_output, 2, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_value, 1, 0, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_center, 2, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align_value, 1, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3, 0, 13),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_directional, 2, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen_value, 1, 0, 0),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen, 2, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mouse_warping, 2, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse_value, 1, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse, 2, 0, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_number, 1, 0, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_number, 1, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_workspace, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 4, 0, 33),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipc_socket, 2, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 3, 0, 13),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align, 2, 0, 6),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swap, 5, 0, 34),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 5, 0, 35),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout_value, 1, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout, 2, 0, 6),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation_value, 1, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation, 2, 0, 6),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout, 2, 0, 0),
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
