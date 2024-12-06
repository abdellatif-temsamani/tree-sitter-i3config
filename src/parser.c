#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_exec = 2,
  anon_sym_exec_always = 3,
  anon_sym_floating_modifier = 4,
  anon_sym_tiling_drag = 5,
  anon_sym_bindsym = 6,
  anon_sym_bindcode = 7,
  sym_keymap_trigger = 8,
  anon_sym_assign = 9,
  anon_sym_number = 10,
  anon_sym_client = 11,
  sym_property = 12,
  anon_sym_font = 13,
  sym_font_name = 14,
  anon_sym_set = 15,
  anon_sym_set_from_resource = 16,
  anon_sym_for_window = 17,
  anon_sym_LBRACKclass_EQ = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACKtitle_EQ = 20,
  sym_arg = 21,
  sym_flag = 22,
  sym_variable = 23,
  sym_quoted_string = 24,
  sym_resource = 25,
  sym_number = 26,
  sym_unit = 27,
  anon_sym_mode = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  sym_source_file = 31,
  sym_statement = 32,
  sym_command = 33,
  sym_binding = 34,
  sym_keymap = 35,
  sym_assign = 36,
  sym_client = 37,
  sym_font = 38,
  sym_set = 39,
  sym_set_from_resource = 40,
  sym_for_window = 41,
  sym_condition = 42,
  sym_class_condition = 43,
  sym_title_condition = 44,
  sym_value = 45,
  sym_value_item = 46,
  sym_mode = 47,
  sym_mode_name = 48,
  sym_mode_body = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_command_repeat1 = 51,
  aux_sym_command_repeat2 = 52,
  aux_sym_client_repeat1 = 53,
  aux_sym_value_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_exec] = "exec",
  [anon_sym_exec_always] = "exec_always",
  [anon_sym_floating_modifier] = "floating_modifier",
  [anon_sym_tiling_drag] = "tiling_drag",
  [anon_sym_bindsym] = "bindsym",
  [anon_sym_bindcode] = "bindcode",
  [sym_keymap_trigger] = "keymap_trigger",
  [anon_sym_assign] = "assign",
  [anon_sym_number] = "number",
  [anon_sym_client] = "client",
  [sym_property] = "property",
  [anon_sym_font] = "font",
  [sym_font_name] = "font_name",
  [anon_sym_set] = "set",
  [anon_sym_set_from_resource] = "set_from_resource",
  [anon_sym_for_window] = "for_window",
  [anon_sym_LBRACKclass_EQ] = "[class=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACKtitle_EQ] = "[title=",
  [sym_arg] = "arg",
  [sym_flag] = "flag",
  [sym_variable] = "variable",
  [sym_quoted_string] = "quoted_string",
  [sym_resource] = "resource",
  [sym_number] = "number",
  [sym_unit] = "unit",
  [anon_sym_mode] = "mode",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_command] = "command",
  [sym_binding] = "binding",
  [sym_keymap] = "keymap",
  [sym_assign] = "assign",
  [sym_client] = "client",
  [sym_font] = "font",
  [sym_set] = "set",
  [sym_set_from_resource] = "set_from_resource",
  [sym_for_window] = "for_window",
  [sym_condition] = "condition",
  [sym_class_condition] = "class_condition",
  [sym_title_condition] = "title_condition",
  [sym_value] = "value",
  [sym_value_item] = "value_item",
  [sym_mode] = "mode",
  [sym_mode_name] = "mode_name",
  [sym_mode_body] = "mode_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_client_repeat1] = "client_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_exec_always] = anon_sym_exec_always,
  [anon_sym_floating_modifier] = anon_sym_floating_modifier,
  [anon_sym_tiling_drag] = anon_sym_tiling_drag,
  [anon_sym_bindsym] = anon_sym_bindsym,
  [anon_sym_bindcode] = anon_sym_bindcode,
  [sym_keymap_trigger] = sym_keymap_trigger,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_client] = anon_sym_client,
  [sym_property] = sym_property,
  [anon_sym_font] = anon_sym_font,
  [sym_font_name] = sym_font_name,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_set_from_resource] = anon_sym_set_from_resource,
  [anon_sym_for_window] = anon_sym_for_window,
  [anon_sym_LBRACKclass_EQ] = anon_sym_LBRACKclass_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACKtitle_EQ] = anon_sym_LBRACKtitle_EQ,
  [sym_arg] = sym_arg,
  [sym_flag] = sym_flag,
  [sym_variable] = sym_variable,
  [sym_quoted_string] = sym_quoted_string,
  [sym_resource] = sym_resource,
  [sym_number] = sym_number,
  [sym_unit] = sym_unit,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_command] = sym_command,
  [sym_binding] = sym_binding,
  [sym_keymap] = sym_keymap,
  [sym_assign] = sym_assign,
  [sym_client] = sym_client,
  [sym_font] = sym_font,
  [sym_set] = sym_set,
  [sym_set_from_resource] = sym_set_from_resource,
  [sym_for_window] = sym_for_window,
  [sym_condition] = sym_condition,
  [sym_class_condition] = sym_class_condition,
  [sym_title_condition] = sym_title_condition,
  [sym_value] = sym_value,
  [sym_value_item] = sym_value_item,
  [sym_mode] = sym_mode,
  [sym_mode_name] = sym_mode_name,
  [sym_mode_body] = sym_mode_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_client_repeat1] = aux_sym_client_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tiling_drag] = {
    .visible = true,
    .named = false,
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
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client] = {
    .visible = true,
    .named = false,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = false,
  },
  [sym_font_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_from_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKclass_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKtitle_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mode] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
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
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_client] = {
    .visible = true,
    .named = true,
  },
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_set_from_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_for_window] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_title_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value_item] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_client_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 2},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 1},
    {field_value, 3},
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
  [8] = 8,
  [9] = 8,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
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
  [40] = 36,
  [41] = 38,
  [42] = 39,
  [43] = 37,
  [44] = 44,
  [45] = 44,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 51,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 49,
  [70] = 50,
  [71] = 66,
  [72] = 72,
  [73] = 73,
  [74] = 61,
  [75] = 60,
  [76] = 67,
  [77] = 73,
  [78] = 78,
  [79] = 56,
  [80] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '"', 3,
        '#', 140,
        '$', 126,
        '-', 6,
        '.', 127,
        '[', 21,
        ']', 170,
        'a', 103,
        'b', 49,
        'c', 68,
        'e', 120,
        'f', 63,
        'm', 84,
        'n', 115,
        'p', 93,
        's', 39,
        't', 55,
        '{', 248,
        '}', 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '$') ADVANCE(128);
      if (lookahead == '-') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(241);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 118:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 119:
      if (lookahead == 'w') ADVANCE(61);
      END_STATE();
    case 120:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 121:
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 124:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(124);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 125:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(132);
      END_STATE();
    case 130:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(238);
      END_STATE();
    case 131:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 132:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 134:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 135:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '"', 3,
        '#', 138,
        '$', 128,
        '-', 7,
        'a', 104,
        'b', 51,
        'c', 67,
        'e', 121,
        'f', 65,
        'm', 85,
        's', 36,
        't', 54,
        '}', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(135);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_exec_always);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_bindsym);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_bindcode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_assign);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_client);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_client);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_property);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_set_from_resource);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_set_from_resource);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_for_window);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACKclass_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACKtitle_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '_') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '_') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'g') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'y') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'y') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_arg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_resource);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 135},
  [8] = {.lex_state = 135},
  [9] = {.lex_state = 135},
  [10] = {.lex_state = 135},
  [11] = {.lex_state = 135},
  [12] = {.lex_state = 135},
  [13] = {.lex_state = 135},
  [14] = {.lex_state = 135},
  [15] = {.lex_state = 135},
  [16] = {.lex_state = 135},
  [17] = {.lex_state = 135},
  [18] = {.lex_state = 135},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 124},
  [66] = {.lex_state = 125},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 125},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_exec_always] = ACTIONS(1),
    [anon_sym_floating_modifier] = ACTIONS(1),
    [anon_sym_tiling_drag] = ACTIONS(1),
    [anon_sym_bindsym] = ACTIONS(1),
    [anon_sym_bindcode] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_client] = ACTIONS(1),
    [sym_property] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_set_from_resource] = ACTIONS(1),
    [anon_sym_for_window] = ACTIONS(1),
    [anon_sym_LBRACKclass_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKtitle_EQ] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_unit] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_statement] = STATE(4),
    [sym_command] = STATE(26),
    [sym_binding] = STATE(26),
    [sym_assign] = STATE(26),
    [sym_client] = STATE(26),
    [sym_font] = STATE(26),
    [sym_set] = STATE(26),
    [sym_set_from_resource] = STATE(26),
    [sym_for_window] = STATE(26),
    [sym_mode] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(5),
    [anon_sym_exec_always] = ACTIONS(7),
    [anon_sym_floating_modifier] = ACTIONS(7),
    [anon_sym_tiling_drag] = ACTIONS(7),
    [anon_sym_bindsym] = ACTIONS(9),
    [anon_sym_bindcode] = ACTIONS(9),
    [anon_sym_assign] = ACTIONS(11),
    [anon_sym_client] = ACTIONS(13),
    [anon_sym_font] = ACTIONS(15),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_set_from_resource] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_mode] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_exec,
    ACTIONS(37), 1,
      anon_sym_assign,
    ACTIONS(40), 1,
      anon_sym_client,
    ACTIONS(43), 1,
      anon_sym_font,
    ACTIONS(46), 1,
      anon_sym_set,
    ACTIONS(49), 1,
      anon_sym_set_from_resource,
    ACTIONS(52), 1,
      anon_sym_for_window,
    ACTIONS(55), 1,
      anon_sym_mode,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(31), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(26), 9,
      sym_command,
      sym_binding,
      sym_assign,
      sym_client,
      sym_font,
      sym_set,
      sym_set_from_resource,
      sym_for_window,
      sym_mode,
  [55] = 14,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_assign,
    ACTIONS(40), 1,
      anon_sym_client,
    ACTIONS(43), 1,
      anon_sym_font,
    ACTIONS(55), 1,
      anon_sym_mode,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_exec,
    ACTIONS(69), 1,
      anon_sym_set,
    ACTIONS(72), 1,
      anon_sym_set_from_resource,
    ACTIONS(75), 1,
      anon_sym_for_window,
    ACTIONS(66), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(63), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(26), 9,
      sym_command,
      sym_binding,
      sym_assign,
      sym_client,
      sym_font,
      sym_set,
      sym_set_from_resource,
      sym_for_window,
      sym_mode,
  [110] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_exec,
    ACTIONS(11), 1,
      anon_sym_assign,
    ACTIONS(13), 1,
      anon_sym_client,
    ACTIONS(15), 1,
      anon_sym_font,
    ACTIONS(17), 1,
      anon_sym_set,
    ACTIONS(19), 1,
      anon_sym_set_from_resource,
    ACTIONS(21), 1,
      anon_sym_for_window,
    ACTIONS(23), 1,
      anon_sym_mode,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(26), 9,
      sym_command,
      sym_binding,
      sym_assign,
      sym_client,
      sym_font,
      sym_set,
      sym_set_from_resource,
      sym_for_window,
      sym_mode,
  [165] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_assign,
    ACTIONS(13), 1,
      anon_sym_client,
    ACTIONS(15), 1,
      anon_sym_font,
    ACTIONS(23), 1,
      anon_sym_mode,
    ACTIONS(80), 1,
      anon_sym_exec,
    ACTIONS(86), 1,
      anon_sym_set,
    ACTIONS(88), 1,
      anon_sym_set_from_resource,
    ACTIONS(90), 1,
      anon_sym_for_window,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(6), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(82), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(26), 9,
      sym_command,
      sym_binding,
      sym_assign,
      sym_client,
      sym_font,
      sym_set,
      sym_set_from_resource,
      sym_for_window,
      sym_mode,
  [220] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_assign,
    ACTIONS(13), 1,
      anon_sym_client,
    ACTIONS(15), 1,
      anon_sym_font,
    ACTIONS(23), 1,
      anon_sym_mode,
    ACTIONS(80), 1,
      anon_sym_exec,
    ACTIONS(86), 1,
      anon_sym_set,
    ACTIONS(88), 1,
      anon_sym_set_from_resource,
    ACTIONS(90), 1,
      anon_sym_for_window,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(82), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(26), 9,
      sym_command,
      sym_binding,
      sym_assign,
      sym_client,
      sym_font,
      sym_set,
      sym_set_from_resource,
      sym_for_window,
      sym_mode,
  [275] = 5,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 2,
      sym_arg,
      sym_variable,
    ACTIONS(102), 2,
      sym_flag,
      sym_quoted_string,
    STATE(8), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(98), 14,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
  [307] = 5,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 2,
      sym_arg,
      sym_variable,
    ACTIONS(111), 2,
      sym_flag,
      sym_quoted_string,
    STATE(8), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(106), 14,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
  [339] = 4,
    ACTIONS(114), 2,
      sym_arg,
      sym_variable,
    ACTIONS(117), 2,
      sym_flag,
      sym_quoted_string,
    STATE(9), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(106), 15,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [369] = 4,
    ACTIONS(120), 2,
      sym_arg,
      sym_variable,
    ACTIONS(122), 2,
      sym_flag,
      sym_quoted_string,
    STATE(9), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(98), 15,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [399] = 7,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      sym_arg,
    ACTIONS(130), 1,
      sym_flag,
    ACTIONS(132), 1,
      sym_quoted_string,
    STATE(18), 1,
      aux_sym_command_repeat1,
    STATE(24), 1,
      aux_sym_command_repeat2,
    ACTIONS(126), 14,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
  [434] = 6,
    ACTIONS(136), 1,
      sym_arg,
    ACTIONS(138), 1,
      sym_flag,
    ACTIONS(140), 1,
      sym_quoted_string,
    STATE(14), 1,
      aux_sym_command_repeat1,
    STATE(19), 1,
      aux_sym_command_repeat2,
    ACTIONS(134), 15,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [467] = 7,
    ACTIONS(140), 1,
      sym_quoted_string,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      sym_arg,
    ACTIONS(146), 1,
      sym_flag,
    STATE(11), 1,
      aux_sym_command_repeat1,
    STATE(19), 1,
      aux_sym_command_repeat2,
    ACTIONS(134), 14,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
  [502] = 6,
    ACTIONS(132), 1,
      sym_quoted_string,
    ACTIONS(148), 1,
      sym_arg,
    ACTIONS(150), 1,
      sym_flag,
    STATE(16), 1,
      aux_sym_command_repeat1,
    STATE(24), 1,
      aux_sym_command_repeat2,
    ACTIONS(126), 15,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [535] = 2,
    ACTIONS(154), 2,
      sym_flag,
      sym_quoted_string,
    ACTIONS(152), 17,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      sym_arg,
      sym_variable,
      anon_sym_mode,
      anon_sym_RBRACE,
  [559] = 5,
    ACTIONS(158), 1,
      sym_arg,
    ACTIONS(161), 1,
      sym_flag,
    ACTIONS(164), 1,
      sym_quoted_string,
    STATE(16), 1,
      aux_sym_command_repeat1,
    ACTIONS(156), 15,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [589] = 2,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      sym_flag,
      sym_quoted_string,
    ACTIONS(152), 16,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      sym_arg,
      sym_variable,
      anon_sym_mode,
  [613] = 5,
    ACTIONS(166), 1,
      sym_arg,
    ACTIONS(169), 1,
      sym_flag,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym_quoted_string,
    ACTIONS(156), 14,
      sym_comment,
      anon_sym_exec,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
  [643] = 4,
    ACTIONS(172), 1,
      sym_quoted_string,
    STATE(23), 1,
      aux_sym_command_repeat2,
    ACTIONS(126), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(124), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [670] = 4,
    ACTIONS(178), 1,
      sym_variable,
    STATE(21), 1,
      aux_sym_client_repeat1,
    ACTIONS(176), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(174), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [697] = 4,
    ACTIONS(184), 1,
      sym_variable,
    STATE(21), 1,
      aux_sym_client_repeat1,
    ACTIONS(182), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(180), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [724] = 4,
    ACTIONS(191), 1,
      sym_variable,
    STATE(20), 1,
      aux_sym_client_repeat1,
    ACTIONS(189), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(187), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [751] = 4,
    ACTIONS(197), 1,
      sym_quoted_string,
    STATE(23), 1,
      aux_sym_command_repeat2,
    ACTIONS(195), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(193), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [778] = 4,
    ACTIONS(172), 1,
      sym_quoted_string,
    STATE(23), 1,
      aux_sym_command_repeat2,
    ACTIONS(202), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(200), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [805] = 3,
    ACTIONS(208), 1,
      sym_unit,
    ACTIONS(206), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(204), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [829] = 2,
    ACTIONS(212), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(210), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [850] = 2,
    ACTIONS(216), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(214), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [871] = 2,
    ACTIONS(220), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(218), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [892] = 2,
    ACTIONS(224), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(222), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [913] = 2,
    ACTIONS(228), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(226), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [934] = 2,
    ACTIONS(232), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(230), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [955] = 2,
    ACTIONS(236), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(234), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [976] = 2,
    ACTIONS(240), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(238), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [997] = 2,
    ACTIONS(244), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(242), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [1018] = 2,
    ACTIONS(248), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(246), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_assign,
      anon_sym_client,
      anon_sym_font,
      anon_sym_set_from_resource,
      anon_sym_for_window,
      anon_sym_mode,
      anon_sym_RBRACE,
  [1039] = 4,
    ACTIONS(100), 1,
      sym_variable,
    STATE(33), 1,
      sym_value,
    STATE(7), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(102), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1055] = 4,
    ACTIONS(100), 1,
      sym_variable,
    STATE(35), 1,
      sym_value,
    STATE(7), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(102), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1071] = 4,
    ACTIONS(100), 1,
      sym_variable,
    STATE(31), 1,
      sym_value,
    STATE(7), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(102), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1087] = 4,
    ACTIONS(100), 1,
      sym_variable,
    STATE(34), 1,
      sym_value,
    STATE(7), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(102), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1103] = 4,
    ACTIONS(120), 1,
      sym_variable,
    STATE(33), 1,
      sym_value,
    STATE(10), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(122), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1119] = 4,
    ACTIONS(120), 1,
      sym_variable,
    STATE(31), 1,
      sym_value,
    STATE(10), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(122), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1135] = 4,
    ACTIONS(120), 1,
      sym_variable,
    STATE(34), 1,
      sym_value,
    STATE(10), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(122), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1151] = 4,
    ACTIONS(120), 1,
      sym_variable,
    STATE(35), 1,
      sym_value,
    STATE(10), 2,
      sym_value_item,
      aux_sym_value_repeat1,
    ACTIONS(122), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1167] = 4,
    ACTIONS(250), 1,
      anon_sym_LBRACKclass_EQ,
    ACTIONS(252), 1,
      anon_sym_LBRACKtitle_EQ,
    STATE(39), 1,
      sym_condition,
    STATE(51), 2,
      sym_class_condition,
      sym_title_condition,
  [1181] = 4,
    ACTIONS(250), 1,
      anon_sym_LBRACKclass_EQ,
    ACTIONS(252), 1,
      anon_sym_LBRACKtitle_EQ,
    STATE(42), 1,
      sym_condition,
    STATE(51), 2,
      sym_class_condition,
      sym_title_condition,
  [1195] = 4,
    ACTIONS(254), 1,
      anon_sym_LBRACKclass_EQ,
    ACTIONS(256), 1,
      anon_sym_LBRACKtitle_EQ,
    STATE(58), 1,
      sym_condition,
    STATE(59), 2,
      sym_class_condition,
      sym_title_condition,
  [1209] = 2,
    ACTIONS(260), 1,
      sym_variable,
    ACTIONS(258), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1218] = 2,
    ACTIONS(264), 1,
      sym_variable,
    ACTIONS(262), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1227] = 2,
    ACTIONS(268), 1,
      sym_variable,
    ACTIONS(266), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1236] = 2,
    ACTIONS(272), 1,
      sym_variable,
    ACTIONS(270), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1245] = 2,
    ACTIONS(276), 1,
      sym_variable,
    ACTIONS(274), 3,
      sym_arg,
      sym_flag,
      sym_quoted_string,
  [1254] = 3,
    ACTIONS(278), 1,
      sym_keymap_trigger,
    ACTIONS(280), 1,
      sym_variable,
    STATE(36), 1,
      sym_keymap,
  [1264] = 3,
    ACTIONS(278), 1,
      sym_keymap_trigger,
    ACTIONS(280), 1,
      sym_variable,
    STATE(40), 1,
      sym_keymap,
  [1274] = 2,
    ACTIONS(282), 1,
      sym_quoted_string,
    STATE(55), 1,
      sym_mode_name,
  [1281] = 2,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_mode_body,
  [1288] = 1,
    ACTIONS(286), 1,
      sym_quoted_string,
  [1292] = 1,
    ACTIONS(288), 1,
      sym_quoted_string,
  [1296] = 1,
    ACTIONS(290), 1,
      anon_sym_number,
  [1300] = 1,
    ACTIONS(274), 1,
      anon_sym_number,
  [1304] = 1,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
  [1308] = 1,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
  [1312] = 1,
    ACTIONS(296), 1,
      sym_variable,
  [1316] = 1,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
  [1320] = 1,
    ACTIONS(300), 1,
      sym_number,
  [1324] = 1,
    ACTIONS(302), 1,
      sym_font_name,
  [1328] = 1,
    ACTIONS(304), 1,
      sym_resource,
  [1332] = 1,
    ACTIONS(306), 1,
      sym_variable,
  [1336] = 1,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
  [1340] = 1,
    ACTIONS(266), 1,
      anon_sym_number,
  [1344] = 1,
    ACTIONS(270), 1,
      anon_sym_number,
  [1348] = 1,
    ACTIONS(310), 1,
      sym_resource,
  [1352] = 1,
    ACTIONS(312), 1,
      sym_property,
  [1356] = 1,
    ACTIONS(314), 1,
      sym_variable,
  [1360] = 1,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
  [1364] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
  [1368] = 1,
    ACTIONS(320), 1,
      sym_variable,
  [1372] = 1,
    ACTIONS(322), 1,
      sym_variable,
  [1376] = 1,
    ACTIONS(324), 1,
      sym_keymap_trigger,
  [1380] = 1,
    ACTIONS(326), 1,
      sym_quoted_string,
  [1384] = 1,
    ACTIONS(328), 1,
      sym_quoted_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 275,
  [SMALL_STATE(8)] = 307,
  [SMALL_STATE(9)] = 339,
  [SMALL_STATE(10)] = 369,
  [SMALL_STATE(11)] = 399,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 467,
  [SMALL_STATE(14)] = 502,
  [SMALL_STATE(15)] = 535,
  [SMALL_STATE(16)] = 559,
  [SMALL_STATE(17)] = 589,
  [SMALL_STATE(18)] = 613,
  [SMALL_STATE(19)] = 643,
  [SMALL_STATE(20)] = 670,
  [SMALL_STATE(21)] = 697,
  [SMALL_STATE(22)] = 724,
  [SMALL_STATE(23)] = 751,
  [SMALL_STATE(24)] = 778,
  [SMALL_STATE(25)] = 805,
  [SMALL_STATE(26)] = 829,
  [SMALL_STATE(27)] = 850,
  [SMALL_STATE(28)] = 871,
  [SMALL_STATE(29)] = 892,
  [SMALL_STATE(30)] = 913,
  [SMALL_STATE(31)] = 934,
  [SMALL_STATE(32)] = 955,
  [SMALL_STATE(33)] = 976,
  [SMALL_STATE(34)] = 997,
  [SMALL_STATE(35)] = 1018,
  [SMALL_STATE(36)] = 1039,
  [SMALL_STATE(37)] = 1055,
  [SMALL_STATE(38)] = 1071,
  [SMALL_STATE(39)] = 1087,
  [SMALL_STATE(40)] = 1103,
  [SMALL_STATE(41)] = 1119,
  [SMALL_STATE(42)] = 1135,
  [SMALL_STATE(43)] = 1151,
  [SMALL_STATE(44)] = 1167,
  [SMALL_STATE(45)] = 1181,
  [SMALL_STATE(46)] = 1195,
  [SMALL_STATE(47)] = 1209,
  [SMALL_STATE(48)] = 1218,
  [SMALL_STATE(49)] = 1227,
  [SMALL_STATE(50)] = 1236,
  [SMALL_STATE(51)] = 1245,
  [SMALL_STATE(52)] = 1254,
  [SMALL_STATE(53)] = 1264,
  [SMALL_STATE(54)] = 1274,
  [SMALL_STATE(55)] = 1281,
  [SMALL_STATE(56)] = 1288,
  [SMALL_STATE(57)] = 1292,
  [SMALL_STATE(58)] = 1296,
  [SMALL_STATE(59)] = 1300,
  [SMALL_STATE(60)] = 1304,
  [SMALL_STATE(61)] = 1308,
  [SMALL_STATE(62)] = 1312,
  [SMALL_STATE(63)] = 1316,
  [SMALL_STATE(64)] = 1320,
  [SMALL_STATE(65)] = 1324,
  [SMALL_STATE(66)] = 1328,
  [SMALL_STATE(67)] = 1332,
  [SMALL_STATE(68)] = 1336,
  [SMALL_STATE(69)] = 1340,
  [SMALL_STATE(70)] = 1344,
  [SMALL_STATE(71)] = 1348,
  [SMALL_STATE(72)] = 1352,
  [SMALL_STATE(73)] = 1356,
  [SMALL_STATE(74)] = 1360,
  [SMALL_STATE(75)] = 1364,
  [SMALL_STATE(76)] = 1368,
  [SMALL_STATE(77)] = 1372,
  [SMALL_STATE(78)] = 1376,
  [SMALL_STATE(79)] = 1380,
  [SMALL_STATE(80)] = 1384,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_item, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_item, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_client, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_client, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(23),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 3, 0, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_body, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_from_resource, 4, 0, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_from_resource, 4, 0, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_body, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_window, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keymap, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keymap, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_condition, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_condition, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_condition, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_condition, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [298] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_name, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
