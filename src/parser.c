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
#define STATE_COUNT 285
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 269
#define ALIAS_COUNT 0
#define TOKEN_COUNT 158
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 39

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
  anon_sym_resize = 118,
  anon_sym_grow = 119,
  anon_sym_shrink = 120,
  anon_sym_width = 121,
  anon_sym_height = 122,
  anon_sym_or = 123,
  anon_sym_back_and_forth = 124,
  anon_sym_next = 125,
  anon_sym_prev = 126,
  anon_sym_next_on_output = 127,
  anon_sym_prev_on_output = 128,
  anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth = 129,
  anon_sym_swap = 130,
  anon_sym_container = 131,
  anon_sym_with = 132,
  anon_sym_id = 133,
  anon_sym_con_id = 134,
  anon_sym_mark = 135,
  anon_sym_move = 136,
  anon_sym_scratchpad = 137,
  anon_sym_window = 138,
  anon_sym_to = 139,
  anon_sym_absolute = 140,
  anon_sym_positioncenter = 141,
  anon_sym_position = 142,
  anon_sym_mouse = 143,
  anon_sym_fullscreen = 144,
  anon_sym_floating = 145,
  anon_sym_toggle = 146,
  anon_sym_layout = 147,
  anon_sym_split = 148,
  anon_sym_splitv = 149,
  anon_sym_splith = 150,
  anon_sym_v = 151,
  anon_sym_h = 152,
  anon_sym_parent = 153,
  anon_sym_mode_toggle = 154,
  anon_sym_sticky = 155,
  anon_sym_enable = 156,
  anon_sym_disable = 157,
  sym_source_file = 158,
  sym__statement = 159,
  sym_smart_borders = 160,
  sym_smart_borders_value = 161,
  sym_smart_gaps = 162,
  sym_smart_gaps_value = 163,
  sym_gaps = 164,
  sym_gaps_option = 165,
  sym_tiling_drag = 166,
  sym_tiling_drag_value = 167,
  sym_tiling_drag_swap = 168,
  sym_tiling_drag_modifier = 169,
  sym_show_marks = 170,
  sym_show_marks_value = 171,
  sym_focus_on_window_activation = 172,
  sym_focus_on_window_activation_value = 173,
  sym_force_display_urgency_hint = 174,
  sym_workspace_auto_back_and_forth = 175,
  sym_workspace_auto_back_and_forth_value = 176,
  sym_force_xinerama = 177,
  sym_force_xinerama_value = 178,
  sym_focus_wrapping = 179,
  sym_focus_wrapping_value = 180,
  sym_popup_during_fullscreen = 181,
  sym_popup_during_fullscreen_value = 182,
  sym_mouse_warping = 183,
  sym_focus_follows_mouse = 184,
  sym_focus_follows_mouse_value = 185,
  sym_ipc_socket = 186,
  sym_client = 187,
  sym_property = 188,
  sym_exec = 189,
  sym_exec_always = 190,
  sym_assign = 191,
  sym_assign_workspace = 192,
  sym_assign_output = 193,
  sym__output_value = 194,
  sym__definition = 195,
  sym_set_from_resource = 196,
  sym_set = 197,
  sym_no_focus = 198,
  sym_for_window = 199,
  sym_criteria = 200,
  sym__criteria_value = 201,
  sym_hide_edge_borders = 202,
  sym_hide_edge_borders_value = 203,
  sym_border = 204,
  sym_border_value = 205,
  sym_title_align = 206,
  sym_title_align_value = 207,
  sym_workspace_layout = 208,
  sym_workspace_layout_value = 209,
  sym_default_orientation = 210,
  sym_default_orientation_value = 211,
  sym_include = 212,
  sym_floating_modifier = 213,
  sym_floating_modifier_value = 214,
  sym_floating_size = 215,
  sym_binding = 216,
  sym_keymap = 217,
  sym_keymap_flags = 218,
  sym_font = 219,
  sym_mode = 220,
  sym_mode_body = 221,
  sym_unit = 222,
  sym__directions = 223,
  sym__value = 224,
  sym__i3_commands = 225,
  sym_resize = 226,
  sym_resize_value = 227,
  sym__resize_grow_shrink = 228,
  sym__resize_set = 229,
  sym_workspace = 230,
  sym_workspace_value = 231,
  sym__workspace_switch = 232,
  sym__workspace_assign_output = 233,
  sym__workspace_id = 234,
  sym_swap = 235,
  sym_move = 236,
  sym_move_value = 237,
  sym__move_directional = 238,
  sym__move_center = 239,
  sym__move_position = 240,
  sym__move_output = 241,
  sym__move_workspace = 242,
  sym__move_amount = 243,
  sym_workspace_number = 244,
  sym_window_mode = 245,
  sym_layout = 246,
  sym_layout_value = 247,
  sym_layout_mode = 248,
  sym_split = 249,
  sym_split_value = 250,
  sym_focus = 251,
  sym_focus_value = 252,
  sym__focus_direction = 253,
  sym__focus_output = 254,
  sym__focus_workspace = 255,
  sym_sticky = 256,
  sym_sticky_value = 257,
  aux_sym_source_file_repeat1 = 258,
  aux_sym_gaps_repeat1 = 259,
  aux_sym_client_repeat1 = 260,
  aux_sym_for_window_repeat1 = 261,
  aux_sym_criteria_repeat1 = 262,
  aux_sym_binding_repeat1 = 263,
  aux_sym_binding_repeat2 = 264,
  aux_sym__resize_set_repeat1 = 265,
  aux_sym__move_position_repeat1 = 266,
  aux_sym_layout_value_repeat1 = 267,
  aux_sym__focus_output_repeat1 = 268,
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
  [anon_sym_resize] = "resize",
  [anon_sym_grow] = "grow",
  [anon_sym_shrink] = "shrink",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_or] = "or",
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
  [sym_resize] = "resize",
  [sym_resize_value] = "resize_value",
  [sym__resize_grow_shrink] = "_resize_grow_shrink",
  [sym__resize_set] = "_resize_set",
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
  [aux_sym__resize_set_repeat1] = "_resize_set_repeat1",
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
  [anon_sym_resize] = anon_sym_resize,
  [anon_sym_grow] = anon_sym_grow,
  [anon_sym_shrink] = anon_sym_shrink,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_or] = anon_sym_or,
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
  [sym_resize] = sym_resize,
  [sym_resize_value] = sym_resize_value,
  [sym__resize_grow_shrink] = sym__resize_grow_shrink,
  [sym__resize_set] = sym__resize_set,
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
  [aux_sym__resize_set_repeat1] = aux_sym__resize_set_repeat1,
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
  [anon_sym_resize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
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
  [sym_resize] = {
    .visible = true,
    .named = true,
  },
  [sym_resize_value] = {
    .visible = true,
    .named = true,
  },
  [sym__resize_grow_shrink] = {
    .visible = false,
    .named = true,
  },
  [sym__resize_set] = {
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
  [aux_sym__resize_set_repeat1] = {
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
  field_amout = 1,
  field_body = 2,
  field_command = 3,
  field_fallback = 4,
  field_follow_mouse_value = 5,
  field_identifier = 6,
  field_mode = 7,
  field_name = 8,
  field_property = 9,
  field_resource = 10,
  field_source = 11,
  field_target = 12,
  field_unit = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_amout] = "amout",
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
  [27] = {.index = 38, .length = 1},
  [28] = {.index = 39, .length = 3},
  [29] = {.index = 42, .length = 6},
  [30] = {.index = 48, .length = 1},
  [31] = {.index = 49, .length = 1},
  [32] = {.index = 50, .length = 1},
  [33] = {.index = 51, .length = 3},
  [34] = {.index = 54, .length = 1},
  [35] = {.index = 55, .length = 2},
  [36] = {.index = 57, .length = 1},
  [37] = {.index = 58, .length = 4},
  [38] = {.index = 62, .length = 4},
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
    {field_amout, 0, .inherited = true},
  [38] =
    {field_unit, 0},
  [39] =
    {field_identifier, 3, .inherited = true},
    {field_name, 3, .inherited = true},
    {field_unit, 3, .inherited = true},
  [42] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_unit, 0, .inherited = true},
    {field_unit, 1, .inherited = true},
  [48] =
    {field_name, 3},
  [49] =
    {field_name, 1},
  [50] =
    {field_unit, 1},
  [51] =
    {field_identifier, 4, .inherited = true},
    {field_name, 4, .inherited = true},
    {field_unit, 4, .inherited = true},
  [54] =
    {field_value, 3},
  [55] =
    {field_target, 3},
    {field_value, 4},
  [57] =
    {field_value, 4},
  [58] =
    {field_amout, 2},
    {field_amout, 3},
    {field_amout, 4},
    {field_amout, 5},
  [62] =
    {field_amout, 2},
    {field_amout, 3},
    {field_amout, 5},
    {field_amout, 6},
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
  [5] = 5,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
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
  [70] = 20,
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
  [96] = 82,
  [97] = 82,
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
  [118] = 115,
  [119] = 115,
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
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 20,
  [278] = 278,
  [279] = 155,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(952);
      ADVANCE_MAP(
        '"', 1,
        '#', 954,
        '$', 942,
        '+', 941,
        '-', 21,
        '=', 1035,
        '[', 1032,
        '\\', 1089,
        ']', 1033,
        'a', 157,
        'b', 79,
        'c', 283,
        'd', 250,
        'e', 537,
        'f', 477,
        'g', 81,
        'h', 1216,
        'i', 38,
        'k', 445,
        'l', 82,
        'm', 92,
        'n', 251,
        'o', 350,
        'p', 97,
        'r', 290,
        's', 182,
        't', 85,
        'u', 549,
        'v', 1215,
        'w', 408,
        'x', 1059,
        'y', 292,
        '{', 1074,
        '}', 1075,
        0x2192, 1018,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(947);
      if (lookahead == '"') ADVANCE(1071);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 953,
        '$', 942,
        '\\', 1089,
        'b', 663,
        'd', 346,
        'e', 923,
        'f', 519,
        'g', 80,
        'h', 285,
        'k', 445,
        'l', 83,
        'm', 605,
        'n', 636,
        'o', 898,
        'p', 673,
        'r', 290,
        's', 689,
        'u', 666,
        'w', 433,
        '+', 941,
        '-', 941,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 953,
        '[', 1032,
        'a', 476,
        'd', 595,
        'l', 298,
        'm', 647,
        'o', 898,
        'p', 96,
        'r', 406,
        's', 672,
        't', 84,
        'u', 666,
        'w', 664,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1071);
      if (lookahead != 0) ADVANCE(947);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1086);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1087);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1073);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1088);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 11,
        '#', 1028,
        '$', 942,
        '-', 29,
        '[', 1032,
        '\\', 1089,
        'a', 156,
        'b', 603,
        'c', 652,
        'd', 346,
        'e', 923,
        'f', 519,
        'g', 81,
        'h', 604,
        'i', 377,
        'k', 445,
        'l', 82,
        'm', 599,
        'n', 639,
        'o', 898,
        'p', 640,
        'r', 290,
        's', 183,
        't', 600,
        'u', 667,
        'v', 295,
        'w', 456,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(942);
      if (lookahead == '-') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(942);
      if (lookahead == '=') ADVANCE(1035);
      if (lookahead == ']') ADVANCE(1033);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1034);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '$', 942,
        '[', 1032,
        '\\', 1089,
        'a', 476,
        'b', 607,
        'c', 862,
        'd', 346,
        'e', 923,
        'f', 518,
        'g', 80,
        'h', 1217,
        'i', 585,
        'k', 445,
        'l', 83,
        'm', 417,
        'n', 601,
        'o', 864,
        'p', 98,
        'r', 290,
        's', 334,
        't', 602,
        'u', 666,
        'v', 1215,
        'w', 664,
        'y', 292,
        '+', 941,
        '-', 941,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 17:
      if (lookahead == '$') ADVANCE(944);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0) ADVANCE(948);
      END_STATE();
    case 18:
      if (lookahead == '$') ADVANCE(944);
      if (lookahead == 'n') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(897);
      if (lookahead == 0x2192) ADVANCE(1019);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(948);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(944);
      if (lookahead == 'n') ADVANCE(863);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(948);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(944);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(948);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(848);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(782);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0) ADVANCE(948);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(918);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(1027);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(1006);
      END_STATE();
    case 38:
      if (lookahead == '3') ADVANCE(910);
      if (lookahead == 'd') ADVANCE(1193);
      if (lookahead == 'g') ADVANCE(583);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(168);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(170);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(357);
      if (lookahead != 0) ADVANCE(1029);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(913);
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(913);
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(354);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(529);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(917);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(402);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == 'g') ADVANCE(720);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(225);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(523);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(389);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(238);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(736);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(836);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(783);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(358);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(531);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(642);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(878);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(131);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(533);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(793);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(167);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(655);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(919);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(367);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(928);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(928);
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(1200);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(903);
      if (lookahead == 'f') ADVANCE(800);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(994);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 's') ADVANCE(992);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(762);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(924);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(671);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead == 'l') ADVANCE(866);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(922);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(932);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(930);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(885);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 's') ADVANCE(860);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(851);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(712);
      END_STATE();
    case 117:
      ADVANCE_MAP(
        'a', 476,
        'd', 347,
        'l', 298,
        'm', 647,
        'o', 898,
        'p', 96,
        'r', 406,
        's', 672,
        't', 86,
        'u', 666,
        'w', 664,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(117);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(699);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(741);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(846);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(735);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(933);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(884);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(889);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(856);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(892);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(857);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 's') ADVANCE(775);
      if (lookahead == 'u') ADVANCE(827);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 'w') ADVANCE(404);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == 'w') ADVANCE(404);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(293);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(493);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(309);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(498);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'g') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(659);
      if (lookahead == 'f') ADVANCE(516);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(659);
      if (lookahead == 'f') ADVANCE(516);
      if (lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(661);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(662);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(464);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(868);
      if (lookahead == 'n') ADVANCE(799);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(1013);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(1012);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(742);
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead == 'h') ADVANCE(610);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(742);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'h') ADVANCE(715);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == 'w') ADVANCE(111);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 's') ADVANCE(929);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(837);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(838);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(931);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(728);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(888);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(744);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(871);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(747);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(874);
      if (lookahead == 'n') ADVANCE(799);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(875);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(510);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1194);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(1050);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1007);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1009);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(1011);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(1197);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(1014);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(781);
      if (lookahead == 'v') ADVANCE(255);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(789);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(825);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(887);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == 'x') ADVANCE(429);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(790);
      if (lookahead == 'v') ADVANCE(255);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(255);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(255);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(722);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(627);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(795);
      if (lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead == 'o') ADVANCE(983);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1070);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1196);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(990);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == 'p') ADVANCE(718);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(1221);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1171);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1209);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1222);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1053);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1063);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(1219);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(1004);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(1058);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(1069);
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(1166);
      if (lookahead == 'u') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(757);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(902);
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == 'p') ADVANCE(873);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead == 'h') ADVANCE(609);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(109);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == 'w') ADVANCE(111);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'i') ADVANCE(795);
      if (lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(958);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(348);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(957);
      if (lookahead == 'r') ADVANCE(1176);
      if (lookahead == 'u') ADVANCE(822);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(800);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(615);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(900);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(641);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead == 'w') ADVANCE(719);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(451);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(724);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(645);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 360:
      if (lookahead == 'f') ADVANCE(653);
      END_STATE();
    case 361:
      if (lookahead == 'f') ADVANCE(453);
      END_STATE();
    case 362:
      if (lookahead == 'f') ADVANCE(650);
      END_STATE();
    case 363:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 364:
      if (lookahead == 'f') ADVANCE(454);
      END_STATE();
    case 365:
      if (lookahead == 'f') ADVANCE(651);
      END_STATE();
    case 366:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 367:
      if (lookahead == 'f') ADVANCE(901);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(1208);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(1049);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(976);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(1003);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(995);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(1207);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(386);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(966);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(583);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(540);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(720);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(543);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 382:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 383:
      if (lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 384:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 386:
      if (lookahead == 'g') ADVANCE(495);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(500);
      END_STATE();
    case 388:
      if (lookahead == 'g') ADVANCE(387);
      END_STATE();
    case 389:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(339);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 393:
      if (lookahead == 'h') ADVANCE(1037);
      END_STATE();
    case 394:
      if (lookahead == 'h') ADVANCE(1037);
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 395:
      if (lookahead == 'h') ADVANCE(1192);
      END_STATE();
    case 396:
      if (lookahead == 'h') ADVANCE(1174);
      END_STATE();
    case 397:
      if (lookahead == 'h') ADVANCE(1177);
      END_STATE();
    case 398:
      if (lookahead == 'h') ADVANCE(1187);
      END_STATE();
    case 399:
      if (lookahead == 'h') ADVANCE(993);
      END_STATE();
    case 400:
      if (lookahead == 'h') ADVANCE(802);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(805);
      END_STATE();
    case 402:
      if (lookahead == 'h') ADVANCE(452);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 404:
      if (lookahead == 'h') ADVANCE(646);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(632);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(934);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(924);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(670);
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(935);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(905);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(835);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(804);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(758);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(853);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(904);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(936);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(937);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(579);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(758);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 464:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 465:
      if (lookahead == 'k') ADVANCE(1195);
      END_STATE();
    case 466:
      if (lookahead == 'k') ADVANCE(1173);
      END_STATE();
    case 467:
      if (lookahead == 'k') ADVANCE(925);
      END_STATE();
    case 468:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 469:
      if (lookahead == 'k') ADVANCE(776);
      END_STATE();
    case 470:
      if (lookahead == 'k') ADVANCE(766);
      END_STATE();
    case 471:
      if (lookahead == 'k') ADVANCE(379);
      END_STATE();
    case 472:
      if (lookahead == 'k') ADVANCE(76);
      END_STATE();
    case 473:
      if (lookahead == 'k') ADVANCE(323);
      END_STATE();
    case 474:
      if (lookahead == 'k') ADVANCE(425);
      END_STATE();
    case 475:
      if (lookahead == 'k') ADVANCE(796);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(974);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(1169);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(1043);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(1042);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(965);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(964);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(886);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(780);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(811);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(840);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(842);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(792);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(794);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(511);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(968);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(1060);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(883);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(654);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 536:
      if (lookahead == 'm') ADVANCE(899);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(287);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(1084);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(1017);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(1203);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(1206);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(1044);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(1002);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(1051);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(1000);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(984);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == 'p') ADVANCE(1083);
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(682);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(809);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(810);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(638);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(817);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(858);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(1052);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(1199);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(906);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(911);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(911);
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(872);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(891);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(908);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(916);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(909);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(877);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(778);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(876);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(894);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(752);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(754);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(758);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 666:
      if (lookahead == 'p') ADVANCE(1083);
      END_STATE();
    case 667:
      if (lookahead == 'p') ADVANCE(1083);
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 668:
      if (lookahead == 'p') ADVANCE(1190);
      END_STATE();
    case 669:
      if (lookahead == 'p') ADVANCE(1189);
      END_STATE();
    case 670:
      if (lookahead == 'p') ADVANCE(865);
      END_STATE();
    case 671:
      if (lookahead == 'p') ADVANCE(865);
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 675:
      if (lookahead == 'p') ADVANCE(761);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 677:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 678:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 679:
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 680:
      if (lookahead == 'p') ADVANCE(496);
      END_STATE();
    case 681:
      if (lookahead == 'p') ADVANCE(770);
      END_STATE();
    case 682:
      if (lookahead == 'p') ADVANCE(718);
      END_STATE();
    case 683:
      if (lookahead == 'p') ADVANCE(873);
      END_STATE();
    case 684:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 685:
      if (lookahead == 'p') ADVANCE(879);
      END_STATE();
    case 686:
      if (lookahead == 'p') ADVANCE(880);
      END_STATE();
    case 687:
      if (lookahead == 'p') ADVANCE(435);
      END_STATE();
    case 688:
      if (lookahead == 'p') ADVANCE(436);
      END_STATE();
    case 689:
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == 'w') ADVANCE(111);
      END_STATE();
    case 690:
      if (lookahead == 'p') ADVANCE(688);
      END_STATE();
    case 691:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(1041);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(1045);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(1020);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(979);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(1191);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(977);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(1040);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(1202);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(1056);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(1066);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(1039);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(803);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(812);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(845);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(830);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 737:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 759:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 760:
      if (lookahead == 's') ADVANCE(981);
      END_STATE();
    case 761:
      if (lookahead == 's') ADVANCE(961);
      END_STATE();
    case 762:
      if (lookahead == 's') ADVANCE(970);
      END_STATE();
    case 763:
      if (lookahead == 's') ADVANCE(989);
      END_STATE();
    case 764:
      if (lookahead == 's') ADVANCE(971);
      END_STATE();
    case 765:
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 766:
      if (lookahead == 's') ADVANCE(980);
      END_STATE();
    case 767:
      if (lookahead == 's') ADVANCE(960);
      END_STATE();
    case 768:
      if (lookahead == 's') ADVANCE(1016);
      END_STATE();
    case 769:
      if (lookahead == 's') ADVANCE(956);
      END_STATE();
    case 770:
      if (lookahead == 's') ADVANCE(1038);
      END_STATE();
    case 771:
      if (lookahead == 's') ADVANCE(1036);
      END_STATE();
    case 772:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 773:
      if (lookahead == 's') ADVANCE(988);
      END_STATE();
    case 774:
      if (lookahead == 's') ADVANCE(775);
      END_STATE();
    case 775:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 776:
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 777:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 783:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 784:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 786:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 787:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 788:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 789:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 790:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 791:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 792:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 793:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 794:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 795:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 796:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(1081);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(973);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(1067);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(967);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(969);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(985);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(1212);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(1175);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(1022);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(1218);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(987);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(975);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(1048);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(1170);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(1005);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(1183);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(1046);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(991);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(972);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(1211);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(1047);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(986);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 828:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 832:
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(867);
      END_STATE();
    case 846:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 847:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 862:
      if (lookahead == 'u') ADVANCE(757);
      END_STATE();
    case 863:
      if (lookahead == 'u') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 864:
      if (lookahead == 'u') ADVANCE(822);
      END_STATE();
    case 865:
      if (lookahead == 'u') ADVANCE(674);
      END_STATE();
    case 866:
      if (lookahead == 'u') ADVANCE(762);
      END_STATE();
    case 867:
      if (lookahead == 'u') ADVANCE(676);
      END_STATE();
    case 868:
      if (lookahead == 'u') ADVANCE(763);
      END_STATE();
    case 869:
      if (lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 870:
      if (lookahead == 'u') ADVANCE(764);
      END_STATE();
    case 871:
      if (lookahead == 'u') ADVANCE(765);
      END_STATE();
    case 872:
      if (lookahead == 'u') ADVANCE(806);
      END_STATE();
    case 873:
      if (lookahead == 'u') ADVANCE(807);
      END_STATE();
    case 874:
      if (lookahead == 'u') ADVANCE(772);
      END_STATE();
    case 875:
      if (lookahead == 'u') ADVANCE(773);
      END_STATE();
    case 876:
      if (lookahead == 'u') ADVANCE(833);
      END_STATE();
    case 877:
      if (lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 878:
      if (lookahead == 'u') ADVANCE(745);
      END_STATE();
    case 879:
      if (lookahead == 'u') ADVANCE(814);
      END_STATE();
    case 880:
      if (lookahead == 'u') ADVANCE(815);
      END_STATE();
    case 881:
      if (lookahead == 'u') ADVANCE(816);
      END_STATE();
    case 882:
      if (lookahead == 'u') ADVANCE(843);
      END_STATE();
    case 883:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 884:
      if (lookahead == 'u') ADVANCE(502);
      END_STATE();
    case 885:
      if (lookahead == 'u') ADVANCE(841);
      END_STATE();
    case 886:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 887:
      if (lookahead == 'u') ADVANCE(748);
      END_STATE();
    case 888:
      if (lookahead == 'u') ADVANCE(786);
      END_STATE();
    case 889:
      if (lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 890:
      if (lookahead == 'u') ADVANCE(844);
      END_STATE();
    case 891:
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 892:
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 893:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 894:
      if (lookahead == 'u') ADVANCE(788);
      END_STATE();
    case 895:
      if (lookahead == 'u') ADVANCE(854);
      END_STATE();
    case 896:
      if (lookahead == 'u') ADVANCE(859);
      END_STATE();
    case 897:
      if (lookahead == 'u') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 898:
      if (lookahead == 'u') ADVANCE(861);
      END_STATE();
    case 899:
      if (lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 900:
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 901:
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 902:
      if (lookahead == 'v') ADVANCE(1182);
      END_STATE();
    case 903:
      if (lookahead == 'v') ADVANCE(289);
      END_STATE();
    case 904:
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 905:
      if (lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 906:
      if (lookahead == 'w') ADVANCE(1172);
      END_STATE();
    case 907:
      if (lookahead == 'w') ADVANCE(1198);
      END_STATE();
    case 908:
      if (lookahead == 'w') ADVANCE(1031);
      END_STATE();
    case 909:
      if (lookahead == 'w') ADVANCE(1065);
      END_STATE();
    case 910:
      if (lookahead == 'w') ADVANCE(520);
      END_STATE();
    case 911:
      if (lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 912:
      if (lookahead == 'w') ADVANCE(539);
      END_STATE();
    case 913:
      if (lookahead == 'w') ADVANCE(449);
      END_STATE();
    case 914:
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 915:
      if (lookahead == 'w') ADVANCE(68);
      END_STATE();
    case 916:
      if (lookahead == 'w') ADVANCE(791);
      END_STATE();
    case 917:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 918:
      if (lookahead == 'w') ADVANCE(460);
      END_STATE();
    case 919:
      if (lookahead == 'w') ADVANCE(462);
      END_STATE();
    case 920:
      if (lookahead == 'x') ADVANCE(209);
      END_STATE();
    case 921:
      if (lookahead == 'x') ADVANCE(801);
      END_STATE();
    case 922:
      if (lookahead == 'x') ADVANCE(422);
      END_STATE();
    case 923:
      if (lookahead == 'x') ADVANCE(306);
      END_STATE();
    case 924:
      if (lookahead == 'x') ADVANCE(299);
      END_STATE();
    case 925:
      if (lookahead == 'y') ADVANCE(1220);
      END_STATE();
    case 926:
      if (lookahead == 'y') ADVANCE(1024);
      END_STATE();
    case 927:
      if (lookahead == 'y') ADVANCE(1025);
      END_STATE();
    case 928:
      if (lookahead == 'y') ADVANCE(613);
      END_STATE();
    case 929:
      if (lookahead == 'y') ADVANCE(522);
      END_STATE();
    case 930:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 931:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 932:
      if (lookahead == 'y') ADVANCE(768);
      END_STATE();
    case 933:
      if (lookahead == 'y') ADVANCE(649);
      END_STATE();
    case 934:
      if (lookahead == 'z') ADVANCE(648);
      END_STATE();
    case 935:
      if (lookahead == 'z') ADVANCE(263);
      END_STATE();
    case 936:
      if (lookahead == 'z') ADVANCE(275);
      END_STATE();
    case 937:
      if (lookahead == 'z') ADVANCE(276);
      END_STATE();
    case 938:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(938);
      if (lookahead != 0) ADVANCE(950);
      END_STATE();
    case 939:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(939);
      if (lookahead != 0) ADVANCE(946);
      END_STATE();
    case 940:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(940);
      if (lookahead != 0) ADVANCE(948);
      END_STATE();
    case 941:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 942:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 943:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1078);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1076);
      END_STATE();
    case 944:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 945:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1055);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1054);
      END_STATE();
    case 946:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(949);
      END_STATE();
    case 947:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 948:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 949:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 950:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(945);
      END_STATE();
    case 951:
      if (eof) ADVANCE(952);
      ADVANCE_MAP(
        '"', 5,
        '#', 955,
        'a', 774,
        'b', 143,
        'c', 484,
        'd', 344,
        'e', 537,
        'f', 517,
        'g', 80,
        'h', 286,
        'i', 588,
        'l', 298,
        'm', 597,
        'n', 598,
        'o', 349,
        'p', 410,
        'r', 406,
        's', 332,
        't', 407,
        'u', 549,
        'w', 432,
        '}', 1075,
        '+', 941,
        '-', 941,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(951);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(953);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(955);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(954);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(955);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_smart_borders);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_inverse_outer);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_smart_gaps);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_gaps);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_outer);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_inner);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_plus);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_minus);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(357);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_current);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_swap_modifier);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_titlebar);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_show_marks);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_focus_on_window_activation);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(169);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(571);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_urgent);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_focus);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '_') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_force_display_urgency_hint);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_workspace_auto_back_and_forth);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_force_xinerama);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_focus_wrapping);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_force);
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_popup_during_fullscreen);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_leave_fullscreen);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_mouse_warping);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_focus_follows_mouse);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_ipc_DASHsocket);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_client_DOT);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_focused);
      if (lookahead == '_') ADVANCE(431);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_focused_inactive);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_unfocused);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_u2192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_primary);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_nonprimary);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_set_from_resource);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_set_resource);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1027);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_set_resource_fallback);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1028);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_no_focus);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__criteria_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1034);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_smart_no_gaps);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_pixel);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_stacking);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_tabbed);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1055);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1054);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_floating_size_op);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_DASH_DASHborder);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_DASH_DASHwhole_DASHwindow);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_DASH_DASHexclude_DASHtitlebar);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '_') ADVANCE(836);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_mode_name);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(1073);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1077);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1079);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1078);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1076);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_px_unit);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_ppt_unit);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(1073);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '_') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '_') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '_') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '_') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'b') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'b') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'c') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'c') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'f') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'f') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'h') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'h') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'i') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'k') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'k') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'm') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 's') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'v') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'x') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1077);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1079);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_resize);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_grow);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_shrink);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_back_and_forth);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_back_and_forth);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '_') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '_') ADVANCE(629);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_prev);
      if (lookahead == '_') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_prev);
      if (lookahead == '_') ADVANCE(665);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_next_on_output);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_next_on_output);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_prev_on_output);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_prev_on_output);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1168);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_swap);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_swap);
      if (lookahead == '_') ADVANCE(529);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_con_id);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_scratchpad);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_window);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == 'g') ADVANCE(386);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_absolute);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_positioncenter);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_mouse);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_mouse);
      if (lookahead == '_') ADVANCE(917);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_floating);
      if (lookahead == '_') ADVANCE(523);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == 'h') ADVANCE(1214);
      if (lookahead == 'v') ADVANCE(1213);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_splitv);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_splith);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_mode_toggle);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_sticky);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 951},
  [2] = {.lex_state = 951},
  [3] = {.lex_state = 951},
  [4] = {.lex_state = 951},
  [5] = {.lex_state = 951},
  [6] = {.lex_state = 951},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 951},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 951},
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
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 117},
  [49] = {.lex_state = 117},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 951},
  [58] = {.lex_state = 951},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 951},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 951},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 951},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 117},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 951},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 951},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 951},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 33},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 951},
  [142] = {.lex_state = 938},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 939},
  [153] = {.lex_state = 951},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 951},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 940},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 940},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
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
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 951},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
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
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 940},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 940},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 940},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 940},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 940},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
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
    [anon_sym_resize] = ACTIONS(1),
    [anon_sym_grow] = ACTIONS(1),
    [anon_sym_shrink] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
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
    [sym__statement] = STATE(2),
    [sym_smart_borders] = STATE(155),
    [sym_smart_gaps] = STATE(155),
    [sym_gaps] = STATE(155),
    [sym_tiling_drag] = STATE(155),
    [sym_show_marks] = STATE(155),
    [sym_focus_on_window_activation] = STATE(155),
    [sym_force_display_urgency_hint] = STATE(155),
    [sym_workspace_auto_back_and_forth] = STATE(155),
    [sym_force_xinerama] = STATE(155),
    [sym_focus_wrapping] = STATE(155),
    [sym_popup_during_fullscreen] = STATE(155),
    [sym_mouse_warping] = STATE(155),
    [sym_focus_follows_mouse] = STATE(155),
    [sym_ipc_socket] = STATE(155),
    [sym_client] = STATE(155),
    [sym_exec] = STATE(155),
    [sym_exec_always] = STATE(155),
    [sym_assign] = STATE(155),
    [sym__definition] = STATE(155),
    [sym_set_from_resource] = STATE(155),
    [sym_set] = STATE(155),
    [sym_no_focus] = STATE(155),
    [sym_for_window] = STATE(155),
    [sym_hide_edge_borders] = STATE(155),
    [sym_border] = STATE(155),
    [sym_title_align] = STATE(155),
    [sym_workspace_layout] = STATE(155),
    [sym_default_orientation] = STATE(155),
    [sym_include] = STATE(155),
    [sym_floating_modifier] = STATE(155),
    [sym_floating_size] = STATE(155),
    [sym_binding] = STATE(155),
    [sym_font] = STATE(155),
    [sym_mode] = STATE(155),
    [sym_workspace] = STATE(155),
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
    [sym_smart_borders] = STATE(155),
    [sym_smart_gaps] = STATE(155),
    [sym_gaps] = STATE(155),
    [sym_tiling_drag] = STATE(155),
    [sym_show_marks] = STATE(155),
    [sym_focus_on_window_activation] = STATE(155),
    [sym_force_display_urgency_hint] = STATE(155),
    [sym_workspace_auto_back_and_forth] = STATE(155),
    [sym_force_xinerama] = STATE(155),
    [sym_focus_wrapping] = STATE(155),
    [sym_popup_during_fullscreen] = STATE(155),
    [sym_mouse_warping] = STATE(155),
    [sym_focus_follows_mouse] = STATE(155),
    [sym_ipc_socket] = STATE(155),
    [sym_client] = STATE(155),
    [sym_exec] = STATE(155),
    [sym_exec_always] = STATE(155),
    [sym_assign] = STATE(155),
    [sym__definition] = STATE(155),
    [sym_set_from_resource] = STATE(155),
    [sym_set] = STATE(155),
    [sym_no_focus] = STATE(155),
    [sym_for_window] = STATE(155),
    [sym_hide_edge_borders] = STATE(155),
    [sym_border] = STATE(155),
    [sym_title_align] = STATE(155),
    [sym_workspace_layout] = STATE(155),
    [sym_default_orientation] = STATE(155),
    [sym_include] = STATE(155),
    [sym_floating_modifier] = STATE(155),
    [sym_floating_size] = STATE(155),
    [sym_binding] = STATE(155),
    [sym_font] = STATE(155),
    [sym_mode] = STATE(155),
    [sym_workspace] = STATE(155),
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
    [sym_smart_borders] = STATE(155),
    [sym_smart_gaps] = STATE(155),
    [sym_gaps] = STATE(155),
    [sym_tiling_drag] = STATE(155),
    [sym_show_marks] = STATE(155),
    [sym_focus_on_window_activation] = STATE(155),
    [sym_force_display_urgency_hint] = STATE(155),
    [sym_workspace_auto_back_and_forth] = STATE(155),
    [sym_force_xinerama] = STATE(155),
    [sym_focus_wrapping] = STATE(155),
    [sym_popup_during_fullscreen] = STATE(155),
    [sym_mouse_warping] = STATE(155),
    [sym_focus_follows_mouse] = STATE(155),
    [sym_ipc_socket] = STATE(155),
    [sym_client] = STATE(155),
    [sym_exec] = STATE(155),
    [sym_exec_always] = STATE(155),
    [sym_assign] = STATE(155),
    [sym__definition] = STATE(155),
    [sym_set_from_resource] = STATE(155),
    [sym_set] = STATE(155),
    [sym_no_focus] = STATE(155),
    [sym_for_window] = STATE(155),
    [sym_hide_edge_borders] = STATE(155),
    [sym_border] = STATE(155),
    [sym_title_align] = STATE(155),
    [sym_workspace_layout] = STATE(155),
    [sym_default_orientation] = STATE(155),
    [sym_include] = STATE(155),
    [sym_floating_modifier] = STATE(155),
    [sym_floating_size] = STATE(155),
    [sym_binding] = STATE(155),
    [sym_font] = STATE(155),
    [sym_mode] = STATE(155),
    [sym_workspace] = STATE(155),
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
    [sym__statement] = STATE(5),
    [sym_smart_borders] = STATE(279),
    [sym_smart_gaps] = STATE(279),
    [sym_gaps] = STATE(279),
    [sym_tiling_drag] = STATE(279),
    [sym_show_marks] = STATE(279),
    [sym_focus_on_window_activation] = STATE(279),
    [sym_force_display_urgency_hint] = STATE(279),
    [sym_workspace_auto_back_and_forth] = STATE(279),
    [sym_force_xinerama] = STATE(279),
    [sym_focus_wrapping] = STATE(279),
    [sym_popup_during_fullscreen] = STATE(279),
    [sym_mouse_warping] = STATE(279),
    [sym_focus_follows_mouse] = STATE(279),
    [sym_ipc_socket] = STATE(279),
    [sym_client] = STATE(279),
    [sym_exec] = STATE(279),
    [sym_exec_always] = STATE(279),
    [sym_assign] = STATE(279),
    [sym__definition] = STATE(279),
    [sym_set_from_resource] = STATE(279),
    [sym_set] = STATE(279),
    [sym_no_focus] = STATE(279),
    [sym_for_window] = STATE(279),
    [sym_hide_edge_borders] = STATE(279),
    [sym_border] = STATE(279),
    [sym_title_align] = STATE(279),
    [sym_workspace_layout] = STATE(279),
    [sym_default_orientation] = STATE(279),
    [sym_include] = STATE(279),
    [sym_floating_modifier] = STATE(279),
    [sym_floating_size] = STATE(279),
    [sym_binding] = STATE(279),
    [sym_font] = STATE(279),
    [sym_mode] = STATE(279),
    [sym_workspace] = STATE(279),
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
    [anon_sym_RBRACE] = ACTIONS(186),
  },
  [5] = {
    [sym__statement] = STATE(6),
    [sym_smart_borders] = STATE(279),
    [sym_smart_gaps] = STATE(279),
    [sym_gaps] = STATE(279),
    [sym_tiling_drag] = STATE(279),
    [sym_show_marks] = STATE(279),
    [sym_focus_on_window_activation] = STATE(279),
    [sym_force_display_urgency_hint] = STATE(279),
    [sym_workspace_auto_back_and_forth] = STATE(279),
    [sym_force_xinerama] = STATE(279),
    [sym_focus_wrapping] = STATE(279),
    [sym_popup_during_fullscreen] = STATE(279),
    [sym_mouse_warping] = STATE(279),
    [sym_focus_follows_mouse] = STATE(279),
    [sym_ipc_socket] = STATE(279),
    [sym_client] = STATE(279),
    [sym_exec] = STATE(279),
    [sym_exec_always] = STATE(279),
    [sym_assign] = STATE(279),
    [sym__definition] = STATE(279),
    [sym_set_from_resource] = STATE(279),
    [sym_set] = STATE(279),
    [sym_no_focus] = STATE(279),
    [sym_for_window] = STATE(279),
    [sym_hide_edge_borders] = STATE(279),
    [sym_border] = STATE(279),
    [sym_title_align] = STATE(279),
    [sym_workspace_layout] = STATE(279),
    [sym_default_orientation] = STATE(279),
    [sym_include] = STATE(279),
    [sym_floating_modifier] = STATE(279),
    [sym_floating_size] = STATE(279),
    [sym_binding] = STATE(279),
    [sym_font] = STATE(279),
    [sym_mode] = STATE(279),
    [sym_workspace] = STATE(279),
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
    [anon_sym_RBRACE] = ACTIONS(188),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym_smart_borders] = STATE(279),
    [sym_smart_gaps] = STATE(279),
    [sym_gaps] = STATE(279),
    [sym_tiling_drag] = STATE(279),
    [sym_show_marks] = STATE(279),
    [sym_focus_on_window_activation] = STATE(279),
    [sym_force_display_urgency_hint] = STATE(279),
    [sym_workspace_auto_back_and_forth] = STATE(279),
    [sym_force_xinerama] = STATE(279),
    [sym_focus_wrapping] = STATE(279),
    [sym_popup_during_fullscreen] = STATE(279),
    [sym_mouse_warping] = STATE(279),
    [sym_focus_follows_mouse] = STATE(279),
    [sym_ipc_socket] = STATE(279),
    [sym_client] = STATE(279),
    [sym_exec] = STATE(279),
    [sym_exec_always] = STATE(279),
    [sym_assign] = STATE(279),
    [sym__definition] = STATE(279),
    [sym_set_from_resource] = STATE(279),
    [sym_set] = STATE(279),
    [sym_no_focus] = STATE(279),
    [sym_for_window] = STATE(279),
    [sym_hide_edge_borders] = STATE(279),
    [sym_border] = STATE(279),
    [sym_title_align] = STATE(279),
    [sym_workspace_layout] = STATE(279),
    [sym_default_orientation] = STATE(279),
    [sym_include] = STATE(279),
    [sym_floating_modifier] = STATE(279),
    [sym_floating_size] = STATE(279),
    [sym_binding] = STATE(279),
    [sym_font] = STATE(279),
    [sym_mode] = STATE(279),
    [sym_workspace] = STATE(279),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(190),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(193), 1,
      anon_sym_focus,
    ACTIONS(195), 1,
      anon_sym_workspace,
    ACTIONS(197), 1,
      anon_sym_exec,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_mode,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 1,
      anon_sym_resize,
    ACTIONS(213), 1,
      anon_sym_swap,
    ACTIONS(215), 1,
      anon_sym_move,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_sticky,
    STATE(146), 1,
      sym_unit,
    STATE(147), 1,
      sym__value,
    ACTIONS(205), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(217), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [85] = 23,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(193), 1,
      anon_sym_focus,
    ACTIONS(195), 1,
      anon_sym_workspace,
    ACTIONS(197), 1,
      anon_sym_exec,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_mode,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 1,
      anon_sym_resize,
    ACTIONS(213), 1,
      anon_sym_swap,
    ACTIONS(215), 1,
      anon_sym_move,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_sticky,
    STATE(12), 1,
      aux_sym_binding_repeat2,
    STATE(17), 1,
      sym_criteria,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(205), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(217), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [172] = 2,
    ACTIONS(227), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(225), 38,
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
  [217] = 23,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(193), 1,
      anon_sym_focus,
    ACTIONS(195), 1,
      anon_sym_workspace,
    ACTIONS(197), 1,
      anon_sym_exec,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_mode,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 1,
      anon_sym_resize,
    ACTIONS(213), 1,
      anon_sym_swap,
    ACTIONS(215), 1,
      anon_sym_move,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_sticky,
    STATE(15), 1,
      aux_sym_binding_repeat2,
    STATE(18), 1,
      sym_criteria,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(205), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(217), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [304] = 2,
    ACTIONS(227), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(225), 38,
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
  [349] = 22,
    ACTIONS(27), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(229), 1,
      aux_sym__statement_token1,
    ACTIONS(231), 1,
      anon_sym_gaps,
    ACTIONS(233), 1,
      anon_sym_focus,
    ACTIONS(237), 1,
      anon_sym_mode,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_BSLASH,
    ACTIONS(247), 1,
      anon_sym_resize,
    ACTIONS(249), 1,
      anon_sym_swap,
    ACTIONS(251), 1,
      anon_sym_move,
    ACTIONS(255), 1,
      anon_sym_layout,
    ACTIONS(257), 1,
      anon_sym_split,
    ACTIONS(259), 1,
      anon_sym_sticky,
    STATE(13), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(241), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(245), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(253), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(235), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [433] = 22,
    ACTIONS(261), 1,
      aux_sym__statement_token1,
    ACTIONS(263), 1,
      anon_sym_gaps,
    ACTIONS(266), 1,
      anon_sym_focus,
    ACTIONS(269), 1,
      anon_sym_workspace,
    ACTIONS(272), 1,
      anon_sym_exec,
    ACTIONS(278), 1,
      anon_sym_mode,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_BSLASH,
    ACTIONS(293), 1,
      anon_sym_resize,
    ACTIONS(296), 1,
      anon_sym_swap,
    ACTIONS(299), 1,
      anon_sym_move,
    ACTIONS(305), 1,
      anon_sym_layout,
    ACTIONS(308), 1,
      anon_sym_split,
    ACTIONS(311), 1,
      anon_sym_sticky,
    STATE(13), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(284), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(290), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(302), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(275), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [517] = 22,
    ACTIONS(27), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(231), 1,
      anon_sym_gaps,
    ACTIONS(233), 1,
      anon_sym_focus,
    ACTIONS(237), 1,
      anon_sym_mode,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_BSLASH,
    ACTIONS(247), 1,
      anon_sym_resize,
    ACTIONS(249), 1,
      anon_sym_swap,
    ACTIONS(251), 1,
      anon_sym_move,
    ACTIONS(255), 1,
      anon_sym_layout,
    ACTIONS(257), 1,
      anon_sym_split,
    ACTIONS(259), 1,
      anon_sym_sticky,
    ACTIONS(314), 1,
      aux_sym__statement_token1,
    STATE(13), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(241), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(245), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(253), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(235), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [601] = 22,
    ACTIONS(27), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(231), 1,
      anon_sym_gaps,
    ACTIONS(233), 1,
      anon_sym_focus,
    ACTIONS(237), 1,
      anon_sym_mode,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_BSLASH,
    ACTIONS(247), 1,
      anon_sym_resize,
    ACTIONS(249), 1,
      anon_sym_swap,
    ACTIONS(251), 1,
      anon_sym_move,
    ACTIONS(255), 1,
      anon_sym_layout,
    ACTIONS(257), 1,
      anon_sym_split,
    ACTIONS(259), 1,
      anon_sym_sticky,
    ACTIONS(314), 1,
      aux_sym__statement_token1,
    STATE(13), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(241), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(245), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(253), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(235), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [685] = 22,
    ACTIONS(27), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      anon_sym_exec,
    ACTIONS(231), 1,
      anon_sym_gaps,
    ACTIONS(233), 1,
      anon_sym_focus,
    ACTIONS(237), 1,
      anon_sym_mode,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_BSLASH,
    ACTIONS(247), 1,
      anon_sym_resize,
    ACTIONS(249), 1,
      anon_sym_swap,
    ACTIONS(251), 1,
      anon_sym_move,
    ACTIONS(255), 1,
      anon_sym_layout,
    ACTIONS(257), 1,
      anon_sym_split,
    ACTIONS(259), 1,
      anon_sym_sticky,
    ACTIONS(316), 1,
      aux_sym__statement_token1,
    STATE(13), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(241), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(245), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(253), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(235), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [769] = 21,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(193), 1,
      anon_sym_focus,
    ACTIONS(195), 1,
      anon_sym_workspace,
    ACTIONS(197), 1,
      anon_sym_exec,
    ACTIONS(201), 1,
      anon_sym_mode,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 1,
      anon_sym_resize,
    ACTIONS(213), 1,
      anon_sym_swap,
    ACTIONS(215), 1,
      anon_sym_move,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_sticky,
    STATE(14), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(205), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(217), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [850] = 21,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(193), 1,
      anon_sym_focus,
    ACTIONS(195), 1,
      anon_sym_workspace,
    ACTIONS(197), 1,
      anon_sym_exec,
    ACTIONS(201), 1,
      anon_sym_mode,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 1,
      anon_sym_resize,
    ACTIONS(213), 1,
      anon_sym_swap,
    ACTIONS(215), 1,
      anon_sym_move,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_sticky,
    STATE(16), 1,
      aux_sym_binding_repeat2,
    STATE(23), 1,
      sym__value,
    STATE(146), 1,
      sym_unit,
    ACTIONS(205), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(217), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(145), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [931] = 18,
    ACTIONS(11), 1,
      anon_sym_gaps,
    ACTIONS(193), 1,
      anon_sym_focus,
    ACTIONS(195), 1,
      anon_sym_workspace,
    ACTIONS(197), 1,
      anon_sym_exec,
    ACTIONS(211), 1,
      anon_sym_resize,
    ACTIONS(213), 1,
      anon_sym_swap,
    ACTIONS(215), 1,
      anon_sym_move,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_sticky,
    ACTIONS(318), 1,
      anon_sym_mode,
    ACTIONS(320), 1,
      sym_identifier,
    STATE(183), 1,
      sym_unit,
    ACTIONS(205), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(217), 2,
      anon_sym_fullscreen,
      anon_sym_floating,
    ACTIONS(322), 2,
      anon_sym_kill,
      anon_sym_restart,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(182), 13,
      sym_gaps,
      sym_exec,
      sym_border,
      sym__i3_commands,
      sym_resize,
      sym_workspace,
      sym_swap,
      sym_move,
      sym_window_mode,
      sym_layout,
      sym_split,
      sym_focus,
      sym_sticky,
  [1003] = 2,
    ACTIONS(326), 1,
      anon_sym_mode,
    ACTIONS(324), 29,
      anon_sym_gaps,
      anon_sym_left,
      anon_sym_right,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_output,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      sym_identifier,
      sym_px_unit,
      sym_ppt_unit,
      anon_sym_up,
      anon_sym_down,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_parent,
      anon_sym_mode_toggle,
      anon_sym_sticky,
  [1038] = 3,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(328), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1070] = 2,
    ACTIONS(333), 1,
      aux_sym__statement_token1,
    ACTIONS(335), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1098] = 2,
    ACTIONS(337), 1,
      aux_sym__statement_token1,
    ACTIONS(339), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1126] = 2,
    ACTIONS(341), 1,
      aux_sym__statement_token1,
    ACTIONS(343), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1154] = 2,
    ACTIONS(345), 1,
      aux_sym__statement_token1,
    ACTIONS(347), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1182] = 1,
    ACTIONS(349), 23,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1208] = 2,
    ACTIONS(351), 1,
      aux_sym__statement_token1,
    ACTIONS(353), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1236] = 2,
    ACTIONS(355), 1,
      aux_sym__statement_token1,
    ACTIONS(357), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1264] = 2,
    ACTIONS(359), 1,
      aux_sym__statement_token1,
    ACTIONS(361), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1292] = 2,
    ACTIONS(363), 1,
      aux_sym__statement_token1,
    ACTIONS(365), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1320] = 2,
    ACTIONS(367), 1,
      aux_sym__statement_token1,
    ACTIONS(369), 22,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1348] = 1,
    ACTIONS(371), 23,
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
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_floating,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_sticky,
  [1374] = 13,
    ACTIONS(375), 1,
      anon_sym_workspace,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(379), 1,
      anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth,
    ACTIONS(383), 1,
      anon_sym_scratchpad,
    ACTIONS(385), 1,
      anon_sym_to,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    STATE(103), 1,
      sym__directions,
    STATE(199), 1,
      sym_move_value,
    ACTIONS(381), 2,
      anon_sym_container,
      anon_sym_window,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1422] = 11,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    ACTIONS(393), 1,
      anon_sym_workspace,
    ACTIONS(397), 1,
      anon_sym_to,
    STATE(103), 1,
      sym__directions,
    STATE(239), 1,
      sym_move_value,
    ACTIONS(395), 2,
      anon_sym_container,
      anon_sym_window,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1464] = 11,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    ACTIONS(399), 1,
      anon_sym_workspace,
    ACTIONS(401), 1,
      anon_sym_number,
    ACTIONS(403), 1,
      anon_sym_to,
    STATE(103), 1,
      sym__directions,
    STATE(262), 1,
      sym_move_value,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1505] = 11,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    ACTIONS(397), 1,
      anon_sym_to,
    ACTIONS(399), 1,
      anon_sym_workspace,
    ACTIONS(401), 1,
      anon_sym_number,
    STATE(103), 1,
      sym__directions,
    STATE(239), 1,
      sym_move_value,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1546] = 10,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    ACTIONS(397), 1,
      anon_sym_to,
    ACTIONS(399), 1,
      anon_sym_workspace,
    STATE(103), 1,
      sym__directions,
    STATE(239), 1,
      sym_move_value,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1584] = 10,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    ACTIONS(399), 1,
      anon_sym_workspace,
    ACTIONS(403), 1,
      anon_sym_to,
    STATE(103), 1,
      sym__directions,
    STATE(262), 1,
      sym_move_value,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1622] = 3,
    ACTIONS(408), 1,
      sym_number,
    STATE(39), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(405), 13,
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
  [1645] = 9,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    ACTIONS(399), 1,
      anon_sym_workspace,
    STATE(103), 1,
      sym__directions,
    STATE(239), 1,
      sym_move_value,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1680] = 9,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    ACTIONS(399), 1,
      anon_sym_workspace,
    STATE(103), 1,
      sym__directions,
    STATE(262), 1,
      sym_move_value,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1715] = 9,
    ACTIONS(410), 1,
      aux_sym__statement_token1,
    ACTIONS(414), 1,
      anon_sym_workspace,
    ACTIONS(416), 1,
      anon_sym_output,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_criteria,
    STATE(176), 1,
      sym_focus_value,
    STATE(177), 1,
      sym__focus_workspace,
    STATE(174), 3,
      sym__directions,
      sym__focus_direction,
      sym__focus_output,
    ACTIONS(412), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_parent,
      anon_sym_mode_toggle,
  [1750] = 3,
    ACTIONS(422), 1,
      sym_number,
    STATE(39), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(420), 13,
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
  [1773] = 9,
    ACTIONS(377), 1,
      anon_sym_output,
    ACTIONS(387), 1,
      anon_sym_absolute,
    ACTIONS(389), 1,
      anon_sym_positioncenter,
    ACTIONS(391), 1,
      anon_sym_position,
    ACTIONS(399), 1,
      anon_sym_workspace,
    STATE(103), 1,
      sym__directions,
    STATE(269), 1,
      sym_move_value,
    ACTIONS(373), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(200), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1808] = 2,
    STATE(43), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(420), 13,
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
  [1828] = 1,
    ACTIONS(424), 14,
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
  [1845] = 10,
    ACTIONS(426), 1,
      anon_sym_number,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(430), 1,
      sym_value,
    ACTIONS(432), 1,
      anon_sym_back_and_forth,
    ACTIONS(436), 1,
      anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth,
    STATE(135), 1,
      sym__workspace_id,
    STATE(230), 1,
      sym_workspace_value,
    STATE(233), 1,
      sym__workspace_switch,
    STATE(238), 1,
      sym__workspace_assign_output,
    ACTIONS(434), 4,
      anon_sym_next,
      anon_sym_prev,
      anon_sym_next_on_output,
      anon_sym_prev_on_output,
  [1879] = 6,
    ACTIONS(440), 1,
      anon_sym_workspace,
    ACTIONS(442), 1,
      anon_sym_output,
    STATE(177), 1,
      sym__focus_workspace,
    STATE(225), 1,
      sym_focus_value,
    STATE(174), 3,
      sym__directions,
      sym__focus_direction,
      sym__focus_output,
    ACTIONS(438), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_parent,
      anon_sym_mode_toggle,
  [1905] = 6,
    ACTIONS(446), 1,
      anon_sym_default,
    ACTIONS(448), 1,
      anon_sym_toggle,
    ACTIONS(450), 1,
      anon_sym_split,
    STATE(205), 1,
      sym_layout_value,
    STATE(52), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(444), 5,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_splitv,
      anon_sym_splith,
  [1929] = 3,
    ACTIONS(452), 1,
      aux_sym__statement_token1,
    STATE(50), 3,
      sym__output_value,
      sym__directions,
      aux_sym__focus_output_repeat1,
    ACTIONS(454), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [1946] = 3,
    ACTIONS(457), 1,
      aux_sym__statement_token1,
    STATE(50), 3,
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
  [1963] = 3,
    ACTIONS(461), 1,
      aux_sym__statement_token1,
    STATE(55), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(450), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [1979] = 5,
    ACTIONS(463), 1,
      sym_keymap_trigger,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(8), 1,
      sym_keymap,
    STATE(56), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(465), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1999] = 3,
    ACTIONS(469), 1,
      aux_sym__statement_token1,
    STATE(55), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(450), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2015] = 3,
    ACTIONS(471), 1,
      aux_sym__statement_token1,
    STATE(55), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(473), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2031] = 5,
    ACTIONS(463), 1,
      sym_keymap_trigger,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(10), 1,
      sym_keymap,
    STATE(61), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(465), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [2051] = 2,
    STATE(51), 3,
      sym__output_value,
      sym__directions,
      aux_sym__focus_output_repeat1,
    ACTIONS(476), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [2065] = 2,
    STATE(170), 2,
      sym__output_value,
      sym__directions,
    ACTIONS(478), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [2078] = 7,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_u2192,
    ACTIONS(482), 1,
      anon_sym_number,
    ACTIONS(484), 1,
      anon_sym_output,
    ACTIONS(486), 1,
      sym_value,
    STATE(221), 1,
      sym__workspace_id,
    STATE(193), 2,
      sym_assign_workspace,
      sym_assign_output,
  [2101] = 3,
    ACTIONS(450), 1,
      anon_sym_split,
    STATE(54), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(444), 5,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_splitv,
      anon_sym_splith,
  [2116] = 3,
    ACTIONS(488), 2,
      sym_keymap_trigger,
      sym_identifier,
    STATE(61), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(490), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [2131] = 5,
    ACTIONS(493), 1,
      anon_sym_off,
    ACTIONS(495), 1,
      anon_sym_swap_modifier,
    STATE(195), 1,
      sym_tiling_drag_value,
    ACTIONS(497), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
    STATE(191), 2,
      sym_tiling_drag_swap,
      sym_tiling_drag_modifier,
  [2149] = 6,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_number,
    ACTIONS(484), 1,
      anon_sym_output,
    ACTIONS(486), 1,
      sym_value,
    STATE(221), 1,
      sym__workspace_id,
    STATE(168), 2,
      sym_assign_workspace,
      sym_assign_output,
  [2169] = 3,
    ACTIONS(501), 1,
      anon_sym_focused,
    STATE(112), 1,
      sym_property,
    ACTIONS(499), 5,
      anon_sym_urgent,
      anon_sym_focused_inactive,
      anon_sym_unfocused,
      anon_sym_placeholder,
      anon_sym_background,
  [2183] = 3,
    ACTIONS(505), 1,
      anon_sym_smart,
    STATE(184), 1,
      sym_hide_edge_borders_value,
    ACTIONS(503), 5,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_none,
      anon_sym_both,
      anon_sym_smart_no_gaps,
  [2197] = 2,
    ACTIONS(507), 1,
      aux_sym__statement_token1,
    ACTIONS(509), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2209] = 3,
    STATE(140), 1,
      sym_split_value,
    ACTIONS(513), 2,
      anon_sym_v,
      anon_sym_h,
    ACTIONS(511), 3,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_toggle,
  [2222] = 5,
    ACTIONS(515), 1,
      anon_sym_set,
    STATE(186), 1,
      sym_resize_value,
    STATE(187), 1,
      sym__resize_grow_shrink,
    STATE(188), 1,
      sym__resize_set,
    ACTIONS(517), 2,
      anon_sym_grow,
      anon_sym_shrink,
  [2239] = 1,
    ACTIONS(519), 6,
      sym_keymap_trigger,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
      sym_identifier,
  [2248] = 1,
    ACTIONS(326), 5,
      anon_sym_u2192,
      anon_sym_number,
      anon_sym_output,
      sym_identifier,
      sym_value,
  [2256] = 2,
    STATE(244), 1,
      sym_popup_during_fullscreen_value,
    ACTIONS(521), 4,
      anon_sym_all,
      anon_sym_smart,
      anon_sym_ignore,
      anon_sym_leave_fullscreen,
  [2266] = 2,
    STATE(206), 1,
      sym_focus_on_window_activation_value,
    ACTIONS(523), 4,
      anon_sym_smart,
      anon_sym_urgent,
      anon_sym_focus,
      anon_sym_none,
  [2276] = 2,
    STATE(284), 1,
      sym_focus_wrapping_value,
    ACTIONS(525), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_force,
      anon_sym_workspace,
  [2286] = 2,
    STATE(240), 1,
      sym__directions,
    ACTIONS(527), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
  [2296] = 4,
    ACTIONS(529), 1,
      aux_sym__statement_token1,
    ACTIONS(531), 1,
      sym_number,
    STATE(158), 1,
      sym_unit,
    ACTIONS(241), 2,
      sym_px_unit,
      sym_ppt_unit,
  [2310] = 4,
    ACTIONS(533), 1,
      aux_sym__statement_token1,
    ACTIONS(535), 1,
      sym_number,
    ACTIONS(537), 1,
      anon_sym_mouse,
    STATE(92), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2324] = 4,
    ACTIONS(539), 1,
      aux_sym__statement_token1,
    ACTIONS(541), 1,
      sym_number,
    STATE(77), 1,
      aux_sym__resize_set_repeat1,
    ACTIONS(544), 2,
      anon_sym_width,
      anon_sym_height,
  [2338] = 4,
    ACTIONS(547), 1,
      aux_sym__statement_token1,
    ACTIONS(549), 1,
      sym_number,
    STATE(139), 1,
      sym_unit,
    ACTIONS(241), 2,
      sym_px_unit,
      sym_ppt_unit,
  [2352] = 4,
    ACTIONS(551), 1,
      aux_sym__statement_token1,
    ACTIONS(553), 1,
      sym_number,
    STATE(77), 1,
      aux_sym__resize_set_repeat1,
    ACTIONS(555), 2,
      anon_sym_width,
      anon_sym_height,
  [2366] = 2,
    STATE(253), 1,
      sym_title_align_value,
    ACTIONS(557), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [2375] = 2,
    STATE(175), 1,
      sym_smart_gaps_value,
    ACTIONS(559), 3,
      anon_sym_on,
      anon_sym_off,
      anon_sym_inverse_outer,
  [2384] = 4,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    ACTIONS(563), 1,
      aux_sym__criteria_value_token1,
    STATE(89), 1,
      aux_sym_criteria_repeat1,
    STATE(122), 1,
      sym__criteria_value,
  [2397] = 2,
    STATE(124), 1,
      sym_border_value,
    ACTIONS(565), 3,
      anon_sym_none,
      anon_sym_normal,
      anon_sym_pixel,
  [2406] = 2,
    ACTIONS(567), 1,
      aux_sym__statement_token1,
    ACTIONS(569), 3,
      sym_number,
      anon_sym_width,
      anon_sym_height,
  [2415] = 2,
    STATE(283), 1,
      sym_workspace_layout_value,
    ACTIONS(571), 3,
      anon_sym_default,
      anon_sym_stacking,
      anon_sym_tabbed,
  [2424] = 2,
    STATE(144), 1,
      sym_default_orientation_value,
    ACTIONS(573), 3,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_auto,
  [2433] = 2,
    STATE(210), 1,
      sym_sticky_value,
    ACTIONS(575), 3,
      anon_sym_toggle,
      anon_sym_enable,
      anon_sym_disable,
  [2442] = 3,
    ACTIONS(577), 1,
      aux_sym__statement_token1,
    STATE(218), 1,
      sym_unit,
    ACTIONS(241), 2,
      sym_px_unit,
      sym_ppt_unit,
  [2453] = 4,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    ACTIONS(581), 1,
      aux_sym__criteria_value_token1,
    STATE(89), 1,
      aux_sym_criteria_repeat1,
    STATE(122), 1,
      sym__criteria_value,
  [2466] = 3,
    ACTIONS(584), 1,
      sym_number,
    STATE(79), 1,
      aux_sym__resize_set_repeat1,
    ACTIONS(586), 2,
      anon_sym_width,
      anon_sym_height,
  [2477] = 4,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(588), 1,
      anon_sym_number,
    ACTIONS(590), 1,
      sym_value,
    STATE(281), 1,
      sym__workspace_id,
  [2490] = 3,
    ACTIONS(535), 1,
      sym_number,
    ACTIONS(592), 1,
      aux_sym__statement_token1,
    STATE(94), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2501] = 2,
    ACTIONS(539), 1,
      aux_sym__statement_token1,
    ACTIONS(594), 3,
      sym_number,
      anon_sym_width,
      anon_sym_height,
  [2510] = 3,
    ACTIONS(596), 1,
      aux_sym__statement_token1,
    ACTIONS(598), 1,
      sym_number,
    STATE(94), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2521] = 2,
    ACTIONS(601), 1,
      aux_sym__statement_token1,
    ACTIONS(603), 3,
      sym_number,
      anon_sym_width,
      anon_sym_height,
  [2530] = 4,
    ACTIONS(563), 1,
      aux_sym__criteria_value_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_criteria_repeat1,
    STATE(122), 1,
      sym__criteria_value,
  [2543] = 4,
    ACTIONS(563), 1,
      aux_sym__criteria_value_token1,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_criteria_repeat1,
    STATE(122), 1,
      sym__criteria_value,
  [2556] = 2,
    STATE(166), 1,
      sym_smart_borders_value,
    ACTIONS(609), 3,
      anon_sym_on,
      anon_sym_off,
      anon_sym_inverse_outer,
  [2565] = 3,
    ACTIONS(611), 1,
      aux_sym__statement_token1,
    ACTIONS(613), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_client_repeat1,
  [2575] = 2,
    ACTIONS(618), 1,
      anon_sym_EQ,
    ACTIONS(616), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [2583] = 2,
    STATE(202), 1,
      sym_show_marks_value,
    ACTIONS(620), 2,
      anon_sym_yes,
      anon_sym_no,
  [2591] = 2,
    STATE(214), 1,
      sym_workspace_auto_back_and_forth_value,
    ACTIONS(622), 2,
      anon_sym_yes,
      anon_sym_no,
  [2599] = 3,
    ACTIONS(535), 1,
      sym_number,
    ACTIONS(624), 1,
      aux_sym__statement_token1,
    STATE(247), 1,
      sym__move_amount,
  [2609] = 3,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(626), 1,
      sym_value,
    STATE(267), 1,
      sym__workspace_id,
  [2619] = 3,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(628), 1,
      sym_value,
    STATE(162), 1,
      sym__workspace_id,
  [2629] = 2,
    STATE(93), 1,
      sym_unit,
    ACTIONS(205), 2,
      sym_px_unit,
      sym_ppt_unit,
  [2637] = 1,
    ACTIONS(630), 3,
      anon_sym_id,
      anon_sym_con_id,
      anon_sym_mark,
  [2643] = 3,
    ACTIONS(632), 1,
      sym_identifier,
    ACTIONS(634), 1,
      sym_value,
    STATE(261), 1,
      sym_workspace_number,
  [2653] = 2,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(7), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
  [2661] = 3,
    ACTIONS(636), 1,
      aux_sym__criteria_value_token1,
    ACTIONS(638), 1,
      sym_identifier,
    STATE(164), 1,
      sym_floating_modifier_value,
  [2671] = 2,
    STATE(95), 1,
      sym_unit,
    ACTIONS(205), 2,
      sym_px_unit,
      sym_ppt_unit,
  [2679] = 3,
    ACTIONS(640), 1,
      aux_sym__statement_token1,
    ACTIONS(642), 1,
      sym_identifier,
    STATE(117), 1,
      aux_sym_client_repeat1,
  [2689] = 3,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(644), 1,
      sym_value,
    STATE(169), 1,
      sym__workspace_id,
  [2699] = 2,
    STATE(216), 1,
      sym_force_xinerama_value,
    ACTIONS(646), 2,
      anon_sym_yes,
      anon_sym_no,
  [2707] = 3,
    ACTIONS(563), 1,
      aux_sym__criteria_value_token1,
    STATE(82), 1,
      aux_sym_criteria_repeat1,
    STATE(122), 1,
      sym__criteria_value,
  [2717] = 2,
    STATE(250), 1,
      sym_focus_follows_mouse_value,
    ACTIONS(648), 2,
      anon_sym_yes,
      anon_sym_no,
  [2725] = 3,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(650), 1,
      aux_sym__statement_token1,
    STATE(99), 1,
      aux_sym_client_repeat1,
  [2735] = 3,
    ACTIONS(563), 1,
      aux_sym__criteria_value_token1,
    STATE(96), 1,
      aux_sym_criteria_repeat1,
    STATE(122), 1,
      sym__criteria_value,
  [2745] = 3,
    ACTIONS(563), 1,
      aux_sym__criteria_value_token1,
    STATE(97), 1,
      aux_sym_criteria_repeat1,
    STATE(122), 1,
      sym__criteria_value,
  [2755] = 2,
    ACTIONS(652), 1,
      sym_number,
    ACTIONS(654), 1,
      anon_sym_or,
  [2762] = 2,
    ACTIONS(656), 1,
      aux_sym__statement_token1,
    ACTIONS(658), 1,
      sym_identifier,
  [2769] = 1,
    ACTIONS(660), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [2774] = 2,
    ACTIONS(662), 1,
      aux_sym__statement_token1,
    ACTIONS(664), 1,
      sym_number,
  [2781] = 2,
    ACTIONS(666), 1,
      aux_sym__statement_token1,
    ACTIONS(668), 1,
      sym_number,
  [2788] = 2,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(672), 1,
      sym_number,
  [2795] = 2,
    ACTIONS(674), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(676), 1,
      sym_value,
  [2802] = 1,
    ACTIONS(678), 2,
      anon_sym_width,
      anon_sym_height,
  [2807] = 2,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(682), 1,
      sym_value,
  [2814] = 1,
    ACTIONS(684), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
  [2819] = 1,
    ACTIONS(686), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [2824] = 2,
    ACTIONS(688), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(690), 1,
      sym_value,
  [2831] = 2,
    ACTIONS(692), 1,
      aux_sym__statement_token1,
    ACTIONS(694), 1,
      anon_sym_output,
  [2838] = 2,
    ACTIONS(696), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_criteria,
  [2845] = 2,
    ACTIONS(698), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_mode_body,
  [2852] = 2,
    ACTIONS(700), 1,
      aux_sym__statement_token1,
    ACTIONS(702), 1,
      anon_sym_output,
  [2859] = 2,
    ACTIONS(704), 1,
      aux_sym__statement_token1,
    ACTIONS(706), 1,
      sym_px_unit,
  [2866] = 2,
    ACTIONS(708), 1,
      aux_sym__statement_token1,
    ACTIONS(710), 1,
      sym_identifier,
  [2873] = 2,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    STATE(208), 1,
      sym_criteria,
  [2880] = 2,
    ACTIONS(714), 1,
      aux_sym__statement_token1,
    ACTIONS(716), 1,
      sym_number,
  [2887] = 1,
    ACTIONS(718), 1,
      aux_sym__statement_token1,
  [2891] = 1,
    ACTIONS(720), 1,
      anon_sym_toggle,
  [2895] = 1,
    ACTIONS(722), 1,
      sym_include_source,
  [2899] = 1,
    ACTIONS(724), 1,
      aux_sym__statement_token1,
  [2903] = 1,
    ACTIONS(726), 1,
      aux_sym__statement_token1,
  [2907] = 1,
    ACTIONS(728), 1,
      aux_sym__statement_token1,
  [2911] = 1,
    ACTIONS(730), 1,
      aux_sym__statement_token1,
  [2915] = 1,
    ACTIONS(732), 1,
      aux_sym__statement_token1,
  [2919] = 1,
    ACTIONS(734), 1,
      sym_number,
  [2923] = 1,
    ACTIONS(736), 1,
      aux_sym__statement_token1,
  [2927] = 1,
    ACTIONS(738), 1,
      sym_number,
  [2931] = 1,
    ACTIONS(740), 1,
      aux_sym__statement_token1,
  [2935] = 1,
    ACTIONS(742), 1,
      sym_font_name,
  [2939] = 1,
    ACTIONS(744), 1,
      sym_mode_name,
  [2943] = 1,
    ACTIONS(746), 1,
      ts_builtin_sym_end,
  [2947] = 1,
    ACTIONS(748), 1,
      aux_sym__statement_token1,
  [2951] = 1,
    ACTIONS(750), 1,
      aux_sym__statement_token1,
  [2955] = 1,
    ACTIONS(752), 1,
      aux_sym__statement_token1,
  [2959] = 1,
    ACTIONS(754), 1,
      aux_sym__statement_token1,
  [2963] = 1,
    ACTIONS(756), 1,
      aux_sym__statement_token1,
  [2967] = 1,
    ACTIONS(758), 1,
      aux_sym__statement_token1,
  [2971] = 1,
    ACTIONS(760), 1,
      aux_sym__statement_token1,
  [2975] = 1,
    ACTIONS(762), 1,
      aux_sym__statement_token1,
  [2979] = 1,
    ACTIONS(764), 1,
      aux_sym__statement_token1,
  [2983] = 1,
    ACTIONS(766), 1,
      aux_sym__statement_token1,
  [2987] = 1,
    ACTIONS(768), 1,
      sym_quoted_string,
  [2991] = 1,
    ACTIONS(770), 1,
      aux_sym__statement_token1,
  [2995] = 1,
    ACTIONS(772), 1,
      sym_floating_size_op,
  [2999] = 1,
    ACTIONS(774), 1,
      aux_sym__statement_token1,
  [3003] = 1,
    ACTIONS(776), 1,
      aux_sym__statement_token1,
  [3007] = 1,
    ACTIONS(778), 1,
      aux_sym__statement_token1,
  [3011] = 1,
    ACTIONS(780), 1,
      aux_sym__statement_token1,
  [3015] = 1,
    ACTIONS(782), 1,
      aux_sym__statement_token1,
  [3019] = 1,
    ACTIONS(784), 1,
      aux_sym__statement_token1,
  [3023] = 1,
    ACTIONS(786), 1,
      aux_sym__statement_token1,
  [3027] = 1,
    ACTIONS(788), 1,
      aux_sym__statement_token1,
  [3031] = 1,
    ACTIONS(790), 1,
      aux_sym__statement_token1,
  [3035] = 1,
    ACTIONS(792), 1,
      aux_sym__statement_token1,
  [3039] = 1,
    ACTIONS(794), 1,
      aux_sym__statement_token1,
  [3043] = 1,
    ACTIONS(796), 1,
      sym_set_resource,
  [3047] = 1,
    ACTIONS(798), 1,
      sym_mode_name,
  [3051] = 1,
    ACTIONS(800), 1,
      aux_sym__statement_token1,
  [3055] = 1,
    ACTIONS(802), 1,
      aux_sym__statement_token1,
  [3059] = 1,
    ACTIONS(804), 1,
      aux_sym__statement_token1,
  [3063] = 1,
    ACTIONS(806), 1,
      aux_sym__statement_token1,
  [3067] = 1,
    ACTIONS(808), 1,
      sym_value,
  [3071] = 1,
    ACTIONS(810), 1,
      aux_sym__statement_token1,
  [3075] = 1,
    ACTIONS(812), 1,
      aux_sym__statement_token1,
  [3079] = 1,
    ACTIONS(814), 1,
      aux_sym__statement_token1,
  [3083] = 1,
    ACTIONS(816), 1,
      anon_sym_with,
  [3087] = 1,
    ACTIONS(818), 1,
      sym_value,
  [3091] = 1,
    ACTIONS(820), 1,
      aux_sym__statement_token1,
  [3095] = 1,
    ACTIONS(822), 1,
      sym_number,
  [3099] = 1,
    ACTIONS(824), 1,
      aux_sym__statement_token1,
  [3103] = 1,
    ACTIONS(826), 1,
      aux_sym__statement_token1,
  [3107] = 1,
    ACTIONS(828), 1,
      aux_sym__statement_token1,
  [3111] = 1,
    ACTIONS(830), 1,
      anon_sym_positioncenter,
  [3115] = 1,
    ACTIONS(832), 1,
      aux_sym__statement_token1,
  [3119] = 1,
    ACTIONS(834), 1,
      sym_keymap_trigger,
  [3123] = 1,
    ACTIONS(836), 1,
      aux_sym__statement_token1,
  [3127] = 1,
    ACTIONS(838), 1,
      aux_sym__statement_token1,
  [3131] = 1,
    ACTIONS(840), 1,
      aux_sym__statement_token1,
  [3135] = 1,
    ACTIONS(842), 1,
      aux_sym__statement_token1,
  [3139] = 1,
    ACTIONS(461), 1,
      aux_sym__statement_token1,
  [3143] = 1,
    ACTIONS(844), 1,
      aux_sym__statement_token1,
  [3147] = 1,
    ACTIONS(846), 1,
      aux_sym__statement_token1,
  [3151] = 1,
    ACTIONS(848), 1,
      aux_sym__statement_token1,
  [3155] = 1,
    ACTIONS(850), 1,
      aux_sym__statement_token1,
  [3159] = 1,
    ACTIONS(852), 1,
      aux_sym__statement_token1,
  [3163] = 1,
    ACTIONS(854), 1,
      aux_sym__statement_token1,
  [3167] = 1,
    ACTIONS(856), 1,
      aux_sym__statement_token1,
  [3171] = 1,
    ACTIONS(858), 1,
      anon_sym_ms,
  [3175] = 1,
    ACTIONS(860), 1,
      aux_sym__statement_token1,
  [3179] = 1,
    ACTIONS(862), 1,
      aux_sym__statement_token1,
  [3183] = 1,
    ACTIONS(864), 1,
      aux_sym__statement_token1,
  [3187] = 1,
    ACTIONS(866), 1,
      aux_sym__statement_token1,
  [3191] = 1,
    ACTIONS(868), 1,
      aux_sym__statement_token1,
  [3195] = 1,
    ACTIONS(870), 1,
      aux_sym__statement_token1,
  [3199] = 1,
    ACTIONS(872), 1,
      aux_sym__statement_token1,
  [3203] = 1,
    ACTIONS(874), 1,
      aux_sym__statement_token1,
  [3207] = 1,
    ACTIONS(876), 1,
      aux_sym__statement_token1,
  [3211] = 1,
    ACTIONS(878), 1,
      aux_sym__statement_token1,
  [3215] = 1,
    ACTIONS(880), 1,
      aux_sym__statement_token1,
  [3219] = 1,
    ACTIONS(882), 1,
      aux_sym__statement_token1,
  [3223] = 1,
    ACTIONS(884), 1,
      sym_set_resource_fallback,
  [3227] = 1,
    ACTIONS(886), 1,
      aux_sym__statement_token1,
  [3231] = 1,
    ACTIONS(888), 1,
      aux_sym__statement_token1,
  [3235] = 1,
    ACTIONS(890), 1,
      aux_sym__statement_token1,
  [3239] = 1,
    ACTIONS(892), 1,
      aux_sym__statement_token1,
  [3243] = 1,
    ACTIONS(894), 1,
      aux_sym__statement_token1,
  [3247] = 1,
    ACTIONS(896), 1,
      aux_sym__statement_token1,
  [3251] = 1,
    ACTIONS(898), 1,
      sym_identifier,
  [3255] = 1,
    ACTIONS(900), 1,
      sym_number,
  [3259] = 1,
    ACTIONS(902), 1,
      aux_sym__statement_token1,
  [3263] = 1,
    ACTIONS(904), 1,
      sym_number,
  [3267] = 1,
    ACTIONS(906), 1,
      sym_mode_name,
  [3271] = 1,
    ACTIONS(401), 1,
      anon_sym_number,
  [3275] = 1,
    ACTIONS(908), 1,
      sym_identifier,
  [3279] = 1,
    ACTIONS(902), 1,
      aux_sym__statement_token1,
  [3283] = 1,
    ACTIONS(910), 1,
      aux_sym__statement_token1,
  [3287] = 1,
    ACTIONS(912), 1,
      aux_sym__statement_token1,
  [3291] = 1,
    ACTIONS(914), 1,
      aux_sym__statement_token1,
  [3295] = 1,
    ACTIONS(916), 1,
      aux_sym__statement_token1,
  [3299] = 1,
    ACTIONS(918), 1,
      aux_sym__statement_token1,
  [3303] = 1,
    ACTIONS(920), 1,
      aux_sym__statement_token1,
  [3307] = 1,
    ACTIONS(592), 1,
      aux_sym__statement_token1,
  [3311] = 1,
    ACTIONS(922), 1,
      aux_sym__statement_token1,
  [3315] = 1,
    ACTIONS(924), 1,
      aux_sym__statement_token1,
  [3319] = 1,
    ACTIONS(926), 1,
      aux_sym__statement_token1,
  [3323] = 1,
    ACTIONS(928), 1,
      aux_sym__statement_token1,
  [3327] = 1,
    ACTIONS(930), 1,
      aux_sym__statement_token1,
  [3331] = 1,
    ACTIONS(932), 1,
      aux_sym__statement_token1,
  [3335] = 1,
    ACTIONS(934), 1,
      aux_sym__statement_token1,
  [3339] = 1,
    ACTIONS(936), 1,
      aux_sym__statement_token1,
  [3343] = 1,
    ACTIONS(938), 1,
      aux_sym__statement_token1,
  [3347] = 1,
    ACTIONS(940), 1,
      aux_sym__statement_token1,
  [3351] = 1,
    ACTIONS(942), 1,
      aux_sym__statement_token1,
  [3355] = 1,
    ACTIONS(944), 1,
      sym_px_unit,
  [3359] = 1,
    ACTIONS(946), 1,
      sym_value,
  [3363] = 1,
    ACTIONS(948), 1,
      aux_sym__statement_token1,
  [3367] = 1,
    ACTIONS(950), 1,
      aux_sym__statement_token1,
  [3371] = 1,
    ACTIONS(952), 1,
      aux_sym__statement_token1,
  [3375] = 1,
    ACTIONS(954), 1,
      aux_sym__statement_token1,
  [3379] = 1,
    ACTIONS(956), 1,
      sym_value,
  [3383] = 1,
    ACTIONS(958), 1,
      anon_sym_container,
  [3387] = 1,
    ACTIONS(960), 1,
      aux_sym__statement_token1,
  [3391] = 1,
    ACTIONS(962), 1,
      aux_sym__statement_token1,
  [3395] = 1,
    ACTIONS(964), 1,
      aux_sym__statement_token1,
  [3399] = 1,
    ACTIONS(966), 1,
      aux_sym__statement_token1,
  [3403] = 1,
    ACTIONS(968), 1,
      aux_sym__statement_token1,
  [3407] = 1,
    ACTIONS(970), 1,
      sym_ppt_unit,
  [3411] = 1,
    ACTIONS(972), 1,
      sym_number,
  [3415] = 1,
    ACTIONS(974), 1,
      aux_sym__statement_token1,
  [3419] = 1,
    ACTIONS(976), 1,
      sym_ppt_unit,
  [3423] = 1,
    ACTIONS(978), 1,
      aux_sym__statement_token1,
  [3427] = 1,
    ACTIONS(980), 1,
      aux_sym__statement_token1,
  [3431] = 1,
    ACTIONS(982), 1,
      sym_value,
  [3435] = 1,
    ACTIONS(324), 1,
      aux_sym__statement_token1,
  [3439] = 1,
    ACTIONS(984), 1,
      aux_sym__statement_token1,
  [3443] = 1,
    ACTIONS(986), 1,
      aux_sym__statement_token1,
  [3447] = 1,
    ACTIONS(988), 1,
      sym_value,
  [3451] = 1,
    ACTIONS(964), 1,
      aux_sym__statement_token1,
  [3455] = 1,
    ACTIONS(990), 1,
      sym_value,
  [3459] = 1,
    ACTIONS(992), 1,
      aux_sym__statement_token1,
  [3463] = 1,
    ACTIONS(994), 1,
      aux_sym__statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 304,
  [SMALL_STATE(12)] = 349,
  [SMALL_STATE(13)] = 433,
  [SMALL_STATE(14)] = 517,
  [SMALL_STATE(15)] = 601,
  [SMALL_STATE(16)] = 685,
  [SMALL_STATE(17)] = 769,
  [SMALL_STATE(18)] = 850,
  [SMALL_STATE(19)] = 931,
  [SMALL_STATE(20)] = 1003,
  [SMALL_STATE(21)] = 1038,
  [SMALL_STATE(22)] = 1070,
  [SMALL_STATE(23)] = 1098,
  [SMALL_STATE(24)] = 1126,
  [SMALL_STATE(25)] = 1154,
  [SMALL_STATE(26)] = 1182,
  [SMALL_STATE(27)] = 1208,
  [SMALL_STATE(28)] = 1236,
  [SMALL_STATE(29)] = 1264,
  [SMALL_STATE(30)] = 1292,
  [SMALL_STATE(31)] = 1320,
  [SMALL_STATE(32)] = 1348,
  [SMALL_STATE(33)] = 1374,
  [SMALL_STATE(34)] = 1422,
  [SMALL_STATE(35)] = 1464,
  [SMALL_STATE(36)] = 1505,
  [SMALL_STATE(37)] = 1546,
  [SMALL_STATE(38)] = 1584,
  [SMALL_STATE(39)] = 1622,
  [SMALL_STATE(40)] = 1645,
  [SMALL_STATE(41)] = 1680,
  [SMALL_STATE(42)] = 1715,
  [SMALL_STATE(43)] = 1750,
  [SMALL_STATE(44)] = 1773,
  [SMALL_STATE(45)] = 1808,
  [SMALL_STATE(46)] = 1828,
  [SMALL_STATE(47)] = 1845,
  [SMALL_STATE(48)] = 1879,
  [SMALL_STATE(49)] = 1905,
  [SMALL_STATE(50)] = 1929,
  [SMALL_STATE(51)] = 1946,
  [SMALL_STATE(52)] = 1963,
  [SMALL_STATE(53)] = 1979,
  [SMALL_STATE(54)] = 1999,
  [SMALL_STATE(55)] = 2015,
  [SMALL_STATE(56)] = 2031,
  [SMALL_STATE(57)] = 2051,
  [SMALL_STATE(58)] = 2065,
  [SMALL_STATE(59)] = 2078,
  [SMALL_STATE(60)] = 2101,
  [SMALL_STATE(61)] = 2116,
  [SMALL_STATE(62)] = 2131,
  [SMALL_STATE(63)] = 2149,
  [SMALL_STATE(64)] = 2169,
  [SMALL_STATE(65)] = 2183,
  [SMALL_STATE(66)] = 2197,
  [SMALL_STATE(67)] = 2209,
  [SMALL_STATE(68)] = 2222,
  [SMALL_STATE(69)] = 2239,
  [SMALL_STATE(70)] = 2248,
  [SMALL_STATE(71)] = 2256,
  [SMALL_STATE(72)] = 2266,
  [SMALL_STATE(73)] = 2276,
  [SMALL_STATE(74)] = 2286,
  [SMALL_STATE(75)] = 2296,
  [SMALL_STATE(76)] = 2310,
  [SMALL_STATE(77)] = 2324,
  [SMALL_STATE(78)] = 2338,
  [SMALL_STATE(79)] = 2352,
  [SMALL_STATE(80)] = 2366,
  [SMALL_STATE(81)] = 2375,
  [SMALL_STATE(82)] = 2384,
  [SMALL_STATE(83)] = 2397,
  [SMALL_STATE(84)] = 2406,
  [SMALL_STATE(85)] = 2415,
  [SMALL_STATE(86)] = 2424,
  [SMALL_STATE(87)] = 2433,
  [SMALL_STATE(88)] = 2442,
  [SMALL_STATE(89)] = 2453,
  [SMALL_STATE(90)] = 2466,
  [SMALL_STATE(91)] = 2477,
  [SMALL_STATE(92)] = 2490,
  [SMALL_STATE(93)] = 2501,
  [SMALL_STATE(94)] = 2510,
  [SMALL_STATE(95)] = 2521,
  [SMALL_STATE(96)] = 2530,
  [SMALL_STATE(97)] = 2543,
  [SMALL_STATE(98)] = 2556,
  [SMALL_STATE(99)] = 2565,
  [SMALL_STATE(100)] = 2575,
  [SMALL_STATE(101)] = 2583,
  [SMALL_STATE(102)] = 2591,
  [SMALL_STATE(103)] = 2599,
  [SMALL_STATE(104)] = 2609,
  [SMALL_STATE(105)] = 2619,
  [SMALL_STATE(106)] = 2629,
  [SMALL_STATE(107)] = 2637,
  [SMALL_STATE(108)] = 2643,
  [SMALL_STATE(109)] = 2653,
  [SMALL_STATE(110)] = 2661,
  [SMALL_STATE(111)] = 2671,
  [SMALL_STATE(112)] = 2679,
  [SMALL_STATE(113)] = 2689,
  [SMALL_STATE(114)] = 2699,
  [SMALL_STATE(115)] = 2707,
  [SMALL_STATE(116)] = 2717,
  [SMALL_STATE(117)] = 2725,
  [SMALL_STATE(118)] = 2735,
  [SMALL_STATE(119)] = 2745,
  [SMALL_STATE(120)] = 2755,
  [SMALL_STATE(121)] = 2762,
  [SMALL_STATE(122)] = 2769,
  [SMALL_STATE(123)] = 2774,
  [SMALL_STATE(124)] = 2781,
  [SMALL_STATE(125)] = 2788,
  [SMALL_STATE(126)] = 2795,
  [SMALL_STATE(127)] = 2802,
  [SMALL_STATE(128)] = 2807,
  [SMALL_STATE(129)] = 2814,
  [SMALL_STATE(130)] = 2819,
  [SMALL_STATE(131)] = 2824,
  [SMALL_STATE(132)] = 2831,
  [SMALL_STATE(133)] = 2838,
  [SMALL_STATE(134)] = 2845,
  [SMALL_STATE(135)] = 2852,
  [SMALL_STATE(136)] = 2859,
  [SMALL_STATE(137)] = 2866,
  [SMALL_STATE(138)] = 2873,
  [SMALL_STATE(139)] = 2880,
  [SMALL_STATE(140)] = 2887,
  [SMALL_STATE(141)] = 2891,
  [SMALL_STATE(142)] = 2895,
  [SMALL_STATE(143)] = 2899,
  [SMALL_STATE(144)] = 2903,
  [SMALL_STATE(145)] = 2907,
  [SMALL_STATE(146)] = 2911,
  [SMALL_STATE(147)] = 2915,
  [SMALL_STATE(148)] = 2919,
  [SMALL_STATE(149)] = 2923,
  [SMALL_STATE(150)] = 2927,
  [SMALL_STATE(151)] = 2931,
  [SMALL_STATE(152)] = 2935,
  [SMALL_STATE(153)] = 2939,
  [SMALL_STATE(154)] = 2943,
  [SMALL_STATE(155)] = 2947,
  [SMALL_STATE(156)] = 2951,
  [SMALL_STATE(157)] = 2955,
  [SMALL_STATE(158)] = 2959,
  [SMALL_STATE(159)] = 2963,
  [SMALL_STATE(160)] = 2967,
  [SMALL_STATE(161)] = 2971,
  [SMALL_STATE(162)] = 2975,
  [SMALL_STATE(163)] = 2979,
  [SMALL_STATE(164)] = 2983,
  [SMALL_STATE(165)] = 2987,
  [SMALL_STATE(166)] = 2991,
  [SMALL_STATE(167)] = 2995,
  [SMALL_STATE(168)] = 2999,
  [SMALL_STATE(169)] = 3003,
  [SMALL_STATE(170)] = 3007,
  [SMALL_STATE(171)] = 3011,
  [SMALL_STATE(172)] = 3015,
  [SMALL_STATE(173)] = 3019,
  [SMALL_STATE(174)] = 3023,
  [SMALL_STATE(175)] = 3027,
  [SMALL_STATE(176)] = 3031,
  [SMALL_STATE(177)] = 3035,
  [SMALL_STATE(178)] = 3039,
  [SMALL_STATE(179)] = 3043,
  [SMALL_STATE(180)] = 3047,
  [SMALL_STATE(181)] = 3051,
  [SMALL_STATE(182)] = 3055,
  [SMALL_STATE(183)] = 3059,
  [SMALL_STATE(184)] = 3063,
  [SMALL_STATE(185)] = 3067,
  [SMALL_STATE(186)] = 3071,
  [SMALL_STATE(187)] = 3075,
  [SMALL_STATE(188)] = 3079,
  [SMALL_STATE(189)] = 3083,
  [SMALL_STATE(190)] = 3087,
  [SMALL_STATE(191)] = 3091,
  [SMALL_STATE(192)] = 3095,
  [SMALL_STATE(193)] = 3099,
  [SMALL_STATE(194)] = 3103,
  [SMALL_STATE(195)] = 3107,
  [SMALL_STATE(196)] = 3111,
  [SMALL_STATE(197)] = 3115,
  [SMALL_STATE(198)] = 3119,
  [SMALL_STATE(199)] = 3123,
  [SMALL_STATE(200)] = 3127,
  [SMALL_STATE(201)] = 3131,
  [SMALL_STATE(202)] = 3135,
  [SMALL_STATE(203)] = 3139,
  [SMALL_STATE(204)] = 3143,
  [SMALL_STATE(205)] = 3147,
  [SMALL_STATE(206)] = 3151,
  [SMALL_STATE(207)] = 3155,
  [SMALL_STATE(208)] = 3159,
  [SMALL_STATE(209)] = 3163,
  [SMALL_STATE(210)] = 3167,
  [SMALL_STATE(211)] = 3171,
  [SMALL_STATE(212)] = 3175,
  [SMALL_STATE(213)] = 3179,
  [SMALL_STATE(214)] = 3183,
  [SMALL_STATE(215)] = 3187,
  [SMALL_STATE(216)] = 3191,
  [SMALL_STATE(217)] = 3195,
  [SMALL_STATE(218)] = 3199,
  [SMALL_STATE(219)] = 3203,
  [SMALL_STATE(220)] = 3207,
  [SMALL_STATE(221)] = 3211,
  [SMALL_STATE(222)] = 3215,
  [SMALL_STATE(223)] = 3219,
  [SMALL_STATE(224)] = 3223,
  [SMALL_STATE(225)] = 3227,
  [SMALL_STATE(226)] = 3231,
  [SMALL_STATE(227)] = 3235,
  [SMALL_STATE(228)] = 3239,
  [SMALL_STATE(229)] = 3243,
  [SMALL_STATE(230)] = 3247,
  [SMALL_STATE(231)] = 3251,
  [SMALL_STATE(232)] = 3255,
  [SMALL_STATE(233)] = 3259,
  [SMALL_STATE(234)] = 3263,
  [SMALL_STATE(235)] = 3267,
  [SMALL_STATE(236)] = 3271,
  [SMALL_STATE(237)] = 3275,
  [SMALL_STATE(238)] = 3279,
  [SMALL_STATE(239)] = 3283,
  [SMALL_STATE(240)] = 3287,
  [SMALL_STATE(241)] = 3291,
  [SMALL_STATE(242)] = 3295,
  [SMALL_STATE(243)] = 3299,
  [SMALL_STATE(244)] = 3303,
  [SMALL_STATE(245)] = 3307,
  [SMALL_STATE(246)] = 3311,
  [SMALL_STATE(247)] = 3315,
  [SMALL_STATE(248)] = 3319,
  [SMALL_STATE(249)] = 3323,
  [SMALL_STATE(250)] = 3327,
  [SMALL_STATE(251)] = 3331,
  [SMALL_STATE(252)] = 3335,
  [SMALL_STATE(253)] = 3339,
  [SMALL_STATE(254)] = 3343,
  [SMALL_STATE(255)] = 3347,
  [SMALL_STATE(256)] = 3351,
  [SMALL_STATE(257)] = 3355,
  [SMALL_STATE(258)] = 3359,
  [SMALL_STATE(259)] = 3363,
  [SMALL_STATE(260)] = 3367,
  [SMALL_STATE(261)] = 3371,
  [SMALL_STATE(262)] = 3375,
  [SMALL_STATE(263)] = 3379,
  [SMALL_STATE(264)] = 3383,
  [SMALL_STATE(265)] = 3387,
  [SMALL_STATE(266)] = 3391,
  [SMALL_STATE(267)] = 3395,
  [SMALL_STATE(268)] = 3399,
  [SMALL_STATE(269)] = 3403,
  [SMALL_STATE(270)] = 3407,
  [SMALL_STATE(271)] = 3411,
  [SMALL_STATE(272)] = 3415,
  [SMALL_STATE(273)] = 3419,
  [SMALL_STATE(274)] = 3423,
  [SMALL_STATE(275)] = 3427,
  [SMALL_STATE(276)] = 3431,
  [SMALL_STATE(277)] = 3435,
  [SMALL_STATE(278)] = 3439,
  [SMALL_STATE(279)] = 3443,
  [SMALL_STATE(280)] = 3447,
  [SMALL_STATE(281)] = 3451,
  [SMALL_STATE(282)] = 3455,
  [SMALL_STATE(283)] = 3459,
  [SMALL_STATE(284)] = 3463,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 16),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(45),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(42),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(47),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(126),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(83),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(235),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(241),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(84),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(19),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(145),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(68),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(264),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(33),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(141),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(49),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(67),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 29), SHIFT_REPEAT(87),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 28),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5, 0, 33),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 23),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_criteria, 3, 0, 23),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 27),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 27),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat2, 1, 0, 18),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 1, 0, 18),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 31),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 31),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 10),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 10),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 32),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 32),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4, 0, 19),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4, 0, 19),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gaps_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gaps_repeat1, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps_option, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__focus_output_repeat1, 2, 0, 0),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__focus_output_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_output, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_value, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_value, 2, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_layout_value_repeat1, 2, 0, 0),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_layout_value_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_mode, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_mode, 1, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_flags, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_position, 1, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__resize_set_repeat1, 2, 0, 0),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__resize_set_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__resize_set_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_amount, 1, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_amount, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resize_set, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 24),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 24), SHIFT_REPEAT(100),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_position, 2, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__resize_set_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__move_position_repeat1, 2, 0, 0),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__move_position_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__resize_set_repeat1, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__resize_set_repeat1, 3, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 22),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 2, 0, 22), SHIFT_REPEAT(121),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__criteria_value, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_directional, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 2, 0, 4),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 3, 0, 12),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 1, 0, 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 1, 0, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 1, 0, 14),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border_value, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_border_value, 1, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 2, 0, 7),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__criteria_value, 3, 0, 9),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_id, 1, 0, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__workspace_id, 1, 0, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 1, 0, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps, 3, 0, 9),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_amount, 2, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_amount, 2, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 2, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation_value, 1, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation, 2, 0, 6),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 16),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 3, 0, 17),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 8),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [746] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 19),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_borders_value, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 20),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps, 4, 0, 9),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 3, 0, 21),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_assign_output, 3, 0, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier, 2, 0, 6),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_borders, 2, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 2, 0, 11),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_output, 2, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_from_resource, 4, 0, 25),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders_value, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_gaps_value, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_value, 1, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_gaps, 2, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 2, 0, 6),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_value, 1, 0, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders, 2, 0, 6),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resize, 2, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resize_value, 1, 0, 26),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resize_value, 1, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_value, 1, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 2, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks_value, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 2, 0, 6),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_value, 1, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_mode, 2, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation_value, 1, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout, 2, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation, 2, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_value, 1, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_focus, 2, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky_value, 1, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky, 2, 0, 6),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth_value, 1, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_size, 4, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth, 2, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama_value, 1, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama, 2, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping_value, 1, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 30),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3, 0, 13),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 1, 0, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_workspace, 2, 0, 10),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_workspace, 2, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 3, 0, 9),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 15),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_value, 1, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 3, 0, 13),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace, 2, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_value, 1, 0, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 3, 0, 9),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_output, 2, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen_value, 1, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_center, 2, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen, 2, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align_value, 1, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_directional, 2, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mouse_warping, 2, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse_value, 1, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse, 2, 0, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipc_socket, 2, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align, 2, 0, 6),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout_value, 1, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_swap, 2, 0, 10),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_swap, 2, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_number, 1, 0, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_number, 1, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_workspace, 3, 0, 0),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 4, 0, 34),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_modifier, 2, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_display_urgency_hint, 3, 0, 6),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 2, 0, 11),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swap, 5, 0, 35),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 5, 0, 36),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resize_grow_shrink, 6, 0, 37),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resize_grow_shrink, 7, 0, 38),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 2, 0, 5),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 2, 0, 5),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout, 2, 0, 6),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping, 2, 0, 0),
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
