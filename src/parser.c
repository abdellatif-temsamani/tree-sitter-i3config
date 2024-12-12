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
#define STATE_COUNT 300
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 281
#define ALIAS_COUNT 0
#define TOKEN_COUNT 161
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 37

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
  anon_sym_client = 47,
  anon_sym_DOT = 48,
  anon_sym_focused = 49,
  anon_sym_focused_inactive = 50,
  anon_sym_unfocused = 51,
  anon_sym_placeholder = 52,
  anon_sym_background = 53,
  anon_sym_exec = 54,
  anon_sym_DASH_DASHno_DASHstartup_DASHid = 55,
  anon_sym_exec_always = 56,
  anon_sym_assign = 57,
  anon_sym_u2192 = 58,
  anon_sym_number = 59,
  anon_sym_output = 60,
  anon_sym_primary = 61,
  anon_sym_nonprimary = 62,
  anon_sym_set_from_resource = 63,
  sym_set_resource = 64,
  sym_set_resource_fallback = 65,
  aux_sym_set_token1 = 66,
  anon_sym_no_focus = 67,
  anon_sym_for_window = 68,
  anon_sym_LBRACK = 69,
  anon_sym_RBRACK = 70,
  aux_sym__criteria_value_token1 = 71,
  anon_sym_EQ = 72,
  anon_sym_hide_edge_borders = 73,
  anon_sym_both = 74,
  anon_sym_smart_no_gaps = 75,
  anon_sym_default_floating_border = 76,
  anon_sym_default_border = 77,
  anon_sym_border = 78,
  anon_sym_normal = 79,
  anon_sym_pixel = 80,
  anon_sym_title_align = 81,
  anon_sym_center = 82,
  anon_sym_workspace_layout = 83,
  anon_sym_default = 84,
  anon_sym_stacking = 85,
  anon_sym_tabbed = 86,
  anon_sym_default_orientation = 87,
  anon_sym_auto = 88,
  anon_sym_include = 89,
  sym_include_source = 90,
  anon_sym_floating_modifier = 91,
  anon_sym_floating_minimum_size = 92,
  anon_sym_floating_maximum_size = 93,
  sym_floating_size_op = 94,
  anon_sym_bindsym = 95,
  anon_sym_bindcode = 96,
  sym_keymap_trigger = 97,
  anon_sym_DASH_DASHrelease = 98,
  anon_sym_DASH_DASHborder = 99,
  anon_sym_DASH_DASHwhole_DASHwindow = 100,
  anon_sym_DASH_DASHexclude_DASHtitlebar = 101,
  anon_sym_font = 102,
  sym_font_name = 103,
  anon_sym_mode = 104,
  anon_sym_DQUOTE = 105,
  aux_sym_mode_name_token1 = 106,
  anon_sym_BSLASH_DQUOTE = 107,
  anon_sym_LBRACE = 108,
  anon_sym_RBRACE = 109,
  sym_identifier = 110,
  anon_sym_px = 111,
  anon_sym_ppt = 112,
  sym_number = 113,
  anon_sym_up = 114,
  anon_sym_down = 115,
  sym_quoted_string = 116,
  anon_sym_BSLASH = 117,
  sym_value = 118,
  anon_sym_kill = 119,
  anon_sym_restart = 120,
  anon_sym_resize = 121,
  anon_sym_grow = 122,
  anon_sym_shrink = 123,
  anon_sym_width = 124,
  anon_sym_height = 125,
  anon_sym_or = 126,
  anon_sym_back_and_forth = 127,
  anon_sym_next = 128,
  anon_sym_prev = 129,
  anon_sym_next_on_output = 130,
  anon_sym_prev_on_output = 131,
  anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth = 132,
  anon_sym_swap = 133,
  anon_sym_container = 134,
  anon_sym_with = 135,
  anon_sym_id = 136,
  anon_sym_con_id = 137,
  anon_sym_mark = 138,
  anon_sym_move = 139,
  anon_sym_scratchpad = 140,
  anon_sym_window = 141,
  anon_sym_to = 142,
  anon_sym_absolute = 143,
  anon_sym_positioncenter = 144,
  anon_sym_position = 145,
  anon_sym_mouse = 146,
  anon_sym_fullscreen = 147,
  anon_sym_toggle = 148,
  anon_sym_layout = 149,
  anon_sym_split = 150,
  anon_sym_splitv = 151,
  anon_sym_splith = 152,
  anon_sym_v = 153,
  anon_sym_h = 154,
  anon_sym_parent = 155,
  anon_sym_mode_toggle = 156,
  anon_sym_floating = 157,
  anon_sym_enable = 158,
  anon_sym_disable = 159,
  anon_sym_sticky = 160,
  sym_source_file = 161,
  sym__statement = 162,
  sym_smart_borders = 163,
  sym_smart_borders_value = 164,
  sym_smart_gaps = 165,
  sym_smart_gaps_value = 166,
  sym_gaps = 167,
  sym_gaps_option = 168,
  sym_tiling_drag = 169,
  sym_tiling_drag_value = 170,
  sym__tiling_drag_swap = 171,
  sym__tiling_drag_modifier = 172,
  sym_show_marks = 173,
  sym_show_marks_value = 174,
  sym_focus_on_window_activation = 175,
  sym_focus_on_window_activation_value = 176,
  sym_force_display_urgency_hint = 177,
  sym_workspace_auto_back_and_forth = 178,
  sym_workspace_auto_back_and_forth_value = 179,
  sym_force_xinerama = 180,
  sym_force_xinerama_value = 181,
  sym_focus_wrapping = 182,
  sym_focus_wrapping_value = 183,
  sym_popup_during_fullscreen = 184,
  sym_popup_during_fullscreen_value = 185,
  sym_mouse_warping = 186,
  sym_mouse_warping_value = 187,
  sym_focus_follows_mouse = 188,
  sym_focus_follows_mouse_value = 189,
  sym_ipc_socket = 190,
  sym_client = 191,
  sym_property = 192,
  sym_exec = 193,
  sym_exec_always = 194,
  sym_assign = 195,
  sym_assign_workspace = 196,
  sym_assign_output = 197,
  sym__output_value = 198,
  sym__definition = 199,
  sym_set_from_resource = 200,
  sym_set = 201,
  sym_no_focus = 202,
  sym_for_window = 203,
  sym_criteria = 204,
  sym__criteria_value = 205,
  sym_hide_edge_borders = 206,
  sym_hide_edge_borders_value = 207,
  sym_border = 208,
  sym_border_value = 209,
  sym_title_align = 210,
  sym_title_align_value = 211,
  sym_workspace_layout = 212,
  sym_workspace_layout_value = 213,
  sym_default_orientation = 214,
  sym_default_orientation_value = 215,
  sym_include = 216,
  sym_floating_modifier = 217,
  sym_floating_modifier_value = 218,
  sym_floating_size = 219,
  sym_binding = 220,
  sym_keymap = 221,
  sym_keymap_flags = 222,
  sym_font = 223,
  sym_font_size = 224,
  sym_mode = 225,
  sym_mode_name = 226,
  sym_mode_body = 227,
  sym_unit = 228,
  sym__px_unit = 229,
  sym__ppt_unit = 230,
  sym__directions = 231,
  sym__value = 232,
  sym__i3_commands = 233,
  sym_resize = 234,
  sym_resize_value = 235,
  sym__resize_grow_shrink = 236,
  sym__resize_set = 237,
  sym_workspace = 238,
  sym_workspace_value = 239,
  sym__workspace_switch = 240,
  sym__workspace_assign_output = 241,
  sym__workspace_id = 242,
  sym_swap = 243,
  sym_move = 244,
  sym_move_value = 245,
  sym__move_directional = 246,
  sym__move_center = 247,
  sym__move_position = 248,
  sym__move_output = 249,
  sym__move_workspace = 250,
  sym__move_amount = 251,
  sym_workspace_number = 252,
  sym_window_mode = 253,
  sym_layout = 254,
  sym_layout_value = 255,
  sym_layout_mode = 256,
  sym_split = 257,
  sym_split_value = 258,
  sym_focus = 259,
  sym_focus_value = 260,
  sym__focus_direction = 261,
  sym__focus_output = 262,
  sym__focus_workspace = 263,
  sym_floating = 264,
  sym_floating_value = 265,
  sym_sticky = 266,
  sym_sticky_value = 267,
  aux_sym_source_file_repeat1 = 268,
  aux_sym_gaps_repeat1 = 269,
  aux_sym_tiling_drag_value_repeat1 = 270,
  aux_sym_client_repeat1 = 271,
  aux_sym_for_window_repeat1 = 272,
  aux_sym_criteria_repeat1 = 273,
  aux_sym_binding_repeat1 = 274,
  aux_sym_binding_repeat2 = 275,
  aux_sym_mode_name_repeat1 = 276,
  aux_sym__resize_set_repeat1 = 277,
  aux_sym__move_position_repeat1 = 278,
  aux_sym_layout_value_repeat1 = 279,
  aux_sym__focus_output_repeat1 = 280,
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
  [anon_sym_client] = "client",
  [anon_sym_DOT] = ".",
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_mode_name_token1] = "mode_name_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_px] = "px",
  [anon_sym_ppt] = "ppt",
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
  [anon_sym_toggle] = "toggle",
  [anon_sym_layout] = "layout",
  [anon_sym_split] = "split",
  [anon_sym_splitv] = "splitv",
  [anon_sym_splith] = "splith",
  [anon_sym_v] = "v",
  [anon_sym_h] = "h",
  [anon_sym_parent] = "parent",
  [anon_sym_mode_toggle] = "mode_toggle",
  [anon_sym_floating] = "floating",
  [anon_sym_enable] = "enable",
  [anon_sym_disable] = "disable",
  [anon_sym_sticky] = "sticky",
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
  [sym__tiling_drag_swap] = "_tiling_drag_swap",
  [sym__tiling_drag_modifier] = "_tiling_drag_modifier",
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
  [sym_mouse_warping_value] = "mouse_warping_value",
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
  [sym_font_size] = "font_size",
  [sym_mode] = "mode",
  [sym_mode_name] = "mode_name",
  [sym_mode_body] = "mode_body",
  [sym_unit] = "unit",
  [sym__px_unit] = "_px_unit",
  [sym__ppt_unit] = "_ppt_unit",
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
  [sym_floating] = "floating",
  [sym_floating_value] = "floating_value",
  [sym_sticky] = "sticky",
  [sym_sticky_value] = "sticky_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_gaps_repeat1] = "gaps_repeat1",
  [aux_sym_tiling_drag_value_repeat1] = "tiling_drag_value_repeat1",
  [aux_sym_client_repeat1] = "client_repeat1",
  [aux_sym_for_window_repeat1] = "for_window_repeat1",
  [aux_sym_criteria_repeat1] = "criteria_repeat1",
  [aux_sym_binding_repeat1] = "binding_repeat1",
  [aux_sym_binding_repeat2] = "binding_repeat2",
  [aux_sym_mode_name_repeat1] = "mode_name_repeat1",
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
  [anon_sym_client] = anon_sym_client,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_mode_name_token1] = aux_sym_mode_name_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_px] = anon_sym_px,
  [anon_sym_ppt] = anon_sym_ppt,
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
  [anon_sym_toggle] = anon_sym_toggle,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_splitv] = anon_sym_splitv,
  [anon_sym_splith] = anon_sym_splith,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_parent] = anon_sym_parent,
  [anon_sym_mode_toggle] = anon_sym_mode_toggle,
  [anon_sym_floating] = anon_sym_floating,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_disable] = anon_sym_disable,
  [anon_sym_sticky] = anon_sym_sticky,
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
  [sym__tiling_drag_swap] = sym__tiling_drag_swap,
  [sym__tiling_drag_modifier] = sym__tiling_drag_modifier,
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
  [sym_mouse_warping_value] = sym_mouse_warping_value,
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
  [sym_font_size] = sym_font_size,
  [sym_mode] = sym_mode,
  [sym_mode_name] = sym_mode_name,
  [sym_mode_body] = sym_mode_body,
  [sym_unit] = sym_unit,
  [sym__px_unit] = sym__px_unit,
  [sym__ppt_unit] = sym__ppt_unit,
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
  [sym_floating] = sym_floating,
  [sym_floating_value] = sym_floating_value,
  [sym_sticky] = sym_sticky,
  [sym_sticky_value] = sym_sticky_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_gaps_repeat1] = aux_sym_gaps_repeat1,
  [aux_sym_tiling_drag_value_repeat1] = aux_sym_tiling_drag_value_repeat1,
  [aux_sym_client_repeat1] = aux_sym_client_repeat1,
  [aux_sym_for_window_repeat1] = aux_sym_for_window_repeat1,
  [aux_sym_criteria_repeat1] = aux_sym_criteria_repeat1,
  [aux_sym_binding_repeat1] = aux_sym_binding_repeat1,
  [aux_sym_binding_repeat2] = aux_sym_binding_repeat2,
  [aux_sym_mode_name_repeat1] = aux_sym_mode_name_repeat1,
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
  [anon_sym_client] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mode_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_px] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ppt] = {
    .visible = true,
    .named = false,
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
  [anon_sym_floating] = {
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
  [anon_sym_sticky] = {
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
  [sym__tiling_drag_swap] = {
    .visible = false,
    .named = true,
  },
  [sym__tiling_drag_modifier] = {
    .visible = false,
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
  [sym_mouse_warping_value] = {
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
  [sym_font_size] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_name] = {
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
  [sym__px_unit] = {
    .visible = false,
    .named = true,
  },
  [sym__ppt_unit] = {
    .visible = false,
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
  [sym_floating] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_value] = {
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
  [aux_sym_tiling_drag_value_repeat1] = {
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
  [aux_sym_mode_name_repeat1] = {
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
  field_amount = 1,
  field_body = 2,
  field_command = 3,
  field_definition = 4,
  field_fallback = 5,
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
  [field_amount] = "amount",
  [field_body] = "body",
  [field_command] = "command",
  [field_definition] = "definition",
  [field_fallback] = "fallback",
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
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 2},
  [14] = {.index = 14, .length = 3},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 3},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 1},
  [21] = {.index = 28, .length = 2},
  [22] = {.index = 30, .length = 3},
  [23] = {.index = 33, .length = 1},
  [24] = {.index = 34, .length = 1},
  [25] = {.index = 35, .length = 3},
  [26] = {.index = 38, .length = 6},
  [27] = {.index = 44, .length = 2},
  [28] = {.index = 46, .length = 1},
  [29] = {.index = 47, .length = 1},
  [30] = {.index = 48, .length = 3},
  [31] = {.index = 51, .length = 1},
  [32] = {.index = 52, .length = 1},
  [33] = {.index = 53, .length = 2},
  [34] = {.index = 55, .length = 1},
  [35] = {.index = 56, .length = 4},
  [36] = {.index = 60, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0, .inherited = true},
  [1] =
    {field_identifier, 0},
  [2] =
    {field_value, 1},
  [3] =
    {field_command, 1},
  [4] =
    {field_mode, 1},
  [5] =
    {field_source, 1},
  [6] =
    {field_value, 2},
  [7] =
    {field_identifier, 1},
  [8] =
    {field_identifier, 1, .inherited = true},
  [9] =
    {field_property, 2},
  [10] =
    {field_command, 2},
  [11] =
    {field_value, 0, .inherited = true},
  [12] =
    {field_definition, 1},
    {field_value, 2},
  [14] =
    {field_identifier, 2, .inherited = true},
    {field_name, 2, .inherited = true},
    {field_unit, 2, .inherited = true},
  [17] =
    {field_mode, 1},
    {field_value, 2},
  [19] =
    {field_identifier, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_unit, 0, .inherited = true},
  [22] =
    {field_body, 2},
    {field_name, 1},
  [24] =
    {field_identifier, 2, .inherited = true},
  [25] =
    {field_identifier, 3, .inherited = true},
    {field_property, 2},
  [27] =
    {field_value, 1, .inherited = true},
  [28] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [30] =
    {field_definition, 1},
    {field_fallback, 3},
    {field_resource, 2},
  [33] =
    {field_amount, 0, .inherited = true},
  [34] =
    {field_unit, 0},
  [35] =
    {field_identifier, 3, .inherited = true},
    {field_name, 3, .inherited = true},
    {field_unit, 3, .inherited = true},
  [38] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_unit, 0, .inherited = true},
    {field_unit, 1, .inherited = true},
  [44] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [46] =
    {field_name, 1},
  [47] =
    {field_unit, 1},
  [48] =
    {field_identifier, 4, .inherited = true},
    {field_name, 4, .inherited = true},
    {field_unit, 4, .inherited = true},
  [51] =
    {field_name, 2},
  [52] =
    {field_value, 3},
  [53] =
    {field_target, 3},
    {field_value, 4},
  [55] =
    {field_value, 4},
  [56] =
    {field_amount, 2},
    {field_amount, 3},
    {field_amount, 4},
    {field_amount, 5},
  [60] =
    {field_amount, 2},
    {field_amount, 3},
    {field_amount, 5},
    {field_amount, 6},
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
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
  [79] = 20,
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
  [105] = 86,
  [106] = 87,
  [107] = 95,
  [108] = 87,
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
  [124] = 121,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 121,
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
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 162,
  [289] = 20,
  [290] = 227,
  [291] = 291,
  [292] = 156,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(949);
      ADVANCE_MAP(
        '"', 1069,
        '#', 951,
        '$', 940,
        '+', 939,
        '-', 15,
        '.', 1004,
        '=', 1033,
        '[', 1030,
        '\\', 1088,
        ']', 1031,
        'a', 150,
        'b', 72,
        'c', 277,
        'd', 244,
        'e', 534,
        'f', 473,
        'g', 74,
        'h', 1213,
        'i', 31,
        'k', 440,
        'l', 75,
        'm', 85,
        'n', 245,
        'o', 345,
        'p', 90,
        'r', 284,
        's', 176,
        't', 78,
        'u', 546,
        'v', 1212,
        'w', 403,
        'x', 1057,
        'y', 286,
        '{', 1074,
        '}', 1075,
        0x2192, 1016,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 950,
        '$', 940,
        '\\', 1087,
        'b', 660,
        'd', 341,
        'e', 921,
        'f', 516,
        'g', 73,
        'h', 279,
        'k', 440,
        'l', 76,
        'm', 633,
        'n', 632,
        'o', 896,
        'p', 670,
        'r', 284,
        's', 686,
        't', 455,
        'u', 663,
        'w', 428,
        '+', 939,
        '-', 939,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 950,
        '[', 1030,
        'a', 472,
        'd', 592,
        'l', 292,
        'm', 644,
        'o', 896,
        'p', 89,
        'r', 401,
        's', 669,
        't', 77,
        'u', 663,
        'w', 661,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(1069);
      if (lookahead == '\\') ADVANCE(1071);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1072);
      if (lookahead != 0) ADVANCE(1070);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1086);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '#', 1026,
        '$', 940,
        '-', 23,
        '[', 1030,
        '\\', 1087,
        'a', 149,
        'b', 600,
        'c', 649,
        'd', 341,
        'e', 921,
        'f', 516,
        'g', 74,
        'h', 601,
        'i', 372,
        'k', 440,
        'l', 75,
        'm', 596,
        'n', 636,
        'o', 896,
        'p', 637,
        'r', 284,
        's', 177,
        't', 597,
        'u', 664,
        'v', 289,
        'w', 451,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(940);
      if (lookahead == '-') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(940);
      if (lookahead == '=') ADVANCE(1033);
      if (lookahead == ']') ADVANCE(1031);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1032);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '$', 940,
        '[', 1030,
        '\\', 1087,
        'a', 472,
        'b', 603,
        'c', 860,
        'd', 341,
        'e', 921,
        'f', 515,
        'g', 73,
        'h', 1214,
        'i', 582,
        'k', 440,
        'l', 76,
        'm', 412,
        'n', 598,
        'o', 862,
        'p', 91,
        'r', 284,
        's', 328,
        't', 599,
        'u', 663,
        'v', 1212,
        'w', 661,
        'y', 286,
        '+', 939,
        '-', 939,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(942);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(706);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(942);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 0x2192) ADVANCE(1017);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(942);
      if (lookahead == 'n') ADVANCE(861);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(942);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(845);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(779);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(916);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(1025);
      END_STATE();
    case 31:
      if (lookahead == '3') ADVANCE(908);
      if (lookahead == 'd') ADVANCE(1192);
      if (lookahead == 'g') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(162);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(352);
      if (lookahead != 0) ADVANCE(1027);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(911);
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(911);
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(526);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(915);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(409);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(117);
      if (lookahead == 'g') ADVANCE(717);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(220);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(520);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(232);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(291);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(634);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(733);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(833);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(780);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(353);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(528);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(639);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(876);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(530);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(790);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(652);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(360);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(167);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(917);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(362);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(926);
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(926);
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(1199);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(901);
      if (lookahead == 'f') ADVANCE(797);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(991);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(707);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 's') ADVANCE(989);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(867);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(759);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'i') ADVANCE(922);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(668);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead == 'l') ADVANCE(864);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(930);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(928);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(883);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(883);
      if (lookahead == 's') ADVANCE(858);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(826);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 110:
      ADVANCE_MAP(
        'a', 472,
        'd', 342,
        'l', 292,
        'm', 644,
        'o', 896,
        'p', 89,
        'r', 401,
        's', 669,
        't', 79,
        'u', 663,
        'w', 661,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(110);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(713);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(711);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(738);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(843);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(846);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(784);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(731);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(931);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(882);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(852);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(887);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(853);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(890);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(854);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(774);
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(774);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead == 's') ADVANCE(772);
      if (lookahead == 'u') ADVANCE(824);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(399);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(399);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(287);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(489);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(303);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(494);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(654);
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(654);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(656);
      if (lookahead == 'f') ADVANCE(513);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(656);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(658);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(659);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(866);
      if (lookahead == 'n') ADVANCE(796);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(1011);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(1010);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(482);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(297);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead == 'h') ADVANCE(606);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(739);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(504);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(464);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(641);
      if (lookahead == 's') ADVANCE(927);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(834);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(835);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(929);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(725);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(886);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(741);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(869);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(744);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(872);
      if (lookahead == 'n') ADVANCE(796);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(873);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(873);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1193);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1048);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1005);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1007);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(1009);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1196);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1012);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(778);
      if (lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(786);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(787);
      if (lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(822);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(885);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(421);
      if (lookahead == 'x') ADVANCE(424);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(612);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(619);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(719);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(792);
      if (lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1068);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1068);
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1195);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(987);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == 'p') ADVANCE(715);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1219);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(1170);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1206);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1220);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1059);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1216);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1006);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1024);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(1067);
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(1203);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(1165);
      if (lookahead == 'u') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == 'u') ADVANCE(754);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == 'p') ADVANCE(871);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == 'h') ADVANCE(605);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(102);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'p') ADVANCE(504);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(792);
      if (lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(955);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(343);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(954);
      if (lookahead == 'r') ADVANCE(1175);
      if (lookahead == 'u') ADVANCE(820);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(797);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(611);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(898);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(638);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead == 'w') ADVANCE(716);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(446);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(721);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(642);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(650);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(647);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(449);
      END_STATE();
    case 360:
      if (lookahead == 'f') ADVANCE(648);
      END_STATE();
    case 361:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 362:
      if (lookahead == 'f') ADVANCE(899);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(1218);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(1047);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(973);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(1000);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(992);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(1217);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(395);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(381);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(963);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(580);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(537);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(717);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(540);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(313);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(396);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(491);
      END_STATE();
    case 382:
      if (lookahead == 'g') ADVANCE(496);
      END_STATE();
    case 383:
      if (lookahead == 'g') ADVANCE(382);
      END_STATE();
    case 384:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(333);
      END_STATE();
    case 386:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 388:
      if (lookahead == 'h') ADVANCE(1035);
      END_STATE();
    case 389:
      if (lookahead == 'h') ADVANCE(1035);
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 390:
      if (lookahead == 'h') ADVANCE(1191);
      END_STATE();
    case 391:
      if (lookahead == 'h') ADVANCE(1173);
      END_STATE();
    case 392:
      if (lookahead == 'h') ADVANCE(1176);
      END_STATE();
    case 393:
      if (lookahead == 'h') ADVANCE(1186);
      END_STATE();
    case 394:
      if (lookahead == 'h') ADVANCE(990);
      END_STATE();
    case 395:
      if (lookahead == 'h') ADVANCE(799);
      END_STATE();
    case 396:
      if (lookahead == 'h') ADVANCE(803);
      END_STATE();
    case 397:
      if (lookahead == 'h') ADVANCE(447);
      END_STATE();
    case 398:
      if (lookahead == 'h') ADVANCE(675);
      END_STATE();
    case 399:
      if (lookahead == 'h') ADVANCE(643);
      END_STATE();
    case 400:
      if (lookahead == 'h') ADVANCE(628);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(932);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(922);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(933);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(903);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(776);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(801);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(850);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(902);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(934);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(935);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(857);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 460:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 461:
      if (lookahead == 'k') ADVANCE(1194);
      END_STATE();
    case 462:
      if (lookahead == 'k') ADVANCE(1172);
      END_STATE();
    case 463:
      if (lookahead == 'k') ADVANCE(923);
      END_STATE();
    case 464:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 465:
      if (lookahead == 'k') ADVANCE(773);
      END_STATE();
    case 466:
      if (lookahead == 'k') ADVANCE(763);
      END_STATE();
    case 467:
      if (lookahead == 'k') ADVANCE(374);
      END_STATE();
    case 468:
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 469:
      if (lookahead == 'k') ADVANCE(317);
      END_STATE();
    case 470:
      if (lookahead == 'k') ADVANCE(420);
      END_STATE();
    case 471:
      if (lookahead == 'k') ADVANCE(793);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(971);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(1168);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(1041);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(1040);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(962);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(961);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(880);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(912);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(777);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(839);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(891);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(791);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(653);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(965);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(1058);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(881);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(622);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(651);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(897);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(281);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(1084);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(1015);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(1205);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(1042);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(1049);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(981);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(1083);
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(806);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(807);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(844);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(855);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(1050);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(1198);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(979);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(736);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(909);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(909);
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(905);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(889);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(906);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(875);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(913);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(893);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(775);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(874);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(879);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(892);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(894);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(752);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 663:
      if (lookahead == 'p') ADVANCE(1083);
      END_STATE();
    case 664:
      if (lookahead == 'p') ADVANCE(1083);
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 665:
      if (lookahead == 'p') ADVANCE(1189);
      END_STATE();
    case 666:
      if (lookahead == 'p') ADVANCE(1188);
      END_STATE();
    case 667:
      if (lookahead == 'p') ADVANCE(863);
      END_STATE();
    case 668:
      if (lookahead == 'p') ADVANCE(863);
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 669:
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 670:
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 671:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(758);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 675:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(764);
      END_STATE();
    case 677:
      if (lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 678:
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 679:
      if (lookahead == 'p') ADVANCE(715);
      END_STATE();
    case 680:
      if (lookahead == 'p') ADVANCE(871);
      END_STATE();
    case 681:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 682:
      if (lookahead == 'p') ADVANCE(877);
      END_STATE();
    case 683:
      if (lookahead == 'p') ADVANCE(878);
      END_STATE();
    case 684:
      if (lookahead == 'p') ADVANCE(430);
      END_STATE();
    case 685:
      if (lookahead == 'p') ADVANCE(431);
      END_STATE();
    case 686:
      if (lookahead == 'p') ADVANCE(504);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 687:
      if (lookahead == 'p') ADVANCE(685);
      END_STATE();
    case 688:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(1039);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(1018);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(976);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(1190);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(1008);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(956);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(974);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(1201);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(1054);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(1037);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(925);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(800);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(768);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(810);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(825);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 737:
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 756:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(978);
      END_STATE();
    case 758:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 759:
      if (lookahead == 's') ADVANCE(967);
      END_STATE();
    case 760:
      if (lookahead == 's') ADVANCE(986);
      END_STATE();
    case 761:
      if (lookahead == 's') ADVANCE(968);
      END_STATE();
    case 762:
      if (lookahead == 's') ADVANCE(1028);
      END_STATE();
    case 763:
      if (lookahead == 's') ADVANCE(977);
      END_STATE();
    case 764:
      if (lookahead == 's') ADVANCE(957);
      END_STATE();
    case 765:
      if (lookahead == 's') ADVANCE(1014);
      END_STATE();
    case 766:
      if (lookahead == 's') ADVANCE(953);
      END_STATE();
    case 767:
      if (lookahead == 's') ADVANCE(1036);
      END_STATE();
    case 768:
      if (lookahead == 's') ADVANCE(1034);
      END_STATE();
    case 769:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 770:
      if (lookahead == 's') ADVANCE(985);
      END_STATE();
    case 771:
      if (lookahead == 's') ADVANCE(772);
      END_STATE();
    case 772:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 773:
      if (lookahead == 's') ADVANCE(674);
      END_STATE();
    case 774:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 775:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 776:
      if (lookahead == 's') ADVANCE(677);
      END_STATE();
    case 777:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 783:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 784:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 786:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 787:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 788:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 789:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 790:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 791:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 792:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 793:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(1081);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(970);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(1065);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(964);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(1179);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(982);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(1209);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(1174);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(1020);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(1215);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(984);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(972);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(1046);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(1002);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(1184);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(988);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(969);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(1208);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(1045);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(983);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 828:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 832:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(610);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 846:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 847:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 860:
      if (lookahead == 'u') ADVANCE(754);
      END_STATE();
    case 861:
      if (lookahead == 'u') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 862:
      if (lookahead == 'u') ADVANCE(820);
      END_STATE();
    case 863:
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 864:
      if (lookahead == 'u') ADVANCE(759);
      END_STATE();
    case 865:
      if (lookahead == 'u') ADVANCE(673);
      END_STATE();
    case 866:
      if (lookahead == 'u') ADVANCE(760);
      END_STATE();
    case 867:
      if (lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 868:
      if (lookahead == 'u') ADVANCE(761);
      END_STATE();
    case 869:
      if (lookahead == 'u') ADVANCE(762);
      END_STATE();
    case 870:
      if (lookahead == 'u') ADVANCE(804);
      END_STATE();
    case 871:
      if (lookahead == 'u') ADVANCE(805);
      END_STATE();
    case 872:
      if (lookahead == 'u') ADVANCE(769);
      END_STATE();
    case 873:
      if (lookahead == 'u') ADVANCE(770);
      END_STATE();
    case 874:
      if (lookahead == 'u') ADVANCE(830);
      END_STATE();
    case 875:
      if (lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 876:
      if (lookahead == 'u') ADVANCE(742);
      END_STATE();
    case 877:
      if (lookahead == 'u') ADVANCE(812);
      END_STATE();
    case 878:
      if (lookahead == 'u') ADVANCE(813);
      END_STATE();
    case 879:
      if (lookahead == 'u') ADVANCE(814);
      END_STATE();
    case 880:
      if (lookahead == 'u') ADVANCE(840);
      END_STATE();
    case 881:
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 882:
      if (lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 883:
      if (lookahead == 'u') ADVANCE(838);
      END_STATE();
    case 884:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 885:
      if (lookahead == 'u') ADVANCE(745);
      END_STATE();
    case 886:
      if (lookahead == 'u') ADVANCE(783);
      END_STATE();
    case 887:
      if (lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 888:
      if (lookahead == 'u') ADVANCE(841);
      END_STATE();
    case 889:
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 890:
      if (lookahead == 'u') ADVANCE(500);
      END_STATE();
    case 891:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 892:
      if (lookahead == 'u') ADVANCE(785);
      END_STATE();
    case 893:
      if (lookahead == 'u') ADVANCE(851);
      END_STATE();
    case 894:
      if (lookahead == 'u') ADVANCE(856);
      END_STATE();
    case 895:
      if (lookahead == 'u') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 896:
      if (lookahead == 'u') ADVANCE(859);
      END_STATE();
    case 897:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 898:
      if (lookahead == 'u') ADVANCE(511);
      END_STATE();
    case 899:
      if (lookahead == 'u') ADVANCE(512);
      END_STATE();
    case 900:
      if (lookahead == 'v') ADVANCE(1181);
      END_STATE();
    case 901:
      if (lookahead == 'v') ADVANCE(283);
      END_STATE();
    case 902:
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 903:
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 904:
      if (lookahead == 'w') ADVANCE(1171);
      END_STATE();
    case 905:
      if (lookahead == 'w') ADVANCE(1197);
      END_STATE();
    case 906:
      if (lookahead == 'w') ADVANCE(1029);
      END_STATE();
    case 907:
      if (lookahead == 'w') ADVANCE(1063);
      END_STATE();
    case 908:
      if (lookahead == 'w') ADVANCE(517);
      END_STATE();
    case 909:
      if (lookahead == 'w') ADVANCE(62);
      END_STATE();
    case 910:
      if (lookahead == 'w') ADVANCE(536);
      END_STATE();
    case 911:
      if (lookahead == 'w') ADVANCE(444);
      END_STATE();
    case 912:
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 913:
      if (lookahead == 'w') ADVANCE(61);
      END_STATE();
    case 914:
      if (lookahead == 'w') ADVANCE(788);
      END_STATE();
    case 915:
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 916:
      if (lookahead == 'w') ADVANCE(456);
      END_STATE();
    case 917:
      if (lookahead == 'w') ADVANCE(458);
      END_STATE();
    case 918:
      if (lookahead == 'x') ADVANCE(203);
      END_STATE();
    case 919:
      if (lookahead == 'x') ADVANCE(798);
      END_STATE();
    case 920:
      if (lookahead == 'x') ADVANCE(417);
      END_STATE();
    case 921:
      if (lookahead == 'x') ADVANCE(300);
      END_STATE();
    case 922:
      if (lookahead == 'x') ADVANCE(293);
      END_STATE();
    case 923:
      if (lookahead == 'y') ADVANCE(1221);
      END_STATE();
    case 924:
      if (lookahead == 'y') ADVANCE(1022);
      END_STATE();
    case 925:
      if (lookahead == 'y') ADVANCE(1023);
      END_STATE();
    case 926:
      if (lookahead == 'y') ADVANCE(609);
      END_STATE();
    case 927:
      if (lookahead == 'y') ADVANCE(519);
      END_STATE();
    case 928:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 929:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 930:
      if (lookahead == 'y') ADVANCE(765);
      END_STATE();
    case 931:
      if (lookahead == 'y') ADVANCE(646);
      END_STATE();
    case 932:
      if (lookahead == 'z') ADVANCE(645);
      END_STATE();
    case 933:
      if (lookahead == 'z') ADVANCE(257);
      END_STATE();
    case 934:
      if (lookahead == 'z') ADVANCE(269);
      END_STATE();
    case 935:
      if (lookahead == 'z') ADVANCE(270);
      END_STATE();
    case 936:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(936);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 937:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(937);
      if (lookahead != 0) ADVANCE(947);
      END_STATE();
    case 938:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(938);
      if (lookahead != 0) ADVANCE(944);
      END_STATE();
    case 939:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 940:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(941);
      END_STATE();
    case 941:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1078);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1076);
      END_STATE();
    case 942:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 943:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1053);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1052);
      END_STATE();
    case 944:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(946);
      END_STATE();
    case 945:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 946:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 947:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(943);
      END_STATE();
    case 948:
      if (eof) ADVANCE(949);
      ADVANCE_MAP(
        '"', 5,
        '#', 952,
        'a', 771,
        'b', 136,
        'c', 480,
        'd', 339,
        'e', 534,
        'f', 514,
        'g', 73,
        'h', 280,
        'i', 585,
        'l', 292,
        'm', 594,
        'n', 595,
        'o', 344,
        'p', 405,
        'r', 401,
        's', 326,
        't', 402,
        'u', 546,
        'w', 427,
        '}', 1075,
        '+', 939,
        '-', 939,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(948);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1082);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(950);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(952);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(951);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(952);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_smart_borders);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_inverse_outer);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_smart_gaps);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_gaps);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_outer);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_inner);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_plus);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_minus);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_current);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_swap_modifier);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_titlebar);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_show_marks);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_focus_on_window_activation);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(568);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_urgent);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_focus);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_force_display_urgency_hint);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_workspace_auto_back_and_forth);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_force_xinerama);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_focus_wrapping);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_force);
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_popup_during_fullscreen);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_leave_fullscreen);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_mouse_warping);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_focus_follows_mouse);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_ipc_DASHsocket);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_client);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_focused);
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_focused_inactive);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_unfocused);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(103);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_u2192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_primary);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_nonprimary);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_set_from_resource);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_set_resource);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1025);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_set_resource_fallback);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1026);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_no_focus);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__criteria_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1032);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_smart_no_gaps);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_pixel);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_stacking);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_tabbed);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1053);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1052);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_floating_size_op);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_DASH_DASHborder);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_DASH_DASHwhole_DASHwindow);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_DASH_DASHexclude_DASHtitlebar);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '_') ADVANCE(833);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_mode_name_token1);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_mode_name_token1);
      if (lookahead == '"') ADVANCE(1073);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_mode_name_token1);
      if (lookahead == '\\') ADVANCE(1071);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1072);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(1070);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
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
          lookahead == ' ') ADVANCE(1167);
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
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_ppt);
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
      if (lookahead == '"') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(1073);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '_') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '_') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '_') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '_') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'b') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'b') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'c') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'c') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'f') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'f') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'h') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'h') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'i') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'k') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'k') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'm') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 's') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'v') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'x') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1077);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1079);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_resize);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_grow);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_shrink);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_back_and_forth);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_back_and_forth);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '_') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '_') ADVANCE(625);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_prev);
      if (lookahead == '_') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_prev);
      if (lookahead == '_') ADVANCE(662);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_next_on_output);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_next_on_output);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_prev_on_output);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_prev_on_output);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1167);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_swap);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_swap);
      if (lookahead == '_') ADVANCE(526);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_con_id);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_scratchpad);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_window);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == 'g') ADVANCE(381);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_absolute);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_positioncenter);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_mouse);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_mouse);
      if (lookahead == '_') ADVANCE(915);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == 'h') ADVANCE(1211);
      if (lookahead == 'v') ADVANCE(1210);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_splitv);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_splith);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_mode_toggle);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_floating);
      if (lookahead == '_') ADVANCE(520);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_sticky);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 948},
  [2] = {.lex_state = 948},
  [3] = {.lex_state = 948},
  [4] = {.lex_state = 948},
  [5] = {.lex_state = 948},
  [6] = {.lex_state = 948},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 948},
  [18] = {.lex_state = 948},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 110},
  [49] = {.lex_state = 110},
  [50] = {.lex_state = 948},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 948},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 948},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 948},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 948},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 948},
  [89] = {.lex_state = 110},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 948},
  [92] = {.lex_state = 948},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 948},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 948},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 948},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 936},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 936},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 936},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 937},
  [266] = {.lex_state = 936},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 936},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 948},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 936},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 938},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1},
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
    [anon_sym_client] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_px] = ACTIONS(1),
    [anon_sym_ppt] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
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
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_split] = ACTIONS(1),
    [anon_sym_splitv] = ACTIONS(1),
    [anon_sym_splith] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_mode_toggle] = ACTIONS(1),
    [anon_sym_floating] = ACTIONS(1),
    [anon_sym_enable] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
    [anon_sym_sticky] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(155),
    [sym__statement] = STATE(2),
    [sym_smart_borders] = STATE(156),
    [sym_smart_gaps] = STATE(156),
    [sym_gaps] = STATE(156),
    [sym_tiling_drag] = STATE(156),
    [sym_show_marks] = STATE(156),
    [sym_focus_on_window_activation] = STATE(156),
    [sym_force_display_urgency_hint] = STATE(156),
    [sym_workspace_auto_back_and_forth] = STATE(156),
    [sym_force_xinerama] = STATE(156),
    [sym_focus_wrapping] = STATE(156),
    [sym_popup_during_fullscreen] = STATE(156),
    [sym_mouse_warping] = STATE(156),
    [sym_focus_follows_mouse] = STATE(156),
    [sym_ipc_socket] = STATE(156),
    [sym_client] = STATE(156),
    [sym_exec] = STATE(156),
    [sym_exec_always] = STATE(156),
    [sym_assign] = STATE(156),
    [sym__definition] = STATE(156),
    [sym_set_from_resource] = STATE(156),
    [sym_set] = STATE(156),
    [sym_no_focus] = STATE(156),
    [sym_for_window] = STATE(156),
    [sym_hide_edge_borders] = STATE(156),
    [sym_border] = STATE(156),
    [sym_title_align] = STATE(156),
    [sym_workspace_layout] = STATE(156),
    [sym_default_orientation] = STATE(156),
    [sym_include] = STATE(156),
    [sym_floating_modifier] = STATE(156),
    [sym_floating_size] = STATE(156),
    [sym_binding] = STATE(156),
    [sym_font] = STATE(156),
    [sym_mode] = STATE(156),
    [sym_workspace] = STATE(156),
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
    [anon_sym_client] = ACTIONS(37),
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
    [sym_smart_borders] = STATE(156),
    [sym_smart_gaps] = STATE(156),
    [sym_gaps] = STATE(156),
    [sym_tiling_drag] = STATE(156),
    [sym_show_marks] = STATE(156),
    [sym_focus_on_window_activation] = STATE(156),
    [sym_force_display_urgency_hint] = STATE(156),
    [sym_workspace_auto_back_and_forth] = STATE(156),
    [sym_force_xinerama] = STATE(156),
    [sym_focus_wrapping] = STATE(156),
    [sym_popup_during_fullscreen] = STATE(156),
    [sym_mouse_warping] = STATE(156),
    [sym_focus_follows_mouse] = STATE(156),
    [sym_ipc_socket] = STATE(156),
    [sym_client] = STATE(156),
    [sym_exec] = STATE(156),
    [sym_exec_always] = STATE(156),
    [sym_assign] = STATE(156),
    [sym__definition] = STATE(156),
    [sym_set_from_resource] = STATE(156),
    [sym_set] = STATE(156),
    [sym_no_focus] = STATE(156),
    [sym_for_window] = STATE(156),
    [sym_hide_edge_borders] = STATE(156),
    [sym_border] = STATE(156),
    [sym_title_align] = STATE(156),
    [sym_workspace_layout] = STATE(156),
    [sym_default_orientation] = STATE(156),
    [sym_include] = STATE(156),
    [sym_floating_modifier] = STATE(156),
    [sym_floating_size] = STATE(156),
    [sym_binding] = STATE(156),
    [sym_font] = STATE(156),
    [sym_mode] = STATE(156),
    [sym_workspace] = STATE(156),
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
    [anon_sym_client] = ACTIONS(37),
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
    [sym_smart_borders] = STATE(156),
    [sym_smart_gaps] = STATE(156),
    [sym_gaps] = STATE(156),
    [sym_tiling_drag] = STATE(156),
    [sym_show_marks] = STATE(156),
    [sym_focus_on_window_activation] = STATE(156),
    [sym_force_display_urgency_hint] = STATE(156),
    [sym_workspace_auto_back_and_forth] = STATE(156),
    [sym_force_xinerama] = STATE(156),
    [sym_focus_wrapping] = STATE(156),
    [sym_popup_during_fullscreen] = STATE(156),
    [sym_mouse_warping] = STATE(156),
    [sym_focus_follows_mouse] = STATE(156),
    [sym_ipc_socket] = STATE(156),
    [sym_client] = STATE(156),
    [sym_exec] = STATE(156),
    [sym_exec_always] = STATE(156),
    [sym_assign] = STATE(156),
    [sym__definition] = STATE(156),
    [sym_set_from_resource] = STATE(156),
    [sym_set] = STATE(156),
    [sym_no_focus] = STATE(156),
    [sym_for_window] = STATE(156),
    [sym_hide_edge_borders] = STATE(156),
    [sym_border] = STATE(156),
    [sym_title_align] = STATE(156),
    [sym_workspace_layout] = STATE(156),
    [sym_default_orientation] = STATE(156),
    [sym_include] = STATE(156),
    [sym_floating_modifier] = STATE(156),
    [sym_floating_size] = STATE(156),
    [sym_binding] = STATE(156),
    [sym_font] = STATE(156),
    [sym_mode] = STATE(156),
    [sym_workspace] = STATE(156),
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
    [anon_sym_client] = ACTIONS(127),
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
    [sym_smart_borders] = STATE(292),
    [sym_smart_gaps] = STATE(292),
    [sym_gaps] = STATE(292),
    [sym_tiling_drag] = STATE(292),
    [sym_show_marks] = STATE(292),
    [sym_focus_on_window_activation] = STATE(292),
    [sym_force_display_urgency_hint] = STATE(292),
    [sym_workspace_auto_back_and_forth] = STATE(292),
    [sym_force_xinerama] = STATE(292),
    [sym_focus_wrapping] = STATE(292),
    [sym_popup_during_fullscreen] = STATE(292),
    [sym_mouse_warping] = STATE(292),
    [sym_focus_follows_mouse] = STATE(292),
    [sym_ipc_socket] = STATE(292),
    [sym_client] = STATE(292),
    [sym_exec] = STATE(292),
    [sym_exec_always] = STATE(292),
    [sym_assign] = STATE(292),
    [sym__definition] = STATE(292),
    [sym_set_from_resource] = STATE(292),
    [sym_set] = STATE(292),
    [sym_no_focus] = STATE(292),
    [sym_for_window] = STATE(292),
    [sym_hide_edge_borders] = STATE(292),
    [sym_border] = STATE(292),
    [sym_title_align] = STATE(292),
    [sym_workspace_layout] = STATE(292),
    [sym_default_orientation] = STATE(292),
    [sym_include] = STATE(292),
    [sym_floating_modifier] = STATE(292),
    [sym_floating_size] = STATE(292),
    [sym_binding] = STATE(292),
    [sym_font] = STATE(292),
    [sym_mode] = STATE(292),
    [sym_workspace] = STATE(292),
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
    [anon_sym_client] = ACTIONS(37),
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
    [sym_smart_borders] = STATE(292),
    [sym_smart_gaps] = STATE(292),
    [sym_gaps] = STATE(292),
    [sym_tiling_drag] = STATE(292),
    [sym_show_marks] = STATE(292),
    [sym_focus_on_window_activation] = STATE(292),
    [sym_force_display_urgency_hint] = STATE(292),
    [sym_workspace_auto_back_and_forth] = STATE(292),
    [sym_force_xinerama] = STATE(292),
    [sym_focus_wrapping] = STATE(292),
    [sym_popup_during_fullscreen] = STATE(292),
    [sym_mouse_warping] = STATE(292),
    [sym_focus_follows_mouse] = STATE(292),
    [sym_ipc_socket] = STATE(292),
    [sym_client] = STATE(292),
    [sym_exec] = STATE(292),
    [sym_exec_always] = STATE(292),
    [sym_assign] = STATE(292),
    [sym__definition] = STATE(292),
    [sym_set_from_resource] = STATE(292),
    [sym_set] = STATE(292),
    [sym_no_focus] = STATE(292),
    [sym_for_window] = STATE(292),
    [sym_hide_edge_borders] = STATE(292),
    [sym_border] = STATE(292),
    [sym_title_align] = STATE(292),
    [sym_workspace_layout] = STATE(292),
    [sym_default_orientation] = STATE(292),
    [sym_include] = STATE(292),
    [sym_floating_modifier] = STATE(292),
    [sym_floating_size] = STATE(292),
    [sym_binding] = STATE(292),
    [sym_font] = STATE(292),
    [sym_mode] = STATE(292),
    [sym_workspace] = STATE(292),
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
    [anon_sym_client] = ACTIONS(37),
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
    [sym_smart_borders] = STATE(292),
    [sym_smart_gaps] = STATE(292),
    [sym_gaps] = STATE(292),
    [sym_tiling_drag] = STATE(292),
    [sym_show_marks] = STATE(292),
    [sym_focus_on_window_activation] = STATE(292),
    [sym_force_display_urgency_hint] = STATE(292),
    [sym_workspace_auto_back_and_forth] = STATE(292),
    [sym_force_xinerama] = STATE(292),
    [sym_focus_wrapping] = STATE(292),
    [sym_popup_during_fullscreen] = STATE(292),
    [sym_mouse_warping] = STATE(292),
    [sym_focus_follows_mouse] = STATE(292),
    [sym_ipc_socket] = STATE(292),
    [sym_client] = STATE(292),
    [sym_exec] = STATE(292),
    [sym_exec_always] = STATE(292),
    [sym_assign] = STATE(292),
    [sym__definition] = STATE(292),
    [sym_set_from_resource] = STATE(292),
    [sym_set] = STATE(292),
    [sym_no_focus] = STATE(292),
    [sym_for_window] = STATE(292),
    [sym_hide_edge_borders] = STATE(292),
    [sym_border] = STATE(292),
    [sym_title_align] = STATE(292),
    [sym_workspace_layout] = STATE(292),
    [sym_default_orientation] = STATE(292),
    [sym_include] = STATE(292),
    [sym_floating_modifier] = STATE(292),
    [sym_floating_size] = STATE(292),
    [sym_binding] = STATE(292),
    [sym_font] = STATE(292),
    [sym_mode] = STATE(292),
    [sym_workspace] = STATE(292),
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
    [anon_sym_client] = ACTIONS(127),
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
  [0] = 25,
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
    ACTIONS(217), 1,
      anon_sym_fullscreen,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_floating,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(10), 1,
      aux_sym_binding_repeat2,
    STATE(15), 1,
      sym_criteria,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [94] = 24,
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
    ACTIONS(217), 1,
      anon_sym_fullscreen,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_floating,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(293), 1,
      sym_unit,
    STATE(295), 1,
      sym__value,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [186] = 25,
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
    ACTIONS(217), 1,
      anon_sym_fullscreen,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_floating,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(14), 1,
      aux_sym_binding_repeat2,
    STATE(16), 1,
      sym_criteria,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [280] = 24,
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
      anon_sym_resize,
    ACTIONS(247), 1,
      anon_sym_swap,
    ACTIONS(249), 1,
      anon_sym_move,
    ACTIONS(251), 1,
      anon_sym_fullscreen,
    ACTIONS(253), 1,
      anon_sym_layout,
    ACTIONS(255), 1,
      anon_sym_split,
    ACTIONS(257), 1,
      anon_sym_floating,
    ACTIONS(259), 1,
      anon_sym_sticky,
    STATE(11), 1,
      aux_sym_binding_repeat2,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(239), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(243), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(233), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [371] = 24,
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
    ACTIONS(302), 1,
      anon_sym_fullscreen,
    ACTIONS(305), 1,
      anon_sym_layout,
    ACTIONS(308), 1,
      anon_sym_split,
    ACTIONS(311), 1,
      anon_sym_floating,
    ACTIONS(314), 1,
      anon_sym_sticky,
    STATE(11), 1,
      aux_sym_binding_repeat2,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(284), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(290), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(275), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [462] = 24,
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
      anon_sym_resize,
    ACTIONS(247), 1,
      anon_sym_swap,
    ACTIONS(249), 1,
      anon_sym_move,
    ACTIONS(251), 1,
      anon_sym_fullscreen,
    ACTIONS(253), 1,
      anon_sym_layout,
    ACTIONS(255), 1,
      anon_sym_split,
    ACTIONS(257), 1,
      anon_sym_floating,
    ACTIONS(259), 1,
      anon_sym_sticky,
    ACTIONS(317), 1,
      aux_sym__statement_token1,
    STATE(11), 1,
      aux_sym_binding_repeat2,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(239), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(243), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(233), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [553] = 24,
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
      anon_sym_resize,
    ACTIONS(247), 1,
      anon_sym_swap,
    ACTIONS(249), 1,
      anon_sym_move,
    ACTIONS(251), 1,
      anon_sym_fullscreen,
    ACTIONS(253), 1,
      anon_sym_layout,
    ACTIONS(255), 1,
      anon_sym_split,
    ACTIONS(257), 1,
      anon_sym_floating,
    ACTIONS(259), 1,
      anon_sym_sticky,
    ACTIONS(319), 1,
      aux_sym__statement_token1,
    STATE(11), 1,
      aux_sym_binding_repeat2,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(239), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(243), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(233), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [644] = 24,
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
      anon_sym_resize,
    ACTIONS(247), 1,
      anon_sym_swap,
    ACTIONS(249), 1,
      anon_sym_move,
    ACTIONS(251), 1,
      anon_sym_fullscreen,
    ACTIONS(253), 1,
      anon_sym_layout,
    ACTIONS(255), 1,
      anon_sym_split,
    ACTIONS(257), 1,
      anon_sym_floating,
    ACTIONS(259), 1,
      anon_sym_sticky,
    ACTIONS(317), 1,
      aux_sym__statement_token1,
    STATE(11), 1,
      aux_sym_binding_repeat2,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(239), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(243), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(233), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [735] = 23,
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
    ACTIONS(217), 1,
      anon_sym_fullscreen,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_floating,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(12), 1,
      aux_sym_binding_repeat2,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [823] = 23,
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
    ACTIONS(217), 1,
      anon_sym_fullscreen,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_floating,
    ACTIONS(225), 1,
      anon_sym_sticky,
    STATE(13), 1,
      aux_sym_binding_repeat2,
    STATE(27), 1,
      sym__value,
    STATE(293), 1,
      sym_unit,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(209), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(284), 14,
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
      sym_floating,
      sym_sticky,
  [911] = 2,
    ACTIONS(323), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(321), 38,
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
      anon_sym_client,
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
  [956] = 2,
    ACTIONS(323), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(321), 38,
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
      anon_sym_client,
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
  [1001] = 20,
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
    ACTIONS(217), 1,
      anon_sym_fullscreen,
    ACTIONS(219), 1,
      anon_sym_layout,
    ACTIONS(221), 1,
      anon_sym_split,
    ACTIONS(223), 1,
      anon_sym_floating,
    ACTIONS(225), 1,
      anon_sym_sticky,
    ACTIONS(325), 1,
      anon_sym_mode,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(189), 1,
      sym_unit,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    ACTIONS(329), 2,
      anon_sym_kill,
      anon_sym_restart,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
    ACTIONS(55), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(188), 14,
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
      sym_floating,
      sym_sticky,
  [1080] = 2,
    ACTIONS(333), 1,
      anon_sym_mode,
    ACTIONS(331), 29,
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
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_up,
      anon_sym_down,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_parent,
      anon_sym_mode_toggle,
      anon_sym_floating,
      anon_sym_sticky,
  [1115] = 3,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
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
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1147] = 2,
    ACTIONS(340), 1,
      aux_sym__statement_token1,
    ACTIONS(342), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1175] = 2,
    ACTIONS(344), 1,
      aux_sym__statement_token1,
    ACTIONS(346), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1203] = 2,
    ACTIONS(348), 1,
      aux_sym__statement_token1,
    ACTIONS(350), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1231] = 1,
    ACTIONS(352), 23,
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
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1257] = 1,
    ACTIONS(354), 23,
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
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1283] = 2,
    ACTIONS(356), 1,
      aux_sym__statement_token1,
    ACTIONS(358), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1311] = 2,
    ACTIONS(360), 1,
      aux_sym__statement_token1,
    ACTIONS(362), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1339] = 2,
    ACTIONS(364), 1,
      aux_sym__statement_token1,
    ACTIONS(366), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1367] = 2,
    ACTIONS(368), 1,
      aux_sym__statement_token1,
    ACTIONS(370), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1395] = 2,
    ACTIONS(372), 1,
      aux_sym__statement_token1,
    ACTIONS(374), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1423] = 2,
    ACTIONS(376), 1,
      aux_sym__statement_token1,
    ACTIONS(378), 22,
      anon_sym_gaps,
      anon_sym_focus,
      anon_sym_workspace,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_identifier,
      anon_sym_px,
      anon_sym_ppt,
      anon_sym_BSLASH,
      anon_sym_kill,
      anon_sym_restart,
      anon_sym_resize,
      anon_sym_swap,
      anon_sym_move,
      anon_sym_fullscreen,
      anon_sym_layout,
      anon_sym_split,
      anon_sym_floating,
      anon_sym_sticky,
  [1451] = 13,
    ACTIONS(382), 1,
      anon_sym_workspace,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(386), 1,
      anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth,
    ACTIONS(390), 1,
      anon_sym_scratchpad,
    ACTIONS(392), 1,
      anon_sym_to,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    STATE(112), 1,
      sym__directions,
    STATE(205), 1,
      sym_move_value,
    ACTIONS(388), 2,
      anon_sym_container,
      anon_sym_window,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1499] = 11,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    ACTIONS(400), 1,
      anon_sym_workspace,
    ACTIONS(404), 1,
      anon_sym_to,
    STATE(112), 1,
      sym__directions,
    STATE(250), 1,
      sym_move_value,
    ACTIONS(402), 2,
      anon_sym_container,
      anon_sym_window,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1541] = 11,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    ACTIONS(404), 1,
      anon_sym_to,
    ACTIONS(406), 1,
      anon_sym_workspace,
    ACTIONS(408), 1,
      anon_sym_number,
    STATE(112), 1,
      sym__directions,
    STATE(250), 1,
      sym_move_value,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1582] = 11,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    ACTIONS(406), 1,
      anon_sym_workspace,
    ACTIONS(408), 1,
      anon_sym_number,
    ACTIONS(410), 1,
      anon_sym_to,
    STATE(112), 1,
      sym__directions,
    STATE(273), 1,
      sym_move_value,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1623] = 10,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    ACTIONS(404), 1,
      anon_sym_to,
    ACTIONS(406), 1,
      anon_sym_workspace,
    STATE(112), 1,
      sym__directions,
    STATE(250), 1,
      sym_move_value,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1661] = 10,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    ACTIONS(406), 1,
      anon_sym_workspace,
    ACTIONS(410), 1,
      anon_sym_to,
    STATE(112), 1,
      sym__directions,
    STATE(273), 1,
      sym_move_value,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1699] = 9,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    ACTIONS(406), 1,
      anon_sym_workspace,
    STATE(112), 1,
      sym__directions,
    STATE(250), 1,
      sym_move_value,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1734] = 3,
    ACTIONS(415), 1,
      sym_number,
    STATE(40), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(412), 13,
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
  [1757] = 9,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    ACTIONS(406), 1,
      anon_sym_workspace,
    STATE(112), 1,
      sym__directions,
    STATE(273), 1,
      sym_move_value,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1792] = 9,
    ACTIONS(384), 1,
      anon_sym_output,
    ACTIONS(394), 1,
      anon_sym_absolute,
    ACTIONS(396), 1,
      anon_sym_positioncenter,
    ACTIONS(398), 1,
      anon_sym_position,
    ACTIONS(406), 1,
      anon_sym_workspace,
    STATE(112), 1,
      sym__directions,
    STATE(280), 1,
      sym_move_value,
    ACTIONS(380), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
    STATE(206), 5,
      sym__move_directional,
      sym__move_center,
      sym__move_position,
      sym__move_output,
      sym__move_workspace,
  [1827] = 9,
    ACTIONS(417), 1,
      aux_sym__statement_token1,
    ACTIONS(421), 1,
      anon_sym_workspace,
    ACTIONS(423), 1,
      anon_sym_output,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_criteria,
    STATE(182), 1,
      sym_focus_value,
    STATE(183), 1,
      sym__focus_workspace,
    STATE(180), 3,
      sym__directions,
      sym__focus_direction,
      sym__focus_output,
    ACTIONS(419), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_parent,
      anon_sym_mode_toggle,
  [1862] = 3,
    ACTIONS(429), 1,
      sym_number,
    STATE(40), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(427), 13,
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
  [1885] = 2,
    STATE(44), 2,
      sym_gaps_option,
      aux_sym_gaps_repeat1,
    ACTIONS(427), 13,
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
  [1905] = 1,
    ACTIONS(431), 14,
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
  [1922] = 10,
    ACTIONS(433), 1,
      anon_sym_number,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(437), 1,
      sym_value,
    ACTIONS(439), 1,
      anon_sym_back_and_forth,
    ACTIONS(443), 1,
      anon_sym_DASH_DASHno_DASHauto_DASHback_DASHand_DASHforth,
    STATE(135), 1,
      sym__workspace_id,
    STATE(239), 1,
      sym_workspace_value,
    STATE(240), 1,
      sym__workspace_switch,
    STATE(241), 1,
      sym__workspace_assign_output,
    ACTIONS(441), 4,
      anon_sym_next,
      anon_sym_prev,
      anon_sym_next_on_output,
      anon_sym_prev_on_output,
  [1956] = 6,
    ACTIONS(447), 1,
      anon_sym_workspace,
    ACTIONS(449), 1,
      anon_sym_output,
    STATE(183), 1,
      sym__focus_workspace,
    STATE(236), 1,
      sym_focus_value,
    STATE(180), 3,
      sym__directions,
      sym__focus_direction,
      sym__focus_output,
    ACTIONS(445), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_parent,
      anon_sym_mode_toggle,
  [1982] = 6,
    ACTIONS(453), 1,
      anon_sym_default,
    ACTIONS(455), 1,
      anon_sym_toggle,
    ACTIONS(457), 1,
      anon_sym_split,
    STATE(211), 1,
      sym_layout_value,
    STATE(53), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(451), 5,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_splitv,
      anon_sym_splith,
  [2006] = 3,
    STATE(253), 1,
      sym_mouse_warping_value,
    STATE(252), 2,
      sym__output_value,
      sym__directions,
    ACTIONS(459), 7,
      anon_sym_left,
      anon_sym_right,
      anon_sym_none,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [2023] = 3,
    ACTIONS(461), 1,
      aux_sym__statement_token1,
    STATE(52), 3,
      sym__output_value,
      sym__directions,
      aux_sym__focus_output_repeat1,
    ACTIONS(463), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [2040] = 3,
    ACTIONS(465), 1,
      aux_sym__statement_token1,
    STATE(52), 3,
      sym__output_value,
      sym__directions,
      aux_sym__focus_output_repeat1,
    ACTIONS(467), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [2057] = 3,
    ACTIONS(470), 1,
      aux_sym__statement_token1,
    STATE(57), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(457), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2073] = 5,
    ACTIONS(472), 1,
      sym_keymap_trigger,
    ACTIONS(476), 1,
      sym_identifier,
    STATE(7), 1,
      sym_keymap,
    STATE(58), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(474), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [2093] = 3,
    ACTIONS(478), 1,
      aux_sym__statement_token1,
    STATE(57), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(457), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2109] = 2,
    STATE(51), 3,
      sym__output_value,
      sym__directions,
      aux_sym__focus_output_repeat1,
    ACTIONS(480), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [2123] = 3,
    ACTIONS(482), 1,
      aux_sym__statement_token1,
    STATE(57), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(484), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2139] = 5,
    ACTIONS(472), 1,
      sym_keymap_trigger,
    ACTIONS(476), 1,
      sym_identifier,
    STATE(9), 1,
      sym_keymap,
    STATE(62), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(474), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [2159] = 3,
    ACTIONS(457), 1,
      anon_sym_split,
    STATE(55), 2,
      sym_layout_mode,
      aux_sym_layout_value_repeat1,
    ACTIONS(451), 5,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_splitv,
      anon_sym_splith,
  [2174] = 7,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(487), 1,
      anon_sym_u2192,
    ACTIONS(489), 1,
      anon_sym_number,
    ACTIONS(491), 1,
      anon_sym_output,
    ACTIONS(493), 1,
      sym_value,
    STATE(231), 1,
      sym__workspace_id,
    STATE(230), 2,
      sym_assign_workspace,
      sym_assign_output,
  [2197] = 6,
    ACTIONS(495), 1,
      anon_sym_off,
    ACTIONS(497), 1,
      anon_sym_swap_modifier,
    STATE(196), 1,
      sym_tiling_drag_value,
    STATE(197), 1,
      sym__tiling_drag_swap,
    ACTIONS(499), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
    STATE(84), 2,
      sym__tiling_drag_modifier,
      aux_sym_tiling_drag_value_repeat1,
  [2218] = 3,
    ACTIONS(501), 2,
      sym_keymap_trigger,
      sym_identifier,
    STATE(62), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(503), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [2233] = 2,
    STATE(176), 2,
      sym__output_value,
      sym__directions,
    ACTIONS(506), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_primary,
      anon_sym_nonprimary,
      anon_sym_up,
      anon_sym_down,
  [2246] = 3,
    ACTIONS(510), 1,
      anon_sym_smart,
    STATE(204), 1,
      sym_hide_edge_borders_value,
    ACTIONS(508), 5,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_none,
      anon_sym_both,
      anon_sym_smart_no_gaps,
  [2260] = 3,
    ACTIONS(514), 1,
      anon_sym_focused,
    STATE(127), 1,
      sym_property,
    ACTIONS(512), 5,
      anon_sym_urgent,
      anon_sym_focused_inactive,
      anon_sym_unfocused,
      anon_sym_placeholder,
      anon_sym_background,
  [2274] = 2,
    ACTIONS(516), 1,
      aux_sym__statement_token1,
    ACTIONS(518), 6,
      anon_sym_all,
      anon_sym_stacking,
      anon_sym_tabbed,
      anon_sym_split,
      anon_sym_splitv,
      anon_sym_splith,
  [2286] = 5,
    ACTIONS(520), 1,
      aux_sym__statement_token1,
    ACTIONS(522), 1,
      sym_number,
    STATE(142), 1,
      sym_unit,
    ACTIONS(239), 2,
      anon_sym_px,
      anon_sym_ppt,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
  [2304] = 6,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_number,
    ACTIONS(491), 1,
      anon_sym_output,
    ACTIONS(493), 1,
      sym_value,
    STATE(231), 1,
      sym__workspace_id,
    STATE(174), 2,
      sym_assign_workspace,
      sym_assign_output,
  [2324] = 3,
    STATE(214), 1,
      sym_split_value,
    ACTIONS(526), 2,
      anon_sym_v,
      anon_sym_h,
    ACTIONS(524), 3,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_toggle,
  [2337] = 1,
    ACTIONS(528), 6,
      sym_keymap_trigger,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
      sym_identifier,
  [2346] = 5,
    ACTIONS(530), 1,
      anon_sym_set,
    STATE(192), 1,
      sym_resize_value,
    STATE(193), 1,
      sym__resize_grow_shrink,
    STATE(194), 1,
      sym__resize_set,
    ACTIONS(532), 2,
      anon_sym_grow,
      anon_sym_shrink,
  [2363] = 3,
    STATE(104), 1,
      sym_unit,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
  [2375] = 4,
    ACTIONS(534), 1,
      aux_sym__statement_token1,
    ACTIONS(536), 1,
      sym_number,
    ACTIONS(538), 1,
      anon_sym_mouse,
    STATE(101), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2389] = 3,
    STATE(226), 1,
      sym_unit,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
  [2401] = 3,
    STATE(102), 1,
      sym_unit,
    ACTIONS(205), 2,
      anon_sym_px,
      anon_sym_ppt,
    STATE(93), 2,
      sym__px_unit,
      sym__ppt_unit,
  [2413] = 3,
    ACTIONS(540), 1,
      aux_sym__statement_token1,
    ACTIONS(542), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
    STATE(76), 2,
      sym__tiling_drag_modifier,
      aux_sym_tiling_drag_value_repeat1,
  [2425] = 4,
    ACTIONS(545), 1,
      aux_sym__statement_token1,
    ACTIONS(547), 1,
      sym_number,
    STATE(80), 1,
      aux_sym__resize_set_repeat1,
    ACTIONS(549), 2,
      anon_sym_width,
      anon_sym_height,
  [2439] = 2,
    STATE(208), 1,
      sym_focus_on_window_activation_value,
    ACTIONS(551), 4,
      anon_sym_smart,
      anon_sym_urgent,
      anon_sym_focus,
      anon_sym_none,
  [2449] = 1,
    ACTIONS(333), 5,
      anon_sym_u2192,
      anon_sym_number,
      anon_sym_output,
      sym_identifier,
      sym_value,
  [2457] = 4,
    ACTIONS(553), 1,
      aux_sym__statement_token1,
    ACTIONS(555), 1,
      sym_number,
    STATE(80), 1,
      aux_sym__resize_set_repeat1,
    ACTIONS(558), 2,
      anon_sym_width,
      anon_sym_height,
  [2471] = 2,
    STATE(249), 1,
      sym_popup_during_fullscreen_value,
    ACTIONS(561), 4,
      anon_sym_all,
      anon_sym_smart,
      anon_sym_ignore,
      anon_sym_leave_fullscreen,
  [2481] = 2,
    STATE(251), 1,
      sym__directions,
    ACTIONS(563), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
  [2491] = 2,
    STATE(224), 1,
      sym_focus_wrapping_value,
    ACTIONS(565), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_force,
      anon_sym_workspace,
  [2501] = 3,
    ACTIONS(567), 1,
      aux_sym__statement_token1,
    ACTIONS(569), 2,
      anon_sym_modifier,
      anon_sym_titlebar,
    STATE(76), 2,
      sym__tiling_drag_modifier,
      aux_sym_tiling_drag_value_repeat1,
  [2513] = 2,
    STATE(257), 1,
      sym_title_align_value,
    ACTIONS(571), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [2522] = 3,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      aux_sym_mode_name_repeat1,
    ACTIONS(575), 2,
      aux_sym_mode_name_token1,
      anon_sym_BSLASH_DQUOTE,
  [2533] = 4,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    ACTIONS(579), 1,
      aux_sym__criteria_value_token1,
    STATE(96), 1,
      aux_sym_criteria_repeat1,
    STATE(141), 1,
      sym__criteria_value,
  [2546] = 2,
    STATE(137), 1,
      sym_border_value,
    ACTIONS(581), 3,
      anon_sym_none,
      anon_sym_normal,
      anon_sym_pixel,
  [2555] = 2,
    STATE(277), 1,
      sym_workspace_layout_value,
    ACTIONS(583), 3,
      anon_sym_default,
      anon_sym_stacking,
      anon_sym_tabbed,
  [2564] = 2,
    STATE(281), 1,
      sym_default_orientation_value,
    ACTIONS(585), 3,
      anon_sym_horizontal,
      anon_sym_vertical,
      anon_sym_auto,
  [2573] = 2,
    STATE(216), 1,
      sym_floating_value,
    ACTIONS(587), 3,
      anon_sym_toggle,
      anon_sym_enable,
      anon_sym_disable,
  [2582] = 2,
    STATE(218), 1,
      sym_sticky_value,
    ACTIONS(589), 3,
      anon_sym_toggle,
      anon_sym_enable,
      anon_sym_disable,
  [2591] = 2,
    ACTIONS(591), 1,
      aux_sym__statement_token1,
    ACTIONS(593), 3,
      sym_number,
      anon_sym_width,
      anon_sym_height,
  [2600] = 2,
    STATE(159), 1,
      sym_smart_borders_value,
    ACTIONS(595), 3,
      anon_sym_on,
      anon_sym_off,
      anon_sym_inverse_outer,
  [2609] = 3,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      aux_sym_mode_name_repeat1,
    ACTIONS(599), 2,
      aux_sym_mode_name_token1,
      anon_sym_BSLASH_DQUOTE,
  [2620] = 4,
    ACTIONS(601), 1,
      anon_sym_RBRACK,
    ACTIONS(603), 1,
      aux_sym__criteria_value_token1,
    STATE(96), 1,
      aux_sym_criteria_repeat1,
    STATE(141), 1,
      sym__criteria_value,
  [2633] = 2,
    STATE(164), 1,
      sym_smart_gaps_value,
    ACTIONS(606), 3,
      anon_sym_on,
      anon_sym_off,
      anon_sym_inverse_outer,
  [2642] = 3,
    ACTIONS(608), 1,
      sym_number,
    STATE(77), 1,
      aux_sym__resize_set_repeat1,
    ACTIONS(610), 2,
      anon_sym_width,
      anon_sym_height,
  [2653] = 3,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      aux_sym_mode_name_repeat1,
    ACTIONS(614), 2,
      aux_sym_mode_name_token1,
      anon_sym_BSLASH_DQUOTE,
  [2664] = 4,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(617), 1,
      anon_sym_number,
    ACTIONS(619), 1,
      sym_value,
    STATE(172), 1,
      sym__workspace_id,
  [2677] = 3,
    ACTIONS(536), 1,
      sym_number,
    ACTIONS(621), 1,
      aux_sym__statement_token1,
    STATE(103), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2688] = 2,
    ACTIONS(553), 1,
      aux_sym__statement_token1,
    ACTIONS(623), 3,
      sym_number,
      anon_sym_width,
      anon_sym_height,
  [2697] = 3,
    ACTIONS(625), 1,
      aux_sym__statement_token1,
    ACTIONS(627), 1,
      sym_number,
    STATE(103), 2,
      sym__move_amount,
      aux_sym__move_position_repeat1,
  [2708] = 2,
    ACTIONS(630), 1,
      aux_sym__statement_token1,
    ACTIONS(632), 3,
      sym_number,
      anon_sym_width,
      anon_sym_height,
  [2717] = 3,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym_mode_name_repeat1,
    ACTIONS(636), 2,
      aux_sym_mode_name_token1,
      anon_sym_BSLASH_DQUOTE,
  [2728] = 4,
    ACTIONS(579), 1,
      aux_sym__criteria_value_token1,
    ACTIONS(638), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_criteria_repeat1,
    STATE(141), 1,
      sym__criteria_value,
  [2741] = 3,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      aux_sym_mode_name_repeat1,
    ACTIONS(599), 2,
      aux_sym_mode_name_token1,
      anon_sym_BSLASH_DQUOTE,
  [2752] = 4,
    ACTIONS(579), 1,
      aux_sym__criteria_value_token1,
    ACTIONS(642), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_criteria_repeat1,
    STATE(141), 1,
      sym__criteria_value,
  [2765] = 3,
    ACTIONS(644), 1,
      aux_sym__statement_token1,
    ACTIONS(646), 1,
      sym_identifier,
    STATE(115), 1,
      aux_sym_client_repeat1,
  [2775] = 3,
    ACTIONS(648), 1,
      aux_sym__criteria_value_token1,
    ACTIONS(650), 1,
      sym_identifier,
    STATE(190), 1,
      sym_floating_modifier_value,
  [2785] = 2,
    STATE(259), 1,
      sym_focus_follows_mouse_value,
    ACTIONS(652), 2,
      anon_sym_yes,
      anon_sym_no,
  [2793] = 3,
    ACTIONS(536), 1,
      sym_number,
    ACTIONS(654), 1,
      aux_sym__statement_token1,
    STATE(258), 1,
      sym__move_amount,
  [2803] = 3,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(656), 1,
      sym_value,
    STATE(169), 1,
      sym__workspace_id,
  [2813] = 2,
    STATE(222), 1,
      sym_force_xinerama_value,
    ACTIONS(658), 2,
      anon_sym_yes,
      anon_sym_no,
  [2821] = 3,
    ACTIONS(660), 1,
      aux_sym__statement_token1,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(115), 1,
      aux_sym_client_repeat1,
  [2831] = 2,
    ACTIONS(667), 1,
      anon_sym_EQ,
    ACTIONS(665), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [2839] = 1,
    ACTIONS(669), 3,
      anon_sym_id,
      anon_sym_con_id,
      anon_sym_mark,
  [2845] = 3,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(673), 1,
      sym_value,
    STATE(272), 1,
      sym_workspace_number,
  [2855] = 3,
    ACTIONS(675), 1,
      aux_sym__statement_token1,
    ACTIONS(677), 1,
      anon_sym_px,
    STATE(166), 1,
      sym__px_unit,
  [2865] = 2,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(8), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
  [2873] = 3,
    ACTIONS(579), 1,
      aux_sym__criteria_value_token1,
    STATE(87), 1,
      aux_sym_criteria_repeat1,
    STATE(141), 1,
      sym__criteria_value,
  [2883] = 3,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(679), 1,
      sym_value,
    STATE(175), 1,
      sym__workspace_id,
  [2893] = 2,
    STATE(219), 1,
      sym_workspace_auto_back_and_forth_value,
    ACTIONS(681), 2,
      anon_sym_yes,
      anon_sym_no,
  [2901] = 3,
    ACTIONS(579), 1,
      aux_sym__criteria_value_token1,
    STATE(108), 1,
      aux_sym_criteria_repeat1,
    STATE(141), 1,
      sym__criteria_value,
  [2911] = 2,
    STATE(154), 1,
      sym_show_marks_value,
    ACTIONS(683), 2,
      anon_sym_yes,
      anon_sym_no,
  [2919] = 3,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(685), 1,
      sym_value,
    STATE(167), 1,
      sym__workspace_id,
  [2929] = 3,
    ACTIONS(646), 1,
      sym_identifier,
    ACTIONS(687), 1,
      aux_sym__statement_token1,
    STATE(109), 1,
      aux_sym_client_repeat1,
  [2939] = 3,
    ACTIONS(579), 1,
      aux_sym__criteria_value_token1,
    STATE(106), 1,
      aux_sym_criteria_repeat1,
    STATE(141), 1,
      sym__criteria_value,
  [2949] = 2,
    ACTIONS(689), 1,
      anon_sym_ppt,
    STATE(283), 1,
      sym__ppt_unit,
  [2956] = 2,
    ACTIONS(691), 1,
      aux_sym__statement_token1,
    ACTIONS(693), 1,
      sym_number,
  [2963] = 2,
    ACTIONS(695), 1,
      aux_sym__statement_token1,
    ACTIONS(697), 1,
      anon_sym_output,
  [2970] = 2,
    ACTIONS(699), 1,
      aux_sym__statement_token1,
    ACTIONS(701), 1,
      sym_identifier,
  [2977] = 1,
    ACTIONS(703), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [2982] = 2,
    ACTIONS(705), 1,
      aux_sym__statement_token1,
    ACTIONS(707), 1,
      sym_identifier,
  [2989] = 2,
    ACTIONS(709), 1,
      aux_sym__statement_token1,
    ACTIONS(711), 1,
      anon_sym_output,
  [2996] = 2,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym_mode_name,
  [3003] = 2,
    ACTIONS(715), 1,
      aux_sym__statement_token1,
    ACTIONS(717), 1,
      sym_number,
  [3010] = 2,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_mode_body,
  [3017] = 2,
    ACTIONS(721), 1,
      sym_identifier,
    ACTIONS(723), 1,
      sym_number,
  [3024] = 2,
    ACTIONS(725), 1,
      anon_sym_px,
    STATE(145), 1,
      sym__px_unit,
  [3031] = 1,
    ACTIONS(727), 2,
      anon_sym_RBRACK,
      aux_sym__criteria_value_token1,
  [3036] = 2,
    ACTIONS(729), 1,
      aux_sym__statement_token1,
    ACTIONS(731), 1,
      sym_number,
  [3043] = 2,
    ACTIONS(733), 1,
      sym_identifier,
    ACTIONS(735), 1,
      sym_value,
  [3050] = 2,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      sym_mode_name,
  [3057] = 2,
    ACTIONS(737), 1,
      sym_number,
    ACTIONS(739), 1,
      anon_sym_or,
  [3064] = 2,
    ACTIONS(741), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(743), 1,
      sym_value,
  [3071] = 2,
    ACTIONS(745), 1,
      anon_sym_ppt,
    STATE(285), 1,
      sym__ppt_unit,
  [3078] = 2,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    STATE(201), 1,
      sym_criteria,
  [3085] = 1,
    ACTIONS(749), 2,
      anon_sym_width,
      anon_sym_height,
  [3090] = 2,
    ACTIONS(751), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(753), 1,
      sym_value,
  [3097] = 2,
    ACTIONS(755), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_criteria,
  [3104] = 2,
    ACTIONS(757), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_mode_name,
  [3111] = 2,
    ACTIONS(759), 1,
      sym_number,
    STATE(161), 1,
      sym_font_size,
  [3118] = 1,
    ACTIONS(761), 1,
      aux_sym__statement_token1,
  [3122] = 1,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
  [3126] = 1,
    ACTIONS(765), 1,
      aux_sym__statement_token1,
  [3130] = 1,
    ACTIONS(767), 1,
      sym_number,
  [3134] = 1,
    ACTIONS(769), 1,
      aux_sym__statement_token1,
  [3138] = 1,
    ACTIONS(771), 1,
      aux_sym__statement_token1,
  [3142] = 1,
    ACTIONS(773), 1,
      aux_sym__statement_token1,
  [3146] = 1,
    ACTIONS(775), 1,
      aux_sym__statement_token1,
  [3150] = 1,
    ACTIONS(777), 1,
      anon_sym_LBRACE,
  [3154] = 1,
    ACTIONS(779), 1,
      aux_sym__statement_token1,
  [3158] = 1,
    ACTIONS(781), 1,
      aux_sym__statement_token1,
  [3162] = 1,
    ACTIONS(783), 1,
      aux_sym__statement_token1,
  [3166] = 1,
    ACTIONS(785), 1,
      aux_sym__statement_token1,
  [3170] = 1,
    ACTIONS(787), 1,
      aux_sym__statement_token1,
  [3174] = 1,
    ACTIONS(789), 1,
      aux_sym__statement_token1,
  [3178] = 1,
    ACTIONS(791), 1,
      aux_sym__statement_token1,
  [3182] = 1,
    ACTIONS(793), 1,
      aux_sym__statement_token1,
  [3186] = 1,
    ACTIONS(795), 1,
      sym_quoted_string,
  [3190] = 1,
    ACTIONS(791), 1,
      aux_sym__statement_token1,
  [3194] = 1,
    ACTIONS(797), 1,
      sym_value,
  [3198] = 1,
    ACTIONS(799), 1,
      aux_sym__statement_token1,
  [3202] = 1,
    ACTIONS(801), 1,
      aux_sym__statement_token1,
  [3206] = 1,
    ACTIONS(803), 1,
      aux_sym__statement_token1,
  [3210] = 1,
    ACTIONS(805), 1,
      aux_sym__statement_token1,
  [3214] = 1,
    ACTIONS(807), 1,
      aux_sym__statement_token1,
  [3218] = 1,
    ACTIONS(809), 1,
      aux_sym__statement_token1,
  [3222] = 1,
    ACTIONS(811), 1,
      aux_sym__statement_token1,
  [3226] = 1,
    ACTIONS(567), 1,
      aux_sym__statement_token1,
  [3230] = 1,
    ACTIONS(813), 1,
      aux_sym__statement_token1,
  [3234] = 1,
    ACTIONS(815), 1,
      aux_sym__statement_token1,
  [3238] = 1,
    ACTIONS(817), 1,
      aux_sym__statement_token1,
  [3242] = 1,
    ACTIONS(819), 1,
      aux_sym__statement_token1,
  [3246] = 1,
    ACTIONS(821), 1,
      aux_sym__statement_token1,
  [3250] = 1,
    ACTIONS(823), 1,
      aux_sym__statement_token1,
  [3254] = 1,
    ACTIONS(825), 1,
      aux_sym__statement_token1,
  [3258] = 1,
    ACTIONS(827), 1,
      aux_sym__statement_token1,
  [3262] = 1,
    ACTIONS(829), 1,
      aux_sym__statement_token1,
  [3266] = 1,
    ACTIONS(831), 1,
      sym_floating_size_op,
  [3270] = 1,
    ACTIONS(833), 1,
      aux_sym__statement_token1,
  [3274] = 1,
    ACTIONS(835), 1,
      aux_sym__statement_token1,
  [3278] = 1,
    ACTIONS(837), 1,
      aux_sym__statement_token1,
  [3282] = 1,
    ACTIONS(839), 1,
      anon_sym_with,
  [3286] = 1,
    ACTIONS(841), 1,
      aux_sym__statement_token1,
  [3290] = 1,
    ACTIONS(843), 1,
      aux_sym__statement_token1,
  [3294] = 1,
    ACTIONS(845), 1,
      aux_sym__statement_token1,
  [3298] = 1,
    ACTIONS(847), 1,
      aux_sym__statement_token1,
  [3302] = 1,
    ACTIONS(849), 1,
      aux_sym__statement_token1,
  [3306] = 1,
    ACTIONS(851), 1,
      aux_sym__statement_token1,
  [3310] = 1,
    ACTIONS(853), 1,
      anon_sym_positioncenter,
  [3314] = 1,
    ACTIONS(855), 1,
      aux_sym__statement_token1,
  [3318] = 1,
    ACTIONS(857), 1,
      aux_sym__statement_token1,
  [3322] = 1,
    ACTIONS(859), 1,
      aux_sym__statement_token1,
  [3326] = 1,
    ACTIONS(861), 1,
      aux_sym__statement_token1,
  [3330] = 1,
    ACTIONS(863), 1,
      aux_sym__statement_token1,
  [3334] = 1,
    ACTIONS(865), 1,
      aux_sym__statement_token1,
  [3338] = 1,
    ACTIONS(470), 1,
      aux_sym__statement_token1,
  [3342] = 1,
    ACTIONS(867), 1,
      anon_sym_ms,
  [3346] = 1,
    ACTIONS(869), 1,
      aux_sym__statement_token1,
  [3350] = 1,
    ACTIONS(871), 1,
      aux_sym__statement_token1,
  [3354] = 1,
    ACTIONS(873), 1,
      aux_sym__statement_token1,
  [3358] = 1,
    ACTIONS(875), 1,
      aux_sym__statement_token1,
  [3362] = 1,
    ACTIONS(877), 1,
      aux_sym__statement_token1,
  [3366] = 1,
    ACTIONS(879), 1,
      aux_sym__statement_token1,
  [3370] = 1,
    ACTIONS(881), 1,
      aux_sym__statement_token1,
  [3374] = 1,
    ACTIONS(883), 1,
      aux_sym__statement_token1,
  [3378] = 1,
    ACTIONS(885), 1,
      aux_sym__statement_token1,
  [3382] = 1,
    ACTIONS(887), 1,
      aux_sym__statement_token1,
  [3386] = 1,
    ACTIONS(889), 1,
      aux_sym__statement_token1,
  [3390] = 1,
    ACTIONS(891), 1,
      aux_sym__statement_token1,
  [3394] = 1,
    ACTIONS(893), 1,
      aux_sym__statement_token1,
  [3398] = 1,
    ACTIONS(895), 1,
      aux_sym__statement_token1,
  [3402] = 1,
    ACTIONS(897), 1,
      sym_keymap_trigger,
  [3406] = 1,
    ACTIONS(899), 1,
      aux_sym__statement_token1,
  [3410] = 1,
    ACTIONS(901), 1,
      anon_sym_LBRACE,
  [3414] = 1,
    ACTIONS(903), 1,
      sym_identifier,
  [3418] = 1,
    ACTIONS(905), 1,
      aux_sym__statement_token1,
  [3422] = 1,
    ACTIONS(907), 1,
      aux_sym__statement_token1,
  [3426] = 1,
    ACTIONS(909), 1,
      aux_sym__statement_token1,
  [3430] = 1,
    ACTIONS(911), 1,
      sym_set_resource_fallback,
  [3434] = 1,
    ACTIONS(913), 1,
      aux_sym__statement_token1,
  [3438] = 1,
    ACTIONS(915), 1,
      aux_sym__statement_token1,
  [3442] = 1,
    ACTIONS(917), 1,
      aux_sym__statement_token1,
  [3446] = 1,
    ACTIONS(919), 1,
      aux_sym__statement_token1,
  [3450] = 1,
    ACTIONS(921), 1,
      aux_sym__statement_token1,
  [3454] = 1,
    ACTIONS(923), 1,
      aux_sym__statement_token1,
  [3458] = 1,
    ACTIONS(925), 1,
      aux_sym__statement_token1,
  [3462] = 1,
    ACTIONS(927), 1,
      aux_sym__statement_token1,
  [3466] = 1,
    ACTIONS(927), 1,
      aux_sym__statement_token1,
  [3470] = 1,
    ACTIONS(929), 1,
      sym_identifier,
  [3474] = 1,
    ACTIONS(931), 1,
      sym_number,
  [3478] = 1,
    ACTIONS(933), 1,
      aux_sym__statement_token1,
  [3482] = 1,
    ACTIONS(935), 1,
      sym_number,
  [3486] = 1,
    ACTIONS(937), 1,
      aux_sym__statement_token1,
  [3490] = 1,
    ACTIONS(408), 1,
      anon_sym_number,
  [3494] = 1,
    ACTIONS(939), 1,
      aux_sym__statement_token1,
  [3498] = 1,
    ACTIONS(941), 1,
      aux_sym__statement_token1,
  [3502] = 1,
    ACTIONS(943), 1,
      aux_sym__statement_token1,
  [3506] = 1,
    ACTIONS(945), 1,
      aux_sym__statement_token1,
  [3510] = 1,
    ACTIONS(947), 1,
      aux_sym__statement_token1,
  [3514] = 1,
    ACTIONS(949), 1,
      aux_sym__statement_token1,
  [3518] = 1,
    ACTIONS(951), 1,
      aux_sym__statement_token1,
  [3522] = 1,
    ACTIONS(953), 1,
      aux_sym__statement_token1,
  [3526] = 1,
    ACTIONS(621), 1,
      aux_sym__statement_token1,
  [3530] = 1,
    ACTIONS(955), 1,
      aux_sym__statement_token1,
  [3534] = 1,
    ACTIONS(957), 1,
      aux_sym__statement_token1,
  [3538] = 1,
    ACTIONS(959), 1,
      aux_sym__statement_token1,
  [3542] = 1,
    ACTIONS(961), 1,
      aux_sym__statement_token1,
  [3546] = 1,
    ACTIONS(963), 1,
      sym_value,
  [3550] = 1,
    ACTIONS(965), 1,
      aux_sym__statement_token1,
  [3554] = 1,
    ACTIONS(967), 1,
      sym_value,
  [3558] = 1,
    ACTIONS(969), 1,
      aux_sym__statement_token1,
  [3562] = 1,
    ACTIONS(971), 1,
      sym_include_source,
  [3566] = 1,
    ACTIONS(973), 1,
      sym_value,
  [3570] = 1,
    ACTIONS(975), 1,
      aux_sym__statement_token1,
  [3574] = 1,
    ACTIONS(977), 1,
      anon_sym_container,
  [3578] = 1,
    ACTIONS(979), 1,
      sym_value,
  [3582] = 1,
    ACTIONS(981), 1,
      aux_sym__statement_token1,
  [3586] = 1,
    ACTIONS(983), 1,
      aux_sym__statement_token1,
  [3590] = 1,
    ACTIONS(985), 1,
      aux_sym__statement_token1,
  [3594] = 1,
    ACTIONS(987), 1,
      aux_sym__statement_token1,
  [3598] = 1,
    ACTIONS(989), 1,
      aux_sym__statement_token1,
  [3602] = 1,
    ACTIONS(991), 1,
      anon_sym_toggle,
  [3606] = 1,
    ACTIONS(993), 1,
      sym_number,
  [3610] = 1,
    ACTIONS(995), 1,
      aux_sym__statement_token1,
  [3614] = 1,
    ACTIONS(997), 1,
      aux_sym__statement_token1,
  [3618] = 1,
    ACTIONS(999), 1,
      aux_sym__statement_token1,
  [3622] = 1,
    ACTIONS(1001), 1,
      aux_sym__statement_token1,
  [3626] = 1,
    ACTIONS(1003), 1,
      aux_sym__statement_token1,
  [3630] = 1,
    ACTIONS(1005), 1,
      sym_number,
  [3634] = 1,
    ACTIONS(1007), 1,
      aux_sym__statement_token1,
  [3638] = 1,
    ACTIONS(1009), 1,
      aux_sym__statement_token1,
  [3642] = 1,
    ACTIONS(1011), 1,
      aux_sym__statement_token1,
  [3646] = 1,
    ACTIONS(1013), 1,
      anon_sym_DOT,
  [3650] = 1,
    ACTIONS(1015), 1,
      sym_set_resource,
  [3654] = 1,
    ACTIONS(777), 1,
      aux_sym__statement_token1,
  [3658] = 1,
    ACTIONS(331), 1,
      aux_sym__statement_token1,
  [3662] = 1,
    ACTIONS(901), 1,
      aux_sym__statement_token1,
  [3666] = 1,
    ACTIONS(1017), 1,
      sym_value,
  [3670] = 1,
    ACTIONS(1019), 1,
      aux_sym__statement_token1,
  [3674] = 1,
    ACTIONS(1021), 1,
      aux_sym__statement_token1,
  [3678] = 1,
    ACTIONS(1023), 1,
      aux_sym__statement_token1,
  [3682] = 1,
    ACTIONS(1025), 1,
      aux_sym__statement_token1,
  [3686] = 1,
    ACTIONS(1027), 1,
      sym_font_name,
  [3690] = 1,
    ACTIONS(1029), 1,
      aux_sym__statement_token1,
  [3694] = 1,
    ACTIONS(1031), 1,
      sym_number,
  [3698] = 1,
    ACTIONS(1033), 1,
      aux_sym__statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 371,
  [SMALL_STATE(12)] = 462,
  [SMALL_STATE(13)] = 553,
  [SMALL_STATE(14)] = 644,
  [SMALL_STATE(15)] = 735,
  [SMALL_STATE(16)] = 823,
  [SMALL_STATE(17)] = 911,
  [SMALL_STATE(18)] = 956,
  [SMALL_STATE(19)] = 1001,
  [SMALL_STATE(20)] = 1080,
  [SMALL_STATE(21)] = 1115,
  [SMALL_STATE(22)] = 1147,
  [SMALL_STATE(23)] = 1175,
  [SMALL_STATE(24)] = 1203,
  [SMALL_STATE(25)] = 1231,
  [SMALL_STATE(26)] = 1257,
  [SMALL_STATE(27)] = 1283,
  [SMALL_STATE(28)] = 1311,
  [SMALL_STATE(29)] = 1339,
  [SMALL_STATE(30)] = 1367,
  [SMALL_STATE(31)] = 1395,
  [SMALL_STATE(32)] = 1423,
  [SMALL_STATE(33)] = 1451,
  [SMALL_STATE(34)] = 1499,
  [SMALL_STATE(35)] = 1541,
  [SMALL_STATE(36)] = 1582,
  [SMALL_STATE(37)] = 1623,
  [SMALL_STATE(38)] = 1661,
  [SMALL_STATE(39)] = 1699,
  [SMALL_STATE(40)] = 1734,
  [SMALL_STATE(41)] = 1757,
  [SMALL_STATE(42)] = 1792,
  [SMALL_STATE(43)] = 1827,
  [SMALL_STATE(44)] = 1862,
  [SMALL_STATE(45)] = 1885,
  [SMALL_STATE(46)] = 1905,
  [SMALL_STATE(47)] = 1922,
  [SMALL_STATE(48)] = 1956,
  [SMALL_STATE(49)] = 1982,
  [SMALL_STATE(50)] = 2006,
  [SMALL_STATE(51)] = 2023,
  [SMALL_STATE(52)] = 2040,
  [SMALL_STATE(53)] = 2057,
  [SMALL_STATE(54)] = 2073,
  [SMALL_STATE(55)] = 2093,
  [SMALL_STATE(56)] = 2109,
  [SMALL_STATE(57)] = 2123,
  [SMALL_STATE(58)] = 2139,
  [SMALL_STATE(59)] = 2159,
  [SMALL_STATE(60)] = 2174,
  [SMALL_STATE(61)] = 2197,
  [SMALL_STATE(62)] = 2218,
  [SMALL_STATE(63)] = 2233,
  [SMALL_STATE(64)] = 2246,
  [SMALL_STATE(65)] = 2260,
  [SMALL_STATE(66)] = 2274,
  [SMALL_STATE(67)] = 2286,
  [SMALL_STATE(68)] = 2304,
  [SMALL_STATE(69)] = 2324,
  [SMALL_STATE(70)] = 2337,
  [SMALL_STATE(71)] = 2346,
  [SMALL_STATE(72)] = 2363,
  [SMALL_STATE(73)] = 2375,
  [SMALL_STATE(74)] = 2389,
  [SMALL_STATE(75)] = 2401,
  [SMALL_STATE(76)] = 2413,
  [SMALL_STATE(77)] = 2425,
  [SMALL_STATE(78)] = 2439,
  [SMALL_STATE(79)] = 2449,
  [SMALL_STATE(80)] = 2457,
  [SMALL_STATE(81)] = 2471,
  [SMALL_STATE(82)] = 2481,
  [SMALL_STATE(83)] = 2491,
  [SMALL_STATE(84)] = 2501,
  [SMALL_STATE(85)] = 2513,
  [SMALL_STATE(86)] = 2522,
  [SMALL_STATE(87)] = 2533,
  [SMALL_STATE(88)] = 2546,
  [SMALL_STATE(89)] = 2555,
  [SMALL_STATE(90)] = 2564,
  [SMALL_STATE(91)] = 2573,
  [SMALL_STATE(92)] = 2582,
  [SMALL_STATE(93)] = 2591,
  [SMALL_STATE(94)] = 2600,
  [SMALL_STATE(95)] = 2609,
  [SMALL_STATE(96)] = 2620,
  [SMALL_STATE(97)] = 2633,
  [SMALL_STATE(98)] = 2642,
  [SMALL_STATE(99)] = 2653,
  [SMALL_STATE(100)] = 2664,
  [SMALL_STATE(101)] = 2677,
  [SMALL_STATE(102)] = 2688,
  [SMALL_STATE(103)] = 2697,
  [SMALL_STATE(104)] = 2708,
  [SMALL_STATE(105)] = 2717,
  [SMALL_STATE(106)] = 2728,
  [SMALL_STATE(107)] = 2741,
  [SMALL_STATE(108)] = 2752,
  [SMALL_STATE(109)] = 2765,
  [SMALL_STATE(110)] = 2775,
  [SMALL_STATE(111)] = 2785,
  [SMALL_STATE(112)] = 2793,
  [SMALL_STATE(113)] = 2803,
  [SMALL_STATE(114)] = 2813,
  [SMALL_STATE(115)] = 2821,
  [SMALL_STATE(116)] = 2831,
  [SMALL_STATE(117)] = 2839,
  [SMALL_STATE(118)] = 2845,
  [SMALL_STATE(119)] = 2855,
  [SMALL_STATE(120)] = 2865,
  [SMALL_STATE(121)] = 2873,
  [SMALL_STATE(122)] = 2883,
  [SMALL_STATE(123)] = 2893,
  [SMALL_STATE(124)] = 2901,
  [SMALL_STATE(125)] = 2911,
  [SMALL_STATE(126)] = 2919,
  [SMALL_STATE(127)] = 2929,
  [SMALL_STATE(128)] = 2939,
  [SMALL_STATE(129)] = 2949,
  [SMALL_STATE(130)] = 2956,
  [SMALL_STATE(131)] = 2963,
  [SMALL_STATE(132)] = 2970,
  [SMALL_STATE(133)] = 2977,
  [SMALL_STATE(134)] = 2982,
  [SMALL_STATE(135)] = 2989,
  [SMALL_STATE(136)] = 2996,
  [SMALL_STATE(137)] = 3003,
  [SMALL_STATE(138)] = 3010,
  [SMALL_STATE(139)] = 3017,
  [SMALL_STATE(140)] = 3024,
  [SMALL_STATE(141)] = 3031,
  [SMALL_STATE(142)] = 3036,
  [SMALL_STATE(143)] = 3043,
  [SMALL_STATE(144)] = 3050,
  [SMALL_STATE(145)] = 3057,
  [SMALL_STATE(146)] = 3064,
  [SMALL_STATE(147)] = 3071,
  [SMALL_STATE(148)] = 3078,
  [SMALL_STATE(149)] = 3085,
  [SMALL_STATE(150)] = 3090,
  [SMALL_STATE(151)] = 3097,
  [SMALL_STATE(152)] = 3104,
  [SMALL_STATE(153)] = 3111,
  [SMALL_STATE(154)] = 3118,
  [SMALL_STATE(155)] = 3122,
  [SMALL_STATE(156)] = 3126,
  [SMALL_STATE(157)] = 3130,
  [SMALL_STATE(158)] = 3134,
  [SMALL_STATE(159)] = 3138,
  [SMALL_STATE(160)] = 3142,
  [SMALL_STATE(161)] = 3146,
  [SMALL_STATE(162)] = 3150,
  [SMALL_STATE(163)] = 3154,
  [SMALL_STATE(164)] = 3158,
  [SMALL_STATE(165)] = 3162,
  [SMALL_STATE(166)] = 3166,
  [SMALL_STATE(167)] = 3170,
  [SMALL_STATE(168)] = 3174,
  [SMALL_STATE(169)] = 3178,
  [SMALL_STATE(170)] = 3182,
  [SMALL_STATE(171)] = 3186,
  [SMALL_STATE(172)] = 3190,
  [SMALL_STATE(173)] = 3194,
  [SMALL_STATE(174)] = 3198,
  [SMALL_STATE(175)] = 3202,
  [SMALL_STATE(176)] = 3206,
  [SMALL_STATE(177)] = 3210,
  [SMALL_STATE(178)] = 3214,
  [SMALL_STATE(179)] = 3218,
  [SMALL_STATE(180)] = 3222,
  [SMALL_STATE(181)] = 3226,
  [SMALL_STATE(182)] = 3230,
  [SMALL_STATE(183)] = 3234,
  [SMALL_STATE(184)] = 3238,
  [SMALL_STATE(185)] = 3242,
  [SMALL_STATE(186)] = 3246,
  [SMALL_STATE(187)] = 3250,
  [SMALL_STATE(188)] = 3254,
  [SMALL_STATE(189)] = 3258,
  [SMALL_STATE(190)] = 3262,
  [SMALL_STATE(191)] = 3266,
  [SMALL_STATE(192)] = 3270,
  [SMALL_STATE(193)] = 3274,
  [SMALL_STATE(194)] = 3278,
  [SMALL_STATE(195)] = 3282,
  [SMALL_STATE(196)] = 3286,
  [SMALL_STATE(197)] = 3290,
  [SMALL_STATE(198)] = 3294,
  [SMALL_STATE(199)] = 3298,
  [SMALL_STATE(200)] = 3302,
  [SMALL_STATE(201)] = 3306,
  [SMALL_STATE(202)] = 3310,
  [SMALL_STATE(203)] = 3314,
  [SMALL_STATE(204)] = 3318,
  [SMALL_STATE(205)] = 3322,
  [SMALL_STATE(206)] = 3326,
  [SMALL_STATE(207)] = 3330,
  [SMALL_STATE(208)] = 3334,
  [SMALL_STATE(209)] = 3338,
  [SMALL_STATE(210)] = 3342,
  [SMALL_STATE(211)] = 3346,
  [SMALL_STATE(212)] = 3350,
  [SMALL_STATE(213)] = 3354,
  [SMALL_STATE(214)] = 3358,
  [SMALL_STATE(215)] = 3362,
  [SMALL_STATE(216)] = 3366,
  [SMALL_STATE(217)] = 3370,
  [SMALL_STATE(218)] = 3374,
  [SMALL_STATE(219)] = 3378,
  [SMALL_STATE(220)] = 3382,
  [SMALL_STATE(221)] = 3386,
  [SMALL_STATE(222)] = 3390,
  [SMALL_STATE(223)] = 3394,
  [SMALL_STATE(224)] = 3398,
  [SMALL_STATE(225)] = 3402,
  [SMALL_STATE(226)] = 3406,
  [SMALL_STATE(227)] = 3410,
  [SMALL_STATE(228)] = 3414,
  [SMALL_STATE(229)] = 3418,
  [SMALL_STATE(230)] = 3422,
  [SMALL_STATE(231)] = 3426,
  [SMALL_STATE(232)] = 3430,
  [SMALL_STATE(233)] = 3434,
  [SMALL_STATE(234)] = 3438,
  [SMALL_STATE(235)] = 3442,
  [SMALL_STATE(236)] = 3446,
  [SMALL_STATE(237)] = 3450,
  [SMALL_STATE(238)] = 3454,
  [SMALL_STATE(239)] = 3458,
  [SMALL_STATE(240)] = 3462,
  [SMALL_STATE(241)] = 3466,
  [SMALL_STATE(242)] = 3470,
  [SMALL_STATE(243)] = 3474,
  [SMALL_STATE(244)] = 3478,
  [SMALL_STATE(245)] = 3482,
  [SMALL_STATE(246)] = 3486,
  [SMALL_STATE(247)] = 3490,
  [SMALL_STATE(248)] = 3494,
  [SMALL_STATE(249)] = 3498,
  [SMALL_STATE(250)] = 3502,
  [SMALL_STATE(251)] = 3506,
  [SMALL_STATE(252)] = 3510,
  [SMALL_STATE(253)] = 3514,
  [SMALL_STATE(254)] = 3518,
  [SMALL_STATE(255)] = 3522,
  [SMALL_STATE(256)] = 3526,
  [SMALL_STATE(257)] = 3530,
  [SMALL_STATE(258)] = 3534,
  [SMALL_STATE(259)] = 3538,
  [SMALL_STATE(260)] = 3542,
  [SMALL_STATE(261)] = 3546,
  [SMALL_STATE(262)] = 3550,
  [SMALL_STATE(263)] = 3554,
  [SMALL_STATE(264)] = 3558,
  [SMALL_STATE(265)] = 3562,
  [SMALL_STATE(266)] = 3566,
  [SMALL_STATE(267)] = 3570,
  [SMALL_STATE(268)] = 3574,
  [SMALL_STATE(269)] = 3578,
  [SMALL_STATE(270)] = 3582,
  [SMALL_STATE(271)] = 3586,
  [SMALL_STATE(272)] = 3590,
  [SMALL_STATE(273)] = 3594,
  [SMALL_STATE(274)] = 3598,
  [SMALL_STATE(275)] = 3602,
  [SMALL_STATE(276)] = 3606,
  [SMALL_STATE(277)] = 3610,
  [SMALL_STATE(278)] = 3614,
  [SMALL_STATE(279)] = 3618,
  [SMALL_STATE(280)] = 3622,
  [SMALL_STATE(281)] = 3626,
  [SMALL_STATE(282)] = 3630,
  [SMALL_STATE(283)] = 3634,
  [SMALL_STATE(284)] = 3638,
  [SMALL_STATE(285)] = 3642,
  [SMALL_STATE(286)] = 3646,
  [SMALL_STATE(287)] = 3650,
  [SMALL_STATE(288)] = 3654,
  [SMALL_STATE(289)] = 3658,
  [SMALL_STATE(290)] = 3662,
  [SMALL_STATE(291)] = 3666,
  [SMALL_STATE(292)] = 3670,
  [SMALL_STATE(293)] = 3674,
  [SMALL_STATE(294)] = 3678,
  [SMALL_STATE(295)] = 3682,
  [SMALL_STATE(296)] = 3686,
  [SMALL_STATE(297)] = 3690,
  [SMALL_STATE(298)] = 3694,
  [SMALL_STATE(299)] = 3698,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 14),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(45),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(43),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(47),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(146),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(88),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(136),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(248),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(93),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(19),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(284),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(71),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(268),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(33),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(275),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(49),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(69),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(91),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 2, 0, 26), SHIFT_REPEAT(92),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 25),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5, 0, 30),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 20),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_criteria, 3, 0, 20),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 24),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 24),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat2, 1, 0, 16),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binding_repeat2, 1, 0, 16),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 28),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 28),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 8),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 8),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 29),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 29),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 4, 0, 31),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 4, 0, 31),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gaps_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gaps_repeat1, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps_option, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_output, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__focus_output_repeat1, 2, 0, 0),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__focus_output_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_value, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_value, 2, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_layout_value_repeat1, 2, 0, 0),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_layout_value_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_mode, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_mode, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_amount, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_amount, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_flags, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_position, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tiling_drag_value_repeat1, 2, 0, 0),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tiling_drag_value_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resize_set, 2, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__resize_set_repeat1, 2, 0, 0),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__resize_set_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__resize_set_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_value, 1, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 21),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 21), SHIFT_REPEAT(116),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mode_name_repeat1, 2, 0, 0),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mode_name_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_position, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__resize_set_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__move_position_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__move_position_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__resize_set_repeat1, 3, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__resize_set_repeat1, 3, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 4, 0, 19),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_directional, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 27),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 2, 0, 27), SHIFT_REPEAT(134),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__criteria_value, 1, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps, 3, 0, 7),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 3, 0, 10),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border_value, 1, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_border_value, 1, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_id, 1, 0, 2),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__workspace_id, 1, 0, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__criteria_value, 3, 0, 7),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 1, 0, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 1, 0, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 1, 0, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 2, 0, 5),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 1, 0, 12),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_amount, 2, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_amount, 2, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks, 2, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_borders_value, 1, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_borders, 2, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_gaps_value, 1, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_name, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_display_urgency_hint, 3, 0, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_smart_gaps, 2, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 17),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gaps, 4, 0, 7),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 3, 0, 18),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_assign_output, 3, 0, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_switch, 2, 0, 9),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 6),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 2, 0, 9),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_output, 2, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_from_resource, 4, 0, 22),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_value, 1, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 2, 0, 3),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_value, 1, 0, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3, 0, 11),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 3, 0, 11),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier, 2, 0, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resize, 2, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resize_value, 1, 0, 23),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resize_value, 1, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag, 2, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tiling_drag_value, 1, 0, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders_value, 1, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_show_marks_value, 1, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 2, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_focus, 2, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation_value, 1, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders, 2, 0, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 2, 0, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_value, 1, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_mode, 2, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_on_window_activation, 2, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout, 2, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth_value, 1, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_value, 1, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 2, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_value, 1, 0, 0),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating, 2, 0, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky_value, 1, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sticky, 2, 0, 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_auto_back_and_forth, 2, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama_value, 1, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_size, 4, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_xinerama, 2, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping_value, 1, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_wrapping, 2, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font_size, 2, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_name, 3, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 1, 0, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_workspace, 2, 0, 8),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tiling_drag_swap, 2, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_value, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus, 3, 0, 7),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 13),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace, 2, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_value, 1, 0, 1),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen_value, 1, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align_value, 1, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popup_during_fullscreen, 2, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 3, 0, 7),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_output, 2, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mouse_warping_value, 1, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mouse_warping, 2, 0, 0),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_center, 2, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse_value, 1, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align, 2, 0, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_directional, 2, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_focus_follows_mouse, 2, 0, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipc_socket, 2, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 2, 0, 4),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 2, 0, 4),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_number, 1, 0, 2),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_number, 1, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_workspace, 3, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 4, 0, 32),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout_value, 1, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout, 2, 0, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation_value, 1, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swap, 5, 0, 33),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 5, 0, 34),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation, 2, 0, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resize_grow_shrink, 6, 0, 35),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resize_grow_shrink, 7, 0, 36),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tiling_drag_swap, 2, 0, 8),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 14),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 3, 0, 15),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__focus_workspace, 2, 0, 0),
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
