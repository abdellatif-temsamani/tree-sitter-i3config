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
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  aux_sym__statement_token1 = 1,
  sym_comment = 2,
  anon_sym_for_window = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_all_criteria = 6,
  sym_floating_criteria = 7,
  anon_sym_class_EQ = 8,
  anon_sym_window_role_EQ = 9,
  anon_sym_title_EQ = 10,
  anon_sym_hide_edge_borders = 11,
  anon_sym_none = 12,
  anon_sym_vertical = 13,
  anon_sym_horizontal = 14,
  anon_sym_both = 15,
  anon_sym_smart = 16,
  anon_sym_smart_no_gaps = 17,
  anon_sym_default_floating_border = 18,
  anon_sym_default_border = 19,
  anon_sym_border = 20,
  anon_sym_normal = 21,
  anon_sym_pixel = 22,
  anon_sym_title_align = 23,
  anon_sym_left = 24,
  anon_sym_center = 25,
  anon_sym_right = 26,
  anon_sym_workspace_layout = 27,
  anon_sym_default = 28,
  anon_sym_stacking = 29,
  anon_sym_tabbed = 30,
  anon_sym_default_orientation = 31,
  anon_sym_auto = 32,
  anon_sym_include = 33,
  sym_include_source = 34,
  anon_sym_floating_modifier = 35,
  aux_sym_floating_modifier_value_token1 = 36,
  anon_sym_floating_minimum_size = 37,
  anon_sym_floating_maximum_size = 38,
  sym_floating_size_op = 39,
  anon_sym_bindsym = 40,
  anon_sym_bindcode = 41,
  sym_keymap_trigger = 42,
  anon_sym_DASH_DASHrelease = 43,
  anon_sym_DASH_DASHborder = 44,
  anon_sym_DASH_DASHwhole_DASHwindow = 45,
  anon_sym_DASH_DASHexclude_DASHtitlebar = 46,
  anon_sym_font = 47,
  sym_font_name = 48,
  anon_sym_mode = 49,
  sym_mode_name = 50,
  anon_sym_LBRACE = 51,
  anon_sym_RBRACE = 52,
  sym_variable = 53,
  sym_px_unit = 54,
  sym_ppt_unit = 55,
  sym_number = 56,
  sym_quoted_string = 57,
  sym_source_file = 58,
  sym__statement = 59,
  sym_for_window = 60,
  sym_criteria = 61,
  sym_class_criteria = 62,
  sym_window_role_criteria = 63,
  sym_title_criteria = 64,
  sym_hide_edge_borders = 65,
  sym_hide_edge_borders_value = 66,
  sym_border = 67,
  sym_border_value = 68,
  sym_title_align = 69,
  sym_title_align_value = 70,
  sym_workspace_layout = 71,
  sym_workspace_layout_value = 72,
  sym_default_orientation = 73,
  sym_default_orientation_value = 74,
  sym_include = 75,
  sym_floating_modifier = 76,
  sym_floating_modifier_value = 77,
  sym_floating_size = 78,
  sym_binding = 79,
  sym_keymap = 80,
  sym_keymap_flags = 81,
  sym_font = 82,
  sym_mode = 83,
  sym_mode_body = 84,
  sym_unit = 85,
  sym__value = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_for_window_repeat1 = 88,
  aux_sym_for_window_repeat2 = 89,
  aux_sym_criteria_repeat1 = 90,
  aux_sym_binding_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [sym_comment] = "comment",
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
  [anon_sym_left] = "left",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
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
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
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
  [aux_sym_for_window_repeat1] = "for_window_repeat1",
  [aux_sym_for_window_repeat2] = "for_window_repeat2",
  [aux_sym_criteria_repeat1] = "criteria_repeat1",
  [aux_sym_binding_repeat1] = "binding_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [sym_comment] = sym_comment,
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
  [anon_sym_left] = anon_sym_left,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
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
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
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
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
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
  field_mode = 3,
  field_name = 4,
  field_reference = 5,
  field_reference_mode = 6,
  field_source = 7,
  field_title = 8,
  field_unit = 9,
  field_value = 10,
  field_window_role = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_class] = "class",
  [field_mode] = "mode",
  [field_name] = "name",
  [field_reference] = "reference",
  [field_reference_mode] = "reference_mode",
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
  [5] = {.index = 4, .length = 3},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 6},
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 1},
  [18] = {.index = 30, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_mode, 1},
  [2] =
    {field_source, 1},
  [3] =
    {field_reference, 0},
  [4] =
    {field_reference, 0, .inherited = true},
    {field_reference_mode, 0, .inherited = true},
    {field_unit, 0, .inherited = true},
  [7] =
    {field_reference, 2, .inherited = true},
    {field_reference_mode, 2, .inherited = true},
    {field_unit, 2, .inherited = true},
  [10] =
    {field_mode, 1},
    {field_value, 2},
  [12] =
    {field_name, 2},
  [13] =
    {field_body, 2},
    {field_name, 1},
  [15] =
    {field_class, 1},
  [16] =
    {field_window_role, 1},
  [17] =
    {field_title, 1},
  [18] =
    {field_unit, 0},
  [19] =
    {field_reference, 0, .inherited = true},
    {field_reference, 1, .inherited = true},
    {field_reference_mode, 0, .inherited = true},
    {field_reference_mode, 1, .inherited = true},
    {field_unit, 0, .inherited = true},
    {field_unit, 1, .inherited = true},
  [25] =
    {field_reference, 3, .inherited = true},
    {field_reference_mode, 3, .inherited = true},
    {field_unit, 3, .inherited = true},
  [28] =
    {field_name, 3},
  [29] =
    {field_reference_mode, 1},
  [30] =
    {field_reference, 4, .inherited = true},
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 3,
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
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 56,
  [88] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(342);
      ADVANCE_MAP(
        '"', 1,
        '#', 344,
        '$', 335,
        '+', 334,
        '-', 16,
        '[', 346,
        ']', 347,
        'a', 177,
        'b', 151,
        'c', 106,
        'd', 91,
        'f', 185,
        'h', 147,
        'i', 211,
        'l', 101,
        'm', 241,
        'n', 231,
        'p', 148,
        'r', 149,
        's', 205,
        't', 36,
        'v', 102,
        'w', 166,
        'x', 384,
        '{', 398,
        '}', 399,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 343,
        '$', 335,
        'b', 249,
        'd', 126,
        'm', 241,
        'p', 253,
        '+', 334,
        '-', 334,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(395);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 10,
        ']', 347,
        'a', 176,
        'c', 178,
        'd', 127,
        'f', 202,
        's', 294,
        't', 37,
        'w', 165,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(335);
      if (lookahead == '-') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(297);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(323);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(351);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(353);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(204);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(281);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(283);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(286);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(350);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(373);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(349);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 'x') ADVANCE(401);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 174:
      if (lookahead == 'k') ADVANCE(277);
      END_STATE();
    case 175:
      if (lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(385);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 'x') ADVANCE(401);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 255:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 313:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 319:
      if (lookahead == 'w') ADVANCE(345);
      END_STATE();
    case 320:
      if (lookahead == 'w') ADVANCE(390);
      END_STATE();
    case 321:
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 322:
      if (lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 323:
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 324:
      if (lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 325:
      if (lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 326:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 327:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 328:
      if (lookahead == 'y') ADVANCE(237);
      END_STATE();
    case 329:
      if (lookahead == 'z') ADVANCE(242);
      END_STATE();
    case 330:
      if (lookahead == 'z') ADVANCE(99);
      END_STATE();
    case 331:
      if (lookahead == 'z') ADVANCE(100);
      END_STATE();
    case 332:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(332);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 333:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(333);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 336:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(378);
      END_STATE();
    case 337:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(339);
      END_STATE();
    case 338:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 339:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 340:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(336);
      END_STATE();
    case 341:
      if (eof) ADVANCE(342);
      ADVANCE_MAP(
        '"', 4,
        '#', 344,
        '$', 335,
        '[', 346,
        'b', 152,
        'd', 125,
        'f', 201,
        'h', 146,
        'i', 211,
        'm', 241,
        'p', 253,
        't', 172,
        'w', 233,
        '}', 399,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_all_criteria);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_floating_criteria);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_floating_criteria);
      if (lookahead == '_') ADVANCE(204);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_class_EQ);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_window_role_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_title_EQ);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '_') ADVANCE(223);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_smart_no_gaps);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_pixel);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_stacking);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_tabbed);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_floating_modifier_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_floating_size_op);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DASH_DASHborder);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DASH_DASHwhole_DASHwindow);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DASH_DASHexclude_DASHtitlebar);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_mode_name);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_px_unit);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ppt_unit);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 341},
  [2] = {.lex_state = 341},
  [3] = {.lex_state = 341},
  [4] = {.lex_state = 341},
  [5] = {.lex_state = 341},
  [6] = {.lex_state = 341},
  [7] = {.lex_state = 341},
  [8] = {.lex_state = 341},
  [9] = {.lex_state = 341},
  [10] = {.lex_state = 341},
  [11] = {.lex_state = 341},
  [12] = {.lex_state = 341},
  [13] = {.lex_state = 341},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 341},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 341},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 341},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 341},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 341},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 341},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 332},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 333},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
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
    [sym_source_file] = STATE(53),
    [sym__statement] = STATE(2),
    [sym_for_window] = STATE(56),
    [sym_hide_edge_borders] = STATE(56),
    [sym_border] = STATE(56),
    [sym_title_align] = STATE(56),
    [sym_workspace_layout] = STATE(56),
    [sym_default_orientation] = STATE(56),
    [sym_include] = STATE(56),
    [sym_floating_modifier] = STATE(56),
    [sym_floating_size] = STATE(56),
    [sym_binding] = STATE(56),
    [sym_font] = STATE(56),
    [sym_mode] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_for_window] = ACTIONS(7),
    [anon_sym_hide_edge_borders] = ACTIONS(9),
    [anon_sym_default_floating_border] = ACTIONS(11),
    [anon_sym_default_border] = ACTIONS(11),
    [anon_sym_border] = ACTIONS(11),
    [anon_sym_title_align] = ACTIONS(13),
    [anon_sym_workspace_layout] = ACTIONS(15),
    [anon_sym_default_orientation] = ACTIONS(17),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_floating_modifier] = ACTIONS(21),
    [anon_sym_floating_minimum_size] = ACTIONS(23),
    [anon_sym_floating_maximum_size] = ACTIONS(23),
    [anon_sym_bindsym] = ACTIONS(25),
    [anon_sym_bindcode] = ACTIONS(25),
    [anon_sym_font] = ACTIONS(27),
    [anon_sym_mode] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_for_window,
    ACTIONS(9), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(13), 1,
      anon_sym_title_align,
    ACTIONS(15), 1,
      anon_sym_workspace_layout,
    ACTIONS(17), 1,
      anon_sym_default_orientation,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(21), 1,
      anon_sym_floating_modifier,
    ACTIONS(27), 1,
      anon_sym_font,
    ACTIONS(29), 1,
      anon_sym_mode,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(25), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(56), 12,
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
  [65] = 16,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_for_window,
    ACTIONS(41), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(47), 1,
      anon_sym_title_align,
    ACTIONS(50), 1,
      anon_sym_workspace_layout,
    ACTIONS(53), 1,
      anon_sym_default_orientation,
    ACTIONS(56), 1,
      anon_sym_include,
    ACTIONS(59), 1,
      anon_sym_floating_modifier,
    ACTIONS(68), 1,
      anon_sym_font,
    ACTIONS(71), 1,
      anon_sym_mode,
    ACTIONS(62), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(65), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(44), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(56), 12,
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
  [130] = 16,
    ACTIONS(7), 1,
      anon_sym_for_window,
    ACTIONS(9), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(13), 1,
      anon_sym_title_align,
    ACTIONS(15), 1,
      anon_sym_workspace_layout,
    ACTIONS(17), 1,
      anon_sym_default_orientation,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(21), 1,
      anon_sym_floating_modifier,
    ACTIONS(27), 1,
      anon_sym_font,
    ACTIONS(29), 1,
      anon_sym_mode,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(25), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(5), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(87), 12,
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
  [195] = 16,
    ACTIONS(7), 1,
      anon_sym_for_window,
    ACTIONS(9), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(13), 1,
      anon_sym_title_align,
    ACTIONS(15), 1,
      anon_sym_workspace_layout,
    ACTIONS(17), 1,
      anon_sym_default_orientation,
    ACTIONS(19), 1,
      anon_sym_include,
    ACTIONS(21), 1,
      anon_sym_floating_modifier,
    ACTIONS(27), 1,
      anon_sym_font,
    ACTIONS(29), 1,
      anon_sym_mode,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(25), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(6), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(87), 12,
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
  [260] = 16,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      anon_sym_for_window,
    ACTIONS(41), 1,
      anon_sym_hide_edge_borders,
    ACTIONS(47), 1,
      anon_sym_title_align,
    ACTIONS(50), 1,
      anon_sym_workspace_layout,
    ACTIONS(53), 1,
      anon_sym_default_orientation,
    ACTIONS(56), 1,
      anon_sym_include,
    ACTIONS(59), 1,
      anon_sym_floating_modifier,
    ACTIONS(68), 1,
      anon_sym_font,
    ACTIONS(71), 1,
      anon_sym_mode,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_floating_minimum_size,
      anon_sym_floating_maximum_size,
    ACTIONS(65), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(6), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(44), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
    STATE(87), 12,
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
  [325] = 1,
    ACTIONS(83), 18,
      ts_builtin_sym_end,
      sym_comment,
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
  [346] = 1,
    ACTIONS(83), 18,
      sym_comment,
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
  [367] = 10,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_mode,
    ACTIONS(89), 1,
      sym_variable,
    STATE(17), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(91), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(20), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(11), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [402] = 10,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_mode,
    ACTIONS(89), 1,
      sym_variable,
    STATE(16), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(91), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(9), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(11), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [437] = 10,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_mode,
    ACTIONS(89), 1,
      sym_variable,
    STATE(19), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(91), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(20), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(11), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [472] = 10,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_mode,
    ACTIONS(89), 1,
      sym_variable,
    STATE(14), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(91), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(11), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(11), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [507] = 10,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_mode,
    ACTIONS(89), 1,
      sym_variable,
    STATE(15), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(91), 2,
      sym_px_unit,
      sym_ppt_unit,
    STATE(20), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(11), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [542] = 9,
    ACTIONS(93), 1,
      aux_sym__statement_token1,
    ACTIONS(97), 1,
      anon_sym_mode,
    ACTIONS(99), 1,
      sym_variable,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(101), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(95), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [573] = 9,
    ACTIONS(97), 1,
      anon_sym_mode,
    ACTIONS(99), 1,
      sym_variable,
    ACTIONS(103), 1,
      aux_sym__statement_token1,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(101), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(95), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [604] = 9,
    ACTIONS(97), 1,
      anon_sym_mode,
    ACTIONS(99), 1,
      sym_variable,
    ACTIONS(105), 1,
      aux_sym__statement_token1,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(101), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(95), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [635] = 9,
    ACTIONS(97), 1,
      anon_sym_mode,
    ACTIONS(99), 1,
      sym_variable,
    ACTIONS(107), 1,
      aux_sym__statement_token1,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(101), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(95), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [666] = 9,
    ACTIONS(109), 1,
      aux_sym__statement_token1,
    ACTIONS(114), 1,
      anon_sym_mode,
    ACTIONS(117), 1,
      sym_variable,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(120), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(111), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [697] = 9,
    ACTIONS(97), 1,
      anon_sym_mode,
    ACTIONS(99), 1,
      sym_variable,
    ACTIONS(105), 1,
      aux_sym__statement_token1,
    STATE(18), 1,
      aux_sym_for_window_repeat2,
    STATE(26), 1,
      sym__value,
    STATE(68), 1,
      sym_border,
    STATE(69), 1,
      sym_unit,
    ACTIONS(101), 2,
      sym_px_unit,
      sym_ppt_unit,
    ACTIONS(95), 3,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
  [728] = 3,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    STATE(20), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
    ACTIONS(126), 7,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [745] = 6,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      anon_sym_class_EQ,
    ACTIONS(134), 1,
      anon_sym_window_role_EQ,
    ACTIONS(136), 1,
      anon_sym_title_EQ,
    ACTIONS(130), 2,
      sym_all_criteria,
      sym_floating_criteria,
    STATE(22), 4,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [768] = 6,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 1,
      anon_sym_class_EQ,
    ACTIONS(146), 1,
      anon_sym_window_role_EQ,
    ACTIONS(149), 1,
      anon_sym_title_EQ,
    ACTIONS(140), 2,
      sym_all_criteria,
      sym_floating_criteria,
    STATE(22), 4,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [791] = 5,
    ACTIONS(152), 1,
      sym_keymap_trigger,
    ACTIONS(156), 1,
      sym_variable,
    STATE(12), 1,
      sym_keymap,
    STATE(25), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(154), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [811] = 5,
    ACTIONS(132), 1,
      anon_sym_class_EQ,
    ACTIONS(134), 1,
      anon_sym_window_role_EQ,
    ACTIONS(136), 1,
      anon_sym_title_EQ,
    ACTIONS(158), 2,
      sym_all_criteria,
      sym_floating_criteria,
    STATE(21), 4,
      sym_class_criteria,
      sym_window_role_criteria,
      sym_title_criteria,
      aux_sym_criteria_repeat1,
  [831] = 5,
    ACTIONS(152), 1,
      sym_keymap_trigger,
    ACTIONS(156), 1,
      sym_variable,
    STATE(10), 1,
      sym_keymap,
    STATE(28), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(154), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [851] = 2,
    ACTIONS(160), 1,
      aux_sym__statement_token1,
    ACTIONS(162), 7,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [864] = 1,
    ACTIONS(164), 8,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [875] = 3,
    ACTIONS(166), 2,
      sym_keymap_trigger,
      sym_variable,
    STATE(28), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(168), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [890] = 1,
    ACTIONS(171), 8,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [901] = 2,
    ACTIONS(173), 1,
      aux_sym__statement_token1,
    ACTIONS(175), 7,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [914] = 2,
    ACTIONS(177), 1,
      aux_sym__statement_token1,
    ACTIONS(179), 7,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [927] = 2,
    ACTIONS(181), 1,
      aux_sym__statement_token1,
    ACTIONS(183), 7,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [940] = 1,
    ACTIONS(185), 8,
      anon_sym_LBRACK,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [951] = 2,
    ACTIONS(187), 1,
      aux_sym__statement_token1,
    ACTIONS(189), 7,
      anon_sym_default_floating_border,
      anon_sym_default_border,
      anon_sym_border,
      anon_sym_mode,
      sym_variable,
      sym_px_unit,
      sym_ppt_unit,
  [964] = 3,
    ACTIONS(193), 1,
      anon_sym_smart,
    STATE(63), 1,
      sym_hide_edge_borders_value,
    ACTIONS(191), 5,
      anon_sym_none,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_both,
      anon_sym_smart_no_gaps,
  [978] = 1,
    ACTIONS(195), 6,
      anon_sym_RBRACK,
      sym_all_criteria,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [987] = 1,
    ACTIONS(197), 6,
      sym_keymap_trigger,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
      sym_variable,
  [996] = 1,
    ACTIONS(199), 6,
      anon_sym_RBRACK,
      sym_all_criteria,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1005] = 1,
    ACTIONS(201), 6,
      anon_sym_RBRACK,
      sym_all_criteria,
      sym_floating_criteria,
      anon_sym_class_EQ,
      anon_sym_window_role_EQ,
      anon_sym_title_EQ,
  [1014] = 4,
    ACTIONS(203), 1,
      aux_sym__statement_token1,
    ACTIONS(205), 1,
      sym_number,
    STATE(62), 1,
      sym_unit,
    ACTIONS(101), 2,
      sym_px_unit,
      sym_ppt_unit,
  [1028] = 2,
    STATE(74), 1,
      sym_workspace_layout_value,
    ACTIONS(207), 3,
      anon_sym_default,
      anon_sym_stacking,
      anon_sym_tabbed,
  [1037] = 2,
    STATE(77), 1,
      sym_default_orientation_value,
    ACTIONS(209), 3,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_auto,
  [1046] = 2,
    STATE(72), 1,
      sym_title_align_value,
    ACTIONS(211), 3,
      anon_sym_left,
      anon_sym_center,
      anon_sym_right,
  [1055] = 2,
    STATE(50), 1,
      sym_border_value,
    ACTIONS(213), 3,
      anon_sym_none,
      anon_sym_normal,
      anon_sym_pixel,
  [1064] = 3,
    ACTIONS(215), 1,
      aux_sym__statement_token1,
    STATE(79), 1,
      sym_unit,
    ACTIONS(101), 2,
      sym_px_unit,
      sym_ppt_unit,
  [1075] = 2,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_criteria,
      aux_sym_for_window_repeat1,
  [1083] = 3,
    ACTIONS(217), 1,
      aux_sym_floating_modifier_value_token1,
    ACTIONS(219), 1,
      sym_variable,
    STATE(83), 1,
      sym_floating_modifier_value,
  [1093] = 2,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_mode_body,
  [1100] = 2,
    ACTIONS(223), 1,
      aux_sym__statement_token1,
    ACTIONS(225), 1,
      sym_number,
  [1107] = 2,
    ACTIONS(227), 1,
      aux_sym__statement_token1,
    ACTIONS(229), 1,
      sym_number,
  [1114] = 1,
    ACTIONS(231), 1,
      aux_sym__statement_token1,
  [1118] = 1,
    ACTIONS(233), 1,
      sym_mode_name,
  [1122] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1126] = 1,
    ACTIONS(237), 1,
      aux_sym__statement_token1,
  [1130] = 1,
    ACTIONS(239), 1,
      sym_number,
  [1134] = 1,
    ACTIONS(241), 1,
      aux_sym__statement_token1,
  [1138] = 1,
    ACTIONS(243), 1,
      sym_quoted_string,
  [1142] = 1,
    ACTIONS(245), 1,
      sym_quoted_string,
  [1146] = 1,
    ACTIONS(247), 1,
      sym_mode_name,
  [1150] = 1,
    ACTIONS(249), 1,
      aux_sym__statement_token1,
  [1154] = 1,
    ACTIONS(251), 1,
      aux_sym__statement_token1,
  [1158] = 1,
    ACTIONS(253), 1,
      aux_sym__statement_token1,
  [1162] = 1,
    ACTIONS(255), 1,
      aux_sym__statement_token1,
  [1166] = 1,
    ACTIONS(257), 1,
      aux_sym__statement_token1,
  [1170] = 1,
    ACTIONS(259), 1,
      sym_include_source,
  [1174] = 1,
    ACTIONS(261), 1,
      aux_sym__statement_token1,
  [1178] = 1,
    ACTIONS(263), 1,
      sym_quoted_string,
  [1182] = 1,
    ACTIONS(265), 1,
      aux_sym__statement_token1,
  [1186] = 1,
    ACTIONS(267), 1,
      aux_sym__statement_token1,
  [1190] = 1,
    ACTIONS(269), 1,
      aux_sym__statement_token1,
  [1194] = 1,
    ACTIONS(271), 1,
      aux_sym__statement_token1,
  [1198] = 1,
    ACTIONS(273), 1,
      aux_sym__statement_token1,
  [1202] = 1,
    ACTIONS(275), 1,
      aux_sym__statement_token1,
  [1206] = 1,
    ACTIONS(277), 1,
      aux_sym__statement_token1,
  [1210] = 1,
    ACTIONS(279), 1,
      aux_sym__statement_token1,
  [1214] = 1,
    ACTIONS(281), 1,
      sym_keymap_trigger,
  [1218] = 1,
    ACTIONS(283), 1,
      aux_sym__statement_token1,
  [1222] = 1,
    ACTIONS(285), 1,
      aux_sym__statement_token1,
  [1226] = 1,
    ACTIONS(287), 1,
      aux_sym__statement_token1,
  [1230] = 1,
    ACTIONS(289), 1,
      aux_sym__statement_token1,
  [1234] = 1,
    ACTIONS(291), 1,
      aux_sym__statement_token1,
  [1238] = 1,
    ACTIONS(293), 1,
      aux_sym__statement_token1,
  [1242] = 1,
    ACTIONS(295), 1,
      aux_sym__statement_token1,
  [1246] = 1,
    ACTIONS(297), 1,
      aux_sym__statement_token1,
  [1250] = 1,
    ACTIONS(299), 1,
      sym_floating_size_op,
  [1254] = 1,
    ACTIONS(301), 1,
      sym_font_name,
  [1258] = 1,
    ACTIONS(303), 1,
      aux_sym__statement_token1,
  [1262] = 1,
    ACTIONS(305), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 325,
  [SMALL_STATE(8)] = 346,
  [SMALL_STATE(9)] = 367,
  [SMALL_STATE(10)] = 402,
  [SMALL_STATE(11)] = 437,
  [SMALL_STATE(12)] = 472,
  [SMALL_STATE(13)] = 507,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 604,
  [SMALL_STATE(17)] = 635,
  [SMALL_STATE(18)] = 666,
  [SMALL_STATE(19)] = 697,
  [SMALL_STATE(20)] = 728,
  [SMALL_STATE(21)] = 745,
  [SMALL_STATE(22)] = 768,
  [SMALL_STATE(23)] = 791,
  [SMALL_STATE(24)] = 811,
  [SMALL_STATE(25)] = 831,
  [SMALL_STATE(26)] = 851,
  [SMALL_STATE(27)] = 864,
  [SMALL_STATE(28)] = 875,
  [SMALL_STATE(29)] = 890,
  [SMALL_STATE(30)] = 901,
  [SMALL_STATE(31)] = 914,
  [SMALL_STATE(32)] = 927,
  [SMALL_STATE(33)] = 940,
  [SMALL_STATE(34)] = 951,
  [SMALL_STATE(35)] = 964,
  [SMALL_STATE(36)] = 978,
  [SMALL_STATE(37)] = 987,
  [SMALL_STATE(38)] = 996,
  [SMALL_STATE(39)] = 1005,
  [SMALL_STATE(40)] = 1014,
  [SMALL_STATE(41)] = 1028,
  [SMALL_STATE(42)] = 1037,
  [SMALL_STATE(43)] = 1046,
  [SMALL_STATE(44)] = 1055,
  [SMALL_STATE(45)] = 1064,
  [SMALL_STATE(46)] = 1075,
  [SMALL_STATE(47)] = 1083,
  [SMALL_STATE(48)] = 1093,
  [SMALL_STATE(49)] = 1100,
  [SMALL_STATE(50)] = 1107,
  [SMALL_STATE(51)] = 1114,
  [SMALL_STATE(52)] = 1118,
  [SMALL_STATE(53)] = 1122,
  [SMALL_STATE(54)] = 1126,
  [SMALL_STATE(55)] = 1130,
  [SMALL_STATE(56)] = 1134,
  [SMALL_STATE(57)] = 1138,
  [SMALL_STATE(58)] = 1142,
  [SMALL_STATE(59)] = 1146,
  [SMALL_STATE(60)] = 1150,
  [SMALL_STATE(61)] = 1154,
  [SMALL_STATE(62)] = 1158,
  [SMALL_STATE(63)] = 1162,
  [SMALL_STATE(64)] = 1166,
  [SMALL_STATE(65)] = 1170,
  [SMALL_STATE(66)] = 1174,
  [SMALL_STATE(67)] = 1178,
  [SMALL_STATE(68)] = 1182,
  [SMALL_STATE(69)] = 1186,
  [SMALL_STATE(70)] = 1190,
  [SMALL_STATE(71)] = 1194,
  [SMALL_STATE(72)] = 1198,
  [SMALL_STATE(73)] = 1202,
  [SMALL_STATE(74)] = 1206,
  [SMALL_STATE(75)] = 1210,
  [SMALL_STATE(76)] = 1214,
  [SMALL_STATE(77)] = 1218,
  [SMALL_STATE(78)] = 1222,
  [SMALL_STATE(79)] = 1226,
  [SMALL_STATE(80)] = 1230,
  [SMALL_STATE(81)] = 1234,
  [SMALL_STATE(82)] = 1238,
  [SMALL_STATE(83)] = 1242,
  [SMALL_STATE(84)] = 1246,
  [SMALL_STATE(85)] = 1250,
  [SMALL_STATE(86)] = 1254,
  [SMALL_STATE(87)] = 1258,
  [SMALL_STATE(88)] = 1262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 15),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5, 0, 18),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 14),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 14), SHIFT_REPEAT(44),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 14), SHIFT_REPEAT(59),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 14), SHIFT_REPEAT(61),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 2, 0, 14), SHIFT_REPEAT(66),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_window_repeat2, 1, 0, 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_window_repeat2, 1, 0, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 13),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 13),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 3, 0, 17),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 3, 0, 17),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_criteria, 2, 0, 12),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_flags, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_criteria, 2, 0, 10),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_role_criteria, 2, 0, 11),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border_value, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_border_value, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 2, 0, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation_value, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border, 3, 0, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders_value, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 8),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hide_edge_borders, 2, 0, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 9),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align_value, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_align, 2, 0, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout_value, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_layout, 2, 0, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_size, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_orientation, 2, 0, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 16),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier_value, 1, 0, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_modifier, 2, 0, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
