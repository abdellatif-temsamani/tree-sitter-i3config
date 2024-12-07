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
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  aux_sym__statement_token1 = 1,
  sym_comment = 2,
  anon_sym_ipc_DASHsocket = 3,
  anon_sym_client_DOT = 4,
  anon_sym_focused = 5,
  anon_sym_focused_inactive = 6,
  anon_sym_unfocused = 7,
  anon_sym_urgent = 8,
  anon_sym_placeholder = 9,
  anon_sym_background = 10,
  anon_sym_workspace = 11,
  anon_sym_output = 12,
  anon_sym_exec = 13,
  anon_sym_DASH_DASHno_DASHstartup_DASHid = 14,
  anon_sym_exec_always = 15,
  anon_sym_assign = 16,
  anon_sym_u2192 = 17,
  anon_sym_number = 18,
  anon_sym_left = 19,
  anon_sym_right = 20,
  anon_sym_up = 21,
  anon_sym_down = 22,
  anon_sym_primary = 23,
  anon_sym_nonprimary = 24,
  anon_sym_set_from_resource = 25,
  sym_set_resource = 26,
  sym_set_resource_fallback = 27,
  aux_sym_set_token1 = 28,
  anon_sym_no_focus = 29,
  anon_sym_for_window = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  sym_all_criteria = 33,
  sym_floating_criteria = 34,
  anon_sym_class_EQ = 35,
  anon_sym_window_role_EQ = 36,
  anon_sym_title_EQ = 37,
  anon_sym_hide_edge_borders = 38,
  anon_sym_none = 39,
  anon_sym_vertical = 40,
  anon_sym_horizontal = 41,
  anon_sym_both = 42,
  anon_sym_smart = 43,
  anon_sym_smart_no_gaps = 44,
  anon_sym_default_floating_border = 45,
  anon_sym_default_border = 46,
  anon_sym_border = 47,
  anon_sym_normal = 48,
  anon_sym_pixel = 49,
  anon_sym_title_align = 50,
  anon_sym_center = 51,
  anon_sym_workspace_layout = 52,
  anon_sym_default = 53,
  anon_sym_stacking = 54,
  anon_sym_tabbed = 55,
  anon_sym_default_orientation = 56,
  anon_sym_auto = 57,
  anon_sym_include = 58,
  sym_include_source = 59,
  anon_sym_floating_modifier = 60,
  aux_sym_floating_modifier_value_token1 = 61,
  anon_sym_floating_minimum_size = 62,
  anon_sym_floating_maximum_size = 63,
  sym_floating_size_op = 64,
  anon_sym_bindsym = 65,
  anon_sym_bindcode = 66,
  sym_keymap_trigger = 67,
  anon_sym_DASH_DASHrelease = 68,
  anon_sym_DASH_DASHborder = 69,
  anon_sym_DASH_DASHwhole_DASHwindow = 70,
  anon_sym_DASH_DASHexclude_DASHtitlebar = 71,
  anon_sym_font = 72,
  sym_font_name = 73,
  anon_sym_mode = 74,
  sym_mode_name = 75,
  anon_sym_LBRACE = 76,
  anon_sym_RBRACE = 77,
  sym_variable = 78,
  sym_px_unit = 79,
  sym_ppt_unit = 80,
  sym_number = 81,
  sym_quoted_string = 82,
  sym_value = 83,
  sym_source_file = 84,
  sym__statement = 85,
  sym_ipc_socket = 86,
  sym_client = 87,
  sym_property = 88,
  sym_workspace = 89,
  sym_workspace_assign_output = 90,
  sym__workspace_id = 91,
  sym_exec = 92,
  sym_exec_always = 93,
  sym_assign = 94,
  sym_assign_workspace = 95,
  sym_assign_output = 96,
  sym__definition = 97,
  sym_set_from_resource = 98,
  sym_set = 99,
  sym_no_focus = 100,
  sym_for_window = 101,
  sym_criteria = 102,
  sym_class_criteria = 103,
  sym_window_role_criteria = 104,
  sym_title_criteria = 105,
  sym_hide_edge_borders = 106,
  sym_hide_edge_borders_value = 107,
  sym_border = 108,
  sym_border_value = 109,
  sym_title_align = 110,
  sym_title_align_value = 111,
  sym_workspace_layout = 112,
  sym_workspace_layout_value = 113,
  sym_default_orientation = 114,
  sym_default_orientation_value = 115,
  sym_include = 116,
  sym_floating_modifier = 117,
  sym_floating_modifier_value = 118,
  sym_floating_size = 119,
  sym_binding = 120,
  sym_keymap = 121,
  sym_keymap_flags = 122,
  sym_font = 123,
  sym_mode = 124,
  sym_mode_body = 125,
  sym_unit = 126,
  sym__value = 127,
  aux_sym_source_file_repeat1 = 128,
  aux_sym_client_repeat1 = 129,
  aux_sym_for_window_repeat1 = 130,
  aux_sym_for_window_repeat2 = 131,
  aux_sym_criteria_repeat1 = 132,
  aux_sym_binding_repeat1 = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [sym_comment] = "comment",
  [anon_sym_ipc_DASHsocket] = "ipc-socket",
  [anon_sym_client_DOT] = "client.",
  [anon_sym_focused] = "focused",
  [anon_sym_focused_inactive] = "focused_inactive",
  [anon_sym_unfocused] = "unfocused",
  [anon_sym_urgent] = "urgent",
  [anon_sym_placeholder] = "placeholder",
  [anon_sym_background] = "background",
  [anon_sym_workspace] = "workspace",
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
  [sym_all_criteria] = "all_criteria",
  [sym_floating_criteria] = "floating_criteria",
  [anon_sym_class_EQ] = "class=",
  [anon_sym_window_role_EQ] = "window_role=",
  [anon_sym_title_EQ] = "title=",
  [anon_sym_hide_edge_borders] = "hide_edge_borders",
  [anon_sym_none] = "none",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [anon_sym_both] = "both",
  [anon_sym_smart] = "smart",
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
  [sym_value] = "value",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
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
  [anon_sym_ipc_DASHsocket] = anon_sym_ipc_DASHsocket,
  [anon_sym_client_DOT] = anon_sym_client_DOT,
  [anon_sym_focused] = anon_sym_focused,
  [anon_sym_focused_inactive] = anon_sym_focused_inactive,
  [anon_sym_unfocused] = anon_sym_unfocused,
  [anon_sym_urgent] = anon_sym_urgent,
  [anon_sym_placeholder] = anon_sym_placeholder,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_workspace] = anon_sym_workspace,
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
  [sym_all_criteria] = sym_all_criteria,
  [sym_floating_criteria] = sym_floating_criteria,
  [anon_sym_class_EQ] = anon_sym_class_EQ,
  [anon_sym_window_role_EQ] = anon_sym_window_role_EQ,
  [anon_sym_title_EQ] = anon_sym_title_EQ,
  [anon_sym_hide_edge_borders] = anon_sym_hide_edge_borders,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_smart] = anon_sym_smart,
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
  [sym_value] = sym_value,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
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
  [anon_sym_urgent] = {
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
  [anon_sym_workspace] = {
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
  [sym_all_criteria] = {
    .visible = true,
    .named = true,
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
  [anon_sym_none] = {
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
  [anon_sym_smart] = {
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
  field_identifier = 5,
  field_mode = 6,
  field_name = 7,
  field_property = 8,
  field_reference_mode = 9,
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
  [field_identifier] = "identifier",
  [field_mode] = "mode",
  [field_name] = "name",
  [field_property] = "property",
  [field_reference_mode] = "reference_mode",
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
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 3},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 1},
  [18] = {.index = 26, .length = 1},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 3},
  [22] = {.index = 32, .length = 1},
  [23] = {.index = 33, .length = 6},
  [24] = {.index = 39, .length = 3},
  [25] = {.index = 42, .length = 1},
  [26] = {.index = 43, .length = 1},
  [27] = {.index = 44, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_property, 1},
  [1] =
    {field_identifier, 0},
  [2] =
    {field_command, 1},
  [3] =
    {field_value, 1},
  [4] =
    {field_mode, 1},
  [5] =
    {field_source, 1},
  [6] =
    {field_identifier, 2, .inherited = true},
    {field_property, 1},
  [8] =
    {field_command, 2},
  [9] =
    {field_identifier, 0, .inherited = true},
  [10] =
    {field_identifier, 1},
    {field_value, 2},
  [12] =
    {field_identifier, 0, .inherited = true},
    {field_reference_mode, 0, .inherited = true},
    {field_unit, 0, .inherited = true},
  [15] =
    {field_identifier, 2, .inherited = true},
    {field_reference_mode, 2, .inherited = true},
    {field_unit, 2, .inherited = true},
  [18] =
    {field_mode, 1},
    {field_value, 2},
  [20] =
    {field_name, 2},
  [21] =
    {field_body, 2},
    {field_name, 1},
  [23] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [25] =
    {field_class, 1},
  [26] =
    {field_window_role, 1},
  [27] =
    {field_title, 1},
  [28] =
    {field_identifier, 1, .inherited = true},
  [29] =
    {field_fallback, 3},
    {field_identifier, 1},
    {field_resource, 2},
  [32] =
    {field_unit, 0},
  [33] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
    {field_reference_mode, 0, .inherited = true},
    {field_reference_mode, 1, .inherited = true},
    {field_unit, 0, .inherited = true},
    {field_unit, 1, .inherited = true},
  [39] =
    {field_identifier, 3, .inherited = true},
    {field_reference_mode, 3, .inherited = true},
    {field_unit, 3, .inherited = true},
  [42] =
    {field_name, 3},
  [43] =
    {field_reference_mode, 1},
  [44] =
    {field_identifier, 4, .inherited = true},
    {field_reference_mode, 4, .inherited = true},
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
  [3] = 2,
  [4] = 4,
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
  [24] = 23,
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
  [35] = 27,
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
  [127] = 125,
  [128] = 128,
  [129] = 20,
  [130] = 117,
  [131] = 131,
  [132] = 132,
  [133] = 133,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(484);
      ADVANCE_MAP(
        '"', 1,
        '#', 486,
        '$', 476,
        '+', 475,
        '-', 15,
        '[', 518,
        ']', 519,
        'a', 247,
        'b', 47,
        'c', 142,
        'd', 130,
        'e', 459,
        'f', 253,
        'h', 209,
        'i', 26,
        'l', 143,
        'm', 329,
        'n', 313,
        'o', 433,
        'p', 223,
        'r', 210,
        's', 152,
        't', 49,
        'u', 294,
        'v', 144,
        'w', 225,
        'x', 554,
        '{', 568,
        '}', 569,
        0x2192, 504,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == '"') ADVANCE(565);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 485,
        '$', 476,
        'b', 338,
        'd', 180,
        'e', 462,
        'm', 329,
        'p', 345,
        '+', 475,
        '-', 475,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(565);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(576);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(566);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 4,
        '#', 514,
        '$', 476,
        '[', 518,
        ']', 519,
        'a', 246,
        'b', 338,
        'c', 260,
        'd', 180,
        'e', 462,
        'f', 275,
        'm', 329,
        'n', 432,
        'o', 433,
        'p', 345,
        't', 240,
        'w', 224,
        0x2192, 504,
        '+', 475,
        '-', 475,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(577);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(476);
      if (lookahead == '-') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(476);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(388);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(391);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(417);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(458);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(513);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(489);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(523);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(525);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(525);
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(524);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(456);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(186);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(199);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(390);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(370);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(376);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(396);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(341);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(343);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(499);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(490);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead == 't') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(129);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(322);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(237);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(331);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(522);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(543);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(365);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(530);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 205:
      if (lookahead == 'h') ADVANCE(402);
      END_STATE();
    case 206:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 'x') ADVANCE(571);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 242:
      if (lookahead == 'k') ADVANCE(196);
      END_STATE();
    case 243:
      if (lookahead == 'k') ADVANCE(386);
      END_STATE();
    case 244:
      if (lookahead == 'k') ADVANCE(172);
      END_STATE();
    case 245:
      if (lookahead == 'k') ADVANCE(230);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 276:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 281:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 282:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(545);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 345:
      if (lookahead == 'p') ADVANCE(398);
      if (lookahead == 'x') ADVANCE(571);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(439);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 432:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 433:
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 434:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 435:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 436:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 437:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 438:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 439:
      if (lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 440:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 441:
      if (lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 450:
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 451:
      if (lookahead == 'w') ADVANCE(517);
      END_STATE();
    case 452:
      if (lookahead == 'w') ADVANCE(560);
      END_STATE();
    case 453:
      if (lookahead == 'w') ADVANCE(276);
      END_STATE();
    case 454:
      if (lookahead == 'w') ADVANCE(288);
      END_STATE();
    case 455:
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 456:
      if (lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 457:
      if (lookahead == 'w') ADVANCE(54);
      END_STATE();
    case 458:
      if (lookahead == 'w') ADVANCE(235);
      END_STATE();
    case 459:
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 460:
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 461:
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 462:
      if (lookahead == 'x') ADVANCE(164);
      END_STATE();
    case 463:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 464:
      if (lookahead == 'y') ADVANCE(510);
      END_STATE();
    case 465:
      if (lookahead == 'y') ADVANCE(511);
      END_STATE();
    case 466:
      if (lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 467:
      if (lookahead == 'y') ADVANCE(383);
      END_STATE();
    case 468:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 469:
      if (lookahead == 'z') ADVANCE(335);
      END_STATE();
    case 470:
      if (lookahead == 'z') ADVANCE(140);
      END_STATE();
    case 471:
      if (lookahead == 'z') ADVANCE(141);
      END_STATE();
    case 472:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(472);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 473:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(473);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 474:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(474);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 475:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 476:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 477:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(548);
      END_STATE();
    case 478:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(481);
      END_STATE();
    case 479:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 480:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 481:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 482:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(477);
      END_STATE();
    case 483:
      if (eof) ADVANCE(484);
      ADVANCE_MAP(
        '"', 10,
        '#', 487,
        'a', 380,
        'b', 207,
        'c', 271,
        'd', 179,
        'e', 459,
        'f', 274,
        'h', 208,
        'i', 292,
        'm', 329,
        'n', 326,
        's', 151,
        't', 238,
        'w', 315,
        '}', 569,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_ipc_DASHsocket);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_client_DOT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_focused);
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_focused_inactive);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_unfocused);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_urgent);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_placeholder);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(259);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHstartup_DASHid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_primary);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_nonprimary);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_set_from_resource);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_set_resource);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_set_resource_fallback);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_set_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_no_focus);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_all_criteria);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_floating_criteria);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_floating_criteria);
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_class_EQ);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_window_role_EQ);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_title_EQ);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(305);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_smart_no_gaps);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_pixel);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_stacking);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_tabbed);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(548);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_floating_modifier_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_floating_size_op);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_DASH_DASHborder);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DASH_DASHwhole_DASHwindow);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DASH_DASHexclude_DASHtitlebar);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_mode_name);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_px_unit);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_ppt_unit);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(574);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'p') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 't') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(591);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 483},
  [2] = {.lex_state = 483},
  [3] = {.lex_state = 483},
  [4] = {.lex_state = 483},
  [5] = {.lex_state = 483},
  [6] = {.lex_state = 483},
  [7] = {.lex_state = 483},
  [8] = {.lex_state = 483},
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
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 129},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 483},
  [71] = {.lex_state = 483},
  [72] = {.lex_state = 483},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 472},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 472},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 472},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 473},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 474},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 472},
  [132] = {.lex_state = 472},
  [133] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_ipc_DASHsocket] = ACTIONS(1),
    [anon_sym_client_DOT] = ACTIONS(1),
    [anon_sym_focused] = ACTIONS(1),
    [anon_sym_focused_inactive] = ACTIONS(1),
    [anon_sym_unfocused] = ACTIONS(1),
    [anon_sym_urgent] = ACTIONS(1),
    [anon_sym_placeholder] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
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
    [sym_all_criteria] = ACTIONS(1),
    [sym_floating_criteria] = ACTIONS(1),
    [anon_sym_class_EQ] = ACTIONS(1),
    [anon_sym_window_role_EQ] = ACTIONS(1),
    [anon_sym_title_EQ] = ACTIONS(1),
    [anon_sym_hide_edge_borders] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_smart] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(96),
    [sym__statement] = STATE(4),
    [sym_ipc_socket] = STATE(117),
    [sym_client] = STATE(117),
    [sym_workspace] = STATE(117),
    [sym_exec] = STATE(117),
    [sym_exec_always] = STATE(117),
    [sym_assign] = STATE(117),
    [sym__definition] = STATE(117),
    [sym_set_from_resource] = STATE(117),
    [sym_set] = STATE(117),
    [sym_no_focus] = STATE(117),
    [sym_for_window] = STATE(117),
    [sym_hide_edge_borders] = STATE(117),
    [sym_border] = STATE(117),
    [sym_title_align] = STATE(117),
    [sym_workspace_layout] = STATE(117),
    [sym_default_orientation] = STATE(117),
    [sym_include] = STATE(117),
    [sym_floating_modifier] = STATE(117),
    [sym_floating_size] = STATE(117),
    [sym_binding] = STATE(117),
    [sym_font] = STATE(117),
    [sym_mode] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_ipc_DASHsocket] = ACTIONS(7),
    [anon_sym_client_DOT] = ACTIONS(9),
    [anon_sym_workspace] = ACTIONS(11),
    [anon_sym_exec] = ACTIONS(13),
    [anon_sym_exec_always] = ACTIONS(15),
    [anon_sym_assign] = ACTIONS(17),
    [anon_sym_set_from_resource] = ACTIONS(19),
    [aux_sym_set_token1] = ACTIONS(21),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_for_window] = ACTIONS(25),
    [anon_sym_hide_edge_borders] = ACTIONS(27),
    [anon_sym_default_floating_border] = ACTIONS(29),
    [anon_sym_default_border] = ACTIONS(29),
    [anon_sym_border] = ACTIONS(29),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(33),
    [anon_sym_default_orientation] = ACTIONS(35),
    [anon_sym_include] = ACTIONS(37),
    [anon_sym_floating_modifier] = ACTIONS(39),
    [anon_sym_floating_minimum_size] = ACTIONS(41),
    [anon_sym_floating_maximum_size] = ACTIONS(41),
    [anon_sym_bindsym] = ACTIONS(43),
    [anon_sym_bindcode] = ACTIONS(43),
    [anon_sym_font] = ACTIONS(45),
    [anon_sym_mode] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_ipc_DASHsocket,
    ACTIONS(55), 1,
      anon_sym_client_DOT,
    ACTIONS(58), 1,
      anon_sym_workspace,
    ACTIONS(61), 1,
      anon_sym_exec,
    ACTIONS(64), 1,
      anon_sym_exec_always,
    ACTIONS(67), 1,
      anon_sym_assign,
    ACTIONS(70), 1,
      anon_sym_set_from_resource,
    ACTIONS(73), 1,
      aux_sym_set_token1,
    ACTIONS(76), 1,
      anon_sym_no_focus,
    ACTIONS(79), 1,
      anon_sym_for_window,
    ACTIONS(82), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(88), 1,
      anon_sym_title_align,
    ACTIONS(91), 1,
      anon_sym_workspace_layout,
    ACTIONS(94), 1,
      anon_sym_default_orientation,
    ACTIONS(97), 1,
      anon_sym_include,
    ACTIONS(100), 1,
      anon_sym_floating_modifier,
    ACTIONS(109), 1,
      anon_sym_font,
    ACTIONS(112), 1,
      anon_sym_mode,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(106), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(85), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(130), 22,
      sym_ipc_socket,
      sym_client,
      sym_workspace,
      sym_exec,
      sym_exec_always,
      sym_assign,
      sym__definition,
      sym_set_from_resource,
      sym_set,
      sym_no_focus,
      sym_for_window,
      sym_hide_edge_borders,
      sym_border,
      sym_title_align,
      sym_workspace_layout,
      sym_default_orientation,
      sym_include,
      sym_floating_modifier,
      sym_floating_size,
      sym_binding,
      sym_font,
      sym_mode,
  [102] = 25,
    ACTIONS(52), 1,
      anon_sym_ipc_DASHsocket,
    ACTIONS(55), 1,
      anon_sym_client_DOT,
    ACTIONS(58), 1,
      anon_sym_workspace,
    ACTIONS(61), 1,
      anon_sym_exec,
    ACTIONS(64), 1,
      anon_sym_exec_always,
    ACTIONS(67), 1,
      anon_sym_assign,
    ACTIONS(70), 1,
      anon_sym_set_from_resource,
    ACTIONS(73), 1,
      aux_sym_set_token1,
    ACTIONS(76), 1,
      anon_sym_no_focus,
    ACTIONS(79), 1,
      anon_sym_for_window,
    ACTIONS(82), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(88), 1,
      anon_sym_title_align,
    ACTIONS(91), 1,
      anon_sym_workspace_layout,
    ACTIONS(94), 1,
      anon_sym_default_orientation,
    ACTIONS(97), 1,
      anon_sym_include,
    ACTIONS(100), 1,
      anon_sym_floating_modifier,
    ACTIONS(109), 1,
      anon_sym_font,
    ACTIONS(112), 1,
      anon_sym_mode,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(106), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(85), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(117), 22,
      sym_ipc_socket,
      sym_client,
      sym_workspace,
      sym_exec,
      sym_exec_always,
      sym_assign,
      sym__definition,
      sym_set_from_resource,
      sym_set,
      sym_no_focus,
      sym_for_window,
      sym_hide_edge_borders,
      sym_border,
      sym_title_align,
      sym_workspace_layout,
      sym_default_orientation,
      sym_include,
      sym_floating_modifier,
      sym_floating_size,
      sym_binding,
      sym_font,
      sym_mode,
  [204] = 25,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ipc_DASHsocket,
    ACTIONS(9), 1,
      anon_sym_client_DOT,
    ACTIONS(11), 1,
      anon_sym_workspace,
    ACTIONS(13), 1,
      anon_sym_exec,
    ACTIONS(15), 1,
      anon_sym_exec_always,
    ACTIONS(17), 1,
      anon_sym_assign,
    ACTIONS(19), 1,
      anon_sym_set_from_resource,
    ACTIONS(21), 1,
      aux_sym_set_token1,
    ACTIONS(23), 1,
      anon_sym_no_focus,
    ACTIONS(25), 1,
      anon_sym_for_window,
    ACTIONS(27), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(31), 1,
      anon_sym_title_align,
    ACTIONS(33), 1,
      anon_sym_workspace_layout,
    ACTIONS(35), 1,
      anon_sym_default_orientation,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(39), 1,
      anon_sym_floating_modifier,
    ACTIONS(45), 1,
      anon_sym_font,
    ACTIONS(47), 1,
      anon_sym_mode,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(43), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(29), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(117), 22,
      sym_ipc_socket,
      sym_client,
      sym_workspace,
      sym_exec,
      sym_exec_always,
      sym_assign,
      sym__definition,
      sym_set_from_resource,
      sym_set,
      sym_no_focus,
      sym_for_window,
      sym_hide_edge_borders,
      sym_border,
      sym_title_align,
      sym_workspace_layout,
      sym_default_orientation,
      sym_include,
      sym_floating_modifier,
      sym_floating_size,
      sym_binding,
      sym_font,
      sym_mode,
  [306] = 25,
    ACTIONS(7), 1,
      anon_sym_ipc_DASHsocket,
    ACTIONS(9), 1,
      anon_sym_client_DOT,
    ACTIONS(11), 1,
      anon_sym_workspace,
    ACTIONS(13), 1,
      anon_sym_exec,
    ACTIONS(15), 1,
      anon_sym_exec_always,
    ACTIONS(17), 1,
      anon_sym_assign,
    ACTIONS(19), 1,
      anon_sym_set_from_resource,
    ACTIONS(21), 1,
      aux_sym_set_token1,
    ACTIONS(23), 1,
      anon_sym_no_focus,
    ACTIONS(25), 1,
      anon_sym_for_window,
    ACTIONS(27), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(31), 1,
      anon_sym_title_align,
    ACTIONS(33), 1,
      anon_sym_workspace_layout,
    ACTIONS(35), 1,
      anon_sym_default_orientation,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(39), 1,
      anon_sym_floating_modifier,
    ACTIONS(45), 1,
      anon_sym_font,
    ACTIONS(47), 1,
      anon_sym_mode,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(43), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(29), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(130), 22,
      sym_ipc_socket,
      sym_client,
      sym_workspace,
      sym_exec,
      sym_exec_always,
      sym_assign,
      sym__definition,
      sym_set_from_resource,
      sym_set,
      sym_no_focus,
      sym_for_window,
      sym_hide_edge_borders,
      sym_border,
      sym_title_align,
      sym_workspace_layout,
      sym_default_orientation,
      sym_include,
      sym_floating_modifier,
      sym_floating_size,
      sym_binding,
      sym_font,
      sym_mode,
  [408] = 25,
    ACTIONS(7), 1,
      anon_sym_ipc_DASHsocket,
    ACTIONS(9), 1,
      anon_sym_client_DOT,
    ACTIONS(11), 1,
      anon_sym_workspace,
    ACTIONS(13), 1,
      anon_sym_exec,
    ACTIONS(15), 1,
      anon_sym_exec_always,
    ACTIONS(17), 1,
      anon_sym_assign,
    ACTIONS(19), 1,
      anon_sym_set_from_resource,
    ACTIONS(21), 1,
      aux_sym_set_token1,
    ACTIONS(23), 1,
      anon_sym_no_focus,
    ACTIONS(25), 1,
      anon_sym_for_window,
    ACTIONS(27), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(31), 1,
      anon_sym_title_align,
    ACTIONS(33), 1,
      anon_sym_workspace_layout,
    ACTIONS(35), 1,
      anon_sym_default_orientation,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(39), 1,
      anon_sym_floating_modifier,
    ACTIONS(45), 1,
      anon_sym_font,
    ACTIONS(47), 1,
      anon_sym_mode,
    ACTIONS(122), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(43), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(5), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(29), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(130), 22,
      sym_ipc_socket,
      sym_client,
      sym_workspace,
      sym_exec,
      sym_exec_always,
      sym_assign,
      sym__definition,
      sym_set_from_resource,
      sym_set,
      sym_no_focus,
      sym_for_window,
      sym_hide_edge_borders,
      sym_border,
      sym_title_align,
      sym_workspace_layout,
      sym_default_orientation,
      sym_include,
      sym_floating_modifier,
      sym_floating_size,
      sym_binding,
      sym_font,
      sym_mode,
  [510] = 2,
    ACTIONS(130), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(128), 25,
      ts_builtin_sym_end,
      sym_comment,
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
  [542] = 2,
    ACTIONS(130), 2,
      anon_sym_workspace,
      anon_sym_exec,
    ACTIONS(128), 25,
      sym_comment,
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
  [574] = 11,
    ACTIONS(132), 1,
      anon_sym_exec,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_mode,
    ACTIONS(138), 1,
      sym_variable,
    STATE(15), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(140), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(11), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(29), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [613] = 11,
    ACTIONS(132), 1,
      anon_sym_exec,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_mode,
    ACTIONS(138), 1,
      sym_variable,
    STATE(14), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(140), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(29), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [652] = 11,
    ACTIONS(132), 1,
      anon_sym_exec,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_mode,
    ACTIONS(138), 1,
      sym_variable,
    STATE(16), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(140), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(29), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [691] = 11,
    ACTIONS(132), 1,
      anon_sym_exec,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_mode,
    ACTIONS(138), 1,
      sym_variable,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(140), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(29), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [730] = 11,
    ACTIONS(132), 1,
      anon_sym_exec,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_mode,
    ACTIONS(138), 1,
      sym_variable,
    STATE(19), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(140), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(12), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(29), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [769] = 10,
    ACTIONS(13), 1,
      anon_sym_exec,
    ACTIONS(142), 1,
      aux_sym__statement_token1,
    ACTIONS(146), 1,
      anon_sym_mode,
    ACTIONS(148), 1,
      sym_variable,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(150), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(144), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [804] = 10,
    ACTIONS(13), 1,
      anon_sym_exec,
    ACTIONS(146), 1,
      anon_sym_mode,
    ACTIONS(148), 1,
      sym_variable,
    ACTIONS(152), 1,
      aux_sym__statement_token1,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(150), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(144), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [839] = 10,
    ACTIONS(13), 1,
      anon_sym_exec,
    ACTIONS(146), 1,
      anon_sym_mode,
    ACTIONS(148), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym__statement_token1,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(150), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(144), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [874] = 10,
    ACTIONS(156), 1,
      aux_sym__statement_token1,
    ACTIONS(158), 1,
      anon_sym_exec,
    ACTIONS(164), 1,
      anon_sym_mode,
    ACTIONS(167), 1,
      sym_variable,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(170), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(161), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [909] = 10,
    ACTIONS(13), 1,
      anon_sym_exec,
    ACTIONS(146), 1,
      anon_sym_mode,
    ACTIONS(148), 1,
      sym_variable,
    ACTIONS(173), 1,
      aux_sym__statement_token1,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(150), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(144), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [944] = 10,
    ACTIONS(13), 1,
      anon_sym_exec,
    ACTIONS(146), 1,
      anon_sym_mode,
    ACTIONS(148), 1,
      sym_variable,
    ACTIONS(154), 1,
      aux_sym__statement_token1,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(85), 1,
      sym_unit,
    ACTIONS(150), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(84), 2,
      sym_exec,
      sym_border,
    ACTIONS(144), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [979] = 1,
    ACTIONS(175), 13,
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
  [995] = 3,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(177), 8,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [1013] = 6,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(187), 1,
      anon_sym_class_EQ,
    ACTIONS(190), 1,
      anon_sym_window_role_EQ,
    ACTIONS(193), 1,
      anon_sym_title_EQ,
    ACTIONS(184), 2,
      sym_all_criteria,
      sym_floating_criteria,
    STATE(22), 4,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1036] = 6,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    ACTIONS(200), 1,
      anon_sym_class_EQ,
    ACTIONS(202), 1,
      anon_sym_window_role_EQ,
    ACTIONS(204), 1,
      anon_sym_title_EQ,
    ACTIONS(198), 2,
      sym_all_criteria,
      sym_floating_criteria,
    STATE(22), 4,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1059] = 6,
    ACTIONS(200), 1,
      anon_sym_class_EQ,
    ACTIONS(202), 1,
      anon_sym_window_role_EQ,
    ACTIONS(204), 1,
      anon_sym_title_EQ,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    ACTIONS(198), 2,
      sym_all_criteria,
      sym_floating_criteria,
    STATE(22), 4,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1082] = 1,
    ACTIONS(208), 9,
      anon_sym_exec,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [1094] = 2,
    ACTIONS(210), 1,
      aux_sym__statement_token1,
    ACTIONS(212), 8,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [1108] = 5,
    ACTIONS(200), 1,
      anon_sym_class_EQ,
    ACTIONS(202), 1,
      anon_sym_window_role_EQ,
    ACTIONS(204), 1,
      anon_sym_title_EQ,
    ACTIONS(214), 2,
      sym_all_criteria,
      sym_floating_criteria,
    STATE(23), 4,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1128] = 1,
    ACTIONS(216), 9,
      anon_sym_exec,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [1140] = 2,
    ACTIONS(218), 1,
      aux_sym__statement_token1,
    ACTIONS(220), 8,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [1154] = 2,
    ACTIONS(222), 1,
      aux_sym__statement_token1,
    ACTIONS(224), 8,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [1168] = 5,
    ACTIONS(226), 1,
      sym_keymap_trigger,
    ACTIONS(230), 1,
      sym_variable,
    STATE(13), 1,
      sym_keymap,
    STATE(37), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(228), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1188] = 2,
    ACTIONS(232), 1,
      aux_sym__statement_token1,
    ACTIONS(234), 8,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [1202] = 2,
    ACTIONS(236), 1,
      aux_sym__statement_token1,
    ACTIONS(238), 8,
      anon_sym_exec,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [1216] = 5,
    ACTIONS(226), 1,
      sym_keymap_trigger,
    ACTIONS(230), 1,
      sym_variable,
    STATE(9), 1,
      sym_keymap,
    STATE(31), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(228), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1236] = 5,
    ACTIONS(200), 1,
      anon_sym_class_EQ,
    ACTIONS(202), 1,
      anon_sym_window_role_EQ,
    ACTIONS(204), 1,
      anon_sym_title_EQ,
    ACTIONS(240), 2,
      sym_all_criteria,
      sym_floating_criteria,
    STATE(24), 4,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [1256] = 7,
    ACTIONS(242), 1,
      anon_sym_output,
    ACTIONS(244), 1,
      anon_sym_u2192,
    ACTIONS(246), 1,
      anon_sym_number,
    ACTIONS(248), 1,
      sym_variable,
    ACTIONS(250), 1,
      sym_number,
    STATE(77), 1,
      sym__workspace_id,
    STATE(78), 2,
      sym_assign_workspace,
      sym_assign_output,
  [1279] = 3,
    ACTIONS(252), 2,
      sym_keymap_trigger,
      sym_variable,
    STATE(37), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(254), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [1294] = 3,
    ACTIONS(257), 1,
      anon_sym_focused,
    STATE(55), 1,
      sym_property,
    ACTIONS(259), 5,
      anon_sym_focused_inactive,
      anon_sym_unfocused,
      anon_sym_urgent,
      anon_sym_placeholder,
      anon_sym_background,
  [1308] = 3,
    ACTIONS(263), 1,
      anon_sym_smart,
    STATE(94), 1,
      sym_hide_edge_borders_value,
    ACTIONS(261), 5,
      anon_sym_none,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_both,
      anon_sym_smart_no_gaps,
  [1322] = 6,
    ACTIONS(242), 1,
      anon_sym_output,
    ACTIONS(246), 1,
      anon_sym_number,
    ACTIONS(248), 1,
      sym_variable,
    ACTIONS(250), 1,
      sym_number,
    STATE(77), 1,
      sym__workspace_id,
    STATE(108), 2,
      sym_assign_workspace,
      sym_assign_output,
  [1342] = 1,
    ACTIONS(265), 6,
      anon_sym_RBRACK,
      sym_all_criteria,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1351] = 1,
    ACTIONS(267), 6,
      anon_sym_RBRACK,
      sym_all_criteria,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1360] = 1,
    ACTIONS(269), 6,
      anon_sym_RBRACK,
      sym_all_criteria,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1369] = 1,
    ACTIONS(271), 6,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_primary,
      anon_sym_nonprimary,
  [1378] = 1,
    ACTIONS(273), 6,
      sym_keymap_trigger,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
      sym_variable,
  [1387] = 4,
    ACTIONS(275), 1,
      aux_sym__statement_token1,
    ACTIONS(277), 1,
      sym_number,
    STATE(97), 1,
      sym_unit,
    ACTIONS(150), 2,
      sym_px_unit,
      sym_ppt_unit,
  [1401] = 3,
    ACTIONS(279), 1,
      aux_sym__statement_token1,
    STATE(120), 1,
      sym_unit,
    ACTIONS(150), 2,
      sym_px_unit,
      sym_ppt_unit,
  [1412] = 2,
    STATE(100), 1,
      sym_title_align_value,
    ACTIONS(281), 3,
      anon_sym_left,
      anon_sym_right,
      anon_sym_center,
  [1421] = 2,
    STATE(64), 1,
      sym_border_value,
    ACTIONS(283), 3,
      anon_sym_none,
      anon_sym_normal,
      anon_sym_pixel,
  [1430] = 4,
    ACTIONS(285), 1,
      sym_variable,
    ACTIONS(287), 1,
      sym_number,
    STATE(126), 1,
      sym_workspace_assign_output,
    STATE(128), 1,
      sym__workspace_id,
  [1443] = 2,
    STATE(105), 1,
      sym_default_orientation_value,
    ACTIONS(289), 3,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_auto,
  [1452] = 2,
    STATE(103), 1,
      sym_workspace_layout_value,
    ACTIONS(291), 3,
      anon_sym_default,
      anon_sym_stacking,
      anon_sym_tabbed,
  [1461] = 3,
    ACTIONS(248), 1,
      sym_variable,
    ACTIONS(293), 1,
      sym_number,
    STATE(109), 1,
      sym__workspace_id,
  [1471] = 3,
    ACTIONS(295), 1,
      aux_sym__statement_token1,
    ACTIONS(297), 1,
      sym_variable,
    STATE(56), 1,
      aux_sym_client_repeat1,
  [1481] = 3,
    ACTIONS(297), 1,
      sym_variable,
    ACTIONS(299), 1,
      aux_sym__statement_token1,
    STATE(54), 1,
      aux_sym_client_repeat1,
  [1491] = 3,
    ACTIONS(301), 1,
      aux_sym__statement_token1,
    ACTIONS(303), 1,
      sym_variable,
    STATE(56), 1,
      aux_sym_client_repeat1,
  [1501] = 2,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(10), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
  [1509] = 3,
    ACTIONS(306), 1,
      aux_sym_floating_modifier_value_token1,
    ACTIONS(308), 1,
      sym_variable,
    STATE(114), 1,
      sym_floating_modifier_value,
  [1519] = 2,
    ACTIONS(310), 1,
      aux_sym__statement_token1,
    ACTIONS(312), 1,
      sym_variable,
  [1526] = 2,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_mode_body,
  [1533] = 2,
    ACTIONS(316), 1,
      aux_sym__statement_token1,
    ACTIONS(318), 1,
      sym_variable,
  [1540] = 2,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_criteria,
  [1547] = 2,
    ACTIONS(322), 1,
      aux_sym__statement_token1,
    ACTIONS(324), 1,
      sym_number,
  [1554] = 2,
    ACTIONS(326), 1,
      aux_sym__statement_token1,
    ACTIONS(328), 1,
      sym_number,
  [1561] = 2,
    ACTIONS(330), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(332), 1,
      sym_value,
  [1568] = 2,
    ACTIONS(334), 1,
      anon_sym_DASH_DASHno_DASHstartup_DASHid,
    ACTIONS(336), 1,
      sym_value,
  [1575] = 2,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_criteria,
  [1582] = 1,
    ACTIONS(338), 1,
      aux_sym__statement_token1,
  [1586] = 1,
    ACTIONS(340), 1,
      aux_sym__statement_token1,
  [1590] = 1,
    ACTIONS(342), 1,
      sym_quoted_string,
  [1594] = 1,
    ACTIONS(344), 1,
      sym_quoted_string,
  [1598] = 1,
    ACTIONS(346), 1,
      sym_quoted_string,
  [1602] = 1,
    ACTIONS(348), 1,
      aux_sym__statement_token1,
  [1606] = 1,
    ACTIONS(350), 1,
      sym_value,
  [1610] = 1,
    ACTIONS(352), 1,
      aux_sym__statement_token1,
  [1614] = 1,
    ACTIONS(354), 1,
      sym_number,
  [1618] = 1,
    ACTIONS(356), 1,
      aux_sym__statement_token1,
  [1622] = 1,
    ACTIONS(358), 1,
      aux_sym__statement_token1,
  [1626] = 1,
    ACTIONS(360), 1,
      sym_set_resource_fallback,
  [1630] = 1,
    ACTIONS(362), 1,
      aux_sym__statement_token1,
  [1634] = 1,
    ACTIONS(364), 1,
      sym_mode_name,
  [1638] = 1,
    ACTIONS(366), 1,
      aux_sym__statement_token1,
  [1642] = 1,
    ACTIONS(368), 1,
      aux_sym__statement_token1,
  [1646] = 1,
    ACTIONS(370), 1,
      aux_sym__statement_token1,
  [1650] = 1,
    ACTIONS(372), 1,
      aux_sym__statement_token1,
  [1654] = 1,
    ACTIONS(374), 1,
      sym_value,
  [1658] = 1,
    ACTIONS(376), 1,
      sym_set_resource,
  [1662] = 1,
    ACTIONS(378), 1,
      sym_value,
  [1666] = 1,
    ACTIONS(380), 1,
      aux_sym__statement_token1,
  [1670] = 1,
    ACTIONS(382), 1,
      sym_number,
  [1674] = 1,
    ACTIONS(384), 1,
      aux_sym__statement_token1,
  [1678] = 1,
    ACTIONS(386), 1,
      sym_font_name,
  [1682] = 1,
    ACTIONS(388), 1,
      aux_sym__statement_token1,
  [1686] = 1,
    ACTIONS(390), 1,
      aux_sym__statement_token1,
  [1690] = 1,
    ACTIONS(392), 1,
      sym_mode_name,
  [1694] = 1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [1698] = 1,
    ACTIONS(396), 1,
      aux_sym__statement_token1,
  [1702] = 1,
    ACTIONS(398), 1,
      aux_sym__statement_token1,
  [1706] = 1,
    ACTIONS(400), 1,
      aux_sym__statement_token1,
  [1710] = 1,
    ACTIONS(402), 1,
      aux_sym__statement_token1,
  [1714] = 1,
    ACTIONS(404), 1,
      aux_sym__statement_token1,
  [1718] = 1,
    ACTIONS(406), 1,
      aux_sym__statement_token1,
  [1722] = 1,
    ACTIONS(408), 1,
      aux_sym__statement_token1,
  [1726] = 1,
    ACTIONS(410), 1,
      aux_sym__statement_token1,
  [1730] = 1,
    ACTIONS(412), 1,
      aux_sym__statement_token1,
  [1734] = 1,
    ACTIONS(414), 1,
      aux_sym__statement_token1,
  [1738] = 1,
    ACTIONS(416), 1,
      aux_sym__statement_token1,
  [1742] = 1,
    ACTIONS(418), 1,
      aux_sym__statement_token1,
  [1746] = 1,
    ACTIONS(420), 1,
      aux_sym__statement_token1,
  [1750] = 1,
    ACTIONS(422), 1,
      aux_sym__statement_token1,
  [1754] = 1,
    ACTIONS(424), 1,
      aux_sym__statement_token1,
  [1758] = 1,
    ACTIONS(426), 1,
      aux_sym__statement_token1,
  [1762] = 1,
    ACTIONS(428), 1,
      aux_sym__statement_token1,
  [1766] = 1,
    ACTIONS(430), 1,
      aux_sym__statement_token1,
  [1770] = 1,
    ACTIONS(432), 1,
      sym_floating_size_op,
  [1774] = 1,
    ACTIONS(434), 1,
      aux_sym__statement_token1,
  [1778] = 1,
    ACTIONS(436), 1,
      aux_sym__statement_token1,
  [1782] = 1,
    ACTIONS(438), 1,
      sym_variable,
  [1786] = 1,
    ACTIONS(440), 1,
      sym_keymap_trigger,
  [1790] = 1,
    ACTIONS(442), 1,
      aux_sym__statement_token1,
  [1794] = 1,
    ACTIONS(444), 1,
      aux_sym__statement_token1,
  [1798] = 1,
    ACTIONS(446), 1,
      aux_sym__statement_token1,
  [1802] = 1,
    ACTIONS(448), 1,
      sym_include_source,
  [1806] = 1,
    ACTIONS(450), 1,
      sym_variable,
  [1810] = 1,
    ACTIONS(452), 1,
      anon_sym_output,
  [1814] = 1,
    ACTIONS(454), 1,
      aux_sym__statement_token1,
  [1818] = 1,
    ACTIONS(452), 1,
      aux_sym__statement_token1,
  [1822] = 1,
    ACTIONS(456), 1,
      anon_sym_output,
  [1826] = 1,
    ACTIONS(175), 1,
      aux_sym__statement_token1,
  [1830] = 1,
    ACTIONS(458), 1,
      aux_sym__statement_token1,
  [1834] = 1,
    ACTIONS(460), 1,
      sym_value,
  [1838] = 1,
    ACTIONS(462), 1,
      sym_value,
  [1842] = 1,
    ACTIONS(464), 1,
      aux_sym__statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 204,
  [SMALL_STATE(5)] = 306,
  [SMALL_STATE(6)] = 408,
  [SMALL_STATE(7)] = 510,
  [SMALL_STATE(8)] = 542,
  [SMALL_STATE(9)] = 574,
  [SMALL_STATE(10)] = 613,
  [SMALL_STATE(11)] = 652,
  [SMALL_STATE(12)] = 691,
  [SMALL_STATE(13)] = 730,
  [SMALL_STATE(14)] = 769,
  [SMALL_STATE(15)] = 804,
  [SMALL_STATE(16)] = 839,
  [SMALL_STATE(17)] = 874,
  [SMALL_STATE(18)] = 909,
  [SMALL_STATE(19)] = 944,
  [SMALL_STATE(20)] = 979,
  [SMALL_STATE(21)] = 995,
  [SMALL_STATE(22)] = 1013,
  [SMALL_STATE(23)] = 1036,
  [SMALL_STATE(24)] = 1059,
  [SMALL_STATE(25)] = 1082,
  [SMALL_STATE(26)] = 1094,
  [SMALL_STATE(27)] = 1108,
  [SMALL_STATE(28)] = 1128,
  [SMALL_STATE(29)] = 1140,
  [SMALL_STATE(30)] = 1154,
  [SMALL_STATE(31)] = 1168,
  [SMALL_STATE(32)] = 1188,
  [SMALL_STATE(33)] = 1202,
  [SMALL_STATE(34)] = 1216,
  [SMALL_STATE(35)] = 1236,
  [SMALL_STATE(36)] = 1256,
  [SMALL_STATE(37)] = 1279,
  [SMALL_STATE(38)] = 1294,
  [SMALL_STATE(39)] = 1308,
  [SMALL_STATE(40)] = 1322,
  [SMALL_STATE(41)] = 1342,
  [SMALL_STATE(42)] = 1351,
  [SMALL_STATE(43)] = 1360,
  [SMALL_STATE(44)] = 1369,
  [SMALL_STATE(45)] = 1378,
  [SMALL_STATE(46)] = 1387,
  [SMALL_STATE(47)] = 1401,
  [SMALL_STATE(48)] = 1412,
  [SMALL_STATE(49)] = 1421,
  [SMALL_STATE(50)] = 1430,
  [SMALL_STATE(51)] = 1443,
  [SMALL_STATE(52)] = 1452,
  [SMALL_STATE(53)] = 1461,
  [SMALL_STATE(54)] = 1471,
  [SMALL_STATE(55)] = 1481,
  [SMALL_STATE(56)] = 1491,
  [SMALL_STATE(57)] = 1501,
  [SMALL_STATE(58)] = 1509,
  [SMALL_STATE(59)] = 1519,
  [SMALL_STATE(60)] = 1526,
  [SMALL_STATE(61)] = 1533,
  [SMALL_STATE(62)] = 1540,
  [SMALL_STATE(63)] = 1547,
  [SMALL_STATE(64)] = 1554,
  [SMALL_STATE(65)] = 1561,
  [SMALL_STATE(66)] = 1568,
  [SMALL_STATE(67)] = 1575,
  [SMALL_STATE(68)] = 1582,
  [SMALL_STATE(69)] = 1586,
  [SMALL_STATE(70)] = 1590,
  [SMALL_STATE(71)] = 1594,
  [SMALL_STATE(72)] = 1598,
  [SMALL_STATE(73)] = 1602,
  [SMALL_STATE(74)] = 1606,
  [SMALL_STATE(75)] = 1610,
  [SMALL_STATE(76)] = 1614,
  [SMALL_STATE(77)] = 1618,
  [SMALL_STATE(78)] = 1622,
  [SMALL_STATE(79)] = 1626,
  [SMALL_STATE(80)] = 1630,
  [SMALL_STATE(81)] = 1634,
  [SMALL_STATE(82)] = 1638,
  [SMALL_STATE(83)] = 1642,
  [SMALL_STATE(84)] = 1646,
  [SMALL_STATE(85)] = 1650,
  [SMALL_STATE(86)] = 1654,
  [SMALL_STATE(87)] = 1658,
  [SMALL_STATE(88)] = 1662,
  [SMALL_STATE(89)] = 1666,
  [SMALL_STATE(90)] = 1670,
  [SMALL_STATE(91)] = 1674,
  [SMALL_STATE(92)] = 1678,
  [SMALL_STATE(93)] = 1682,
  [SMALL_STATE(94)] = 1686,
  [SMALL_STATE(95)] = 1690,
  [SMALL_STATE(96)] = 1694,
  [SMALL_STATE(97)] = 1698,
  [SMALL_STATE(98)] = 1702,
  [SMALL_STATE(99)] = 1706,
  [SMALL_STATE(100)] = 1710,
  [SMALL_STATE(101)] = 1714,
  [SMALL_STATE(102)] = 1718,
  [SMALL_STATE(103)] = 1722,
  [SMALL_STATE(104)] = 1726,
  [SMALL_STATE(105)] = 1730,
  [SMALL_STATE(106)] = 1734,
  [SMALL_STATE(107)] = 1738,
  [SMALL_STATE(108)] = 1742,
  [SMALL_STATE(109)] = 1746,
  [SMALL_STATE(110)] = 1750,
  [SMALL_STATE(111)] = 1754,
  [SMALL_STATE(112)] = 1758,
  [SMALL_STATE(113)] = 1762,
  [SMALL_STATE(114)] = 1766,
  [SMALL_STATE(115)] = 1770,
  [SMALL_STATE(116)] = 1774,
  [SMALL_STATE(117)] = 1778,
  [SMALL_STATE(118)] = 1782,
  [SMALL_STATE(119)] = 1786,
  [SMALL_STATE(120)] = 1790,
  [SMALL_STATE(121)] = 1794,
  [SMALL_STATE(122)] = 1798,
  [SMALL_STATE(123)] = 1802,
  [SMALL_STATE(124)] = 1806,
  [SMALL_STATE(125)] = 1810,
  [SMALL_STATE(126)] = 1814,
  [SMALL_STATE(127)] = 1818,
  [SMALL_STATE(128)] = 1822,
  [SMALL_STATE(129)] = 1826,
  [SMALL_STATE(130)] = 1830,
  [SMALL_STATE(131)] = 1834,
  [SMALL_STATE(132)] = 1838,
  [SMALL_STATE(133)] = 1842,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 12),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 12),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 24),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 23),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 23), SHIFT_REPEAT(65),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 23), SHIFT_REPEAT(49),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 23), SHIFT_REPEAT(81),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 23), SHIFT_REPEAT(82),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 23), SHIFT_REPEAT(83),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5, 0, 27),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat2, 1, 0, 11),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 1, 0, 11),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 22),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 22),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 26),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 26),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_criteria, 2, 0, 17),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_role_criteria, 2, 0, 18),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_criteria, 2, 0, 19),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_flags, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 3, 0, 7),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 2, 0, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 16),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 2, 0, 16), SHIFT_REPEAT(61),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 1, 0, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 1, 0, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border_value, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_border_value, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 2, 0, 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 3, 0, 8),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 2, 0, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always, 2, 0, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 1, 0, 9),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 10),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 3, 0, 13),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_focus, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders_value, 1, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders, 2, 0, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 14),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align_value, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 15),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align, 2, 0, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_assign_output, 3, 0, 9),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout_value, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout, 2, 0, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3, 0, 8),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation, 2, 0, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_output, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_workspace, 2, 0, 20),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_from_resource, 4, 0, 21),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier, 2, 0, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_size, 4, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 25),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipc_socket, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workspace_id, 1, 0, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace, 2, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation_value, 1, 0, 0),
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
