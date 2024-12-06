#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  sym_value = 21,
  sym_arg = 22,
  sym_flag = 23,
  sym_variable = 24,
  sym_quoted_string = 25,
  sym_resource = 26,
  sym_number = 27,
  sym_unit = 28,
  anon_sym_mode = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  sym_source_file = 32,
  sym_statement = 33,
  sym_command = 34,
  sym_binding = 35,
  sym_keymap = 36,
  sym_assign = 37,
  sym_client = 38,
  sym_font = 39,
  sym_set = 40,
  sym_set_from_resource = 41,
  sym_for_window = 42,
  sym_condition = 43,
  sym_class_condition = 44,
  sym_title_condition = 45,
  sym_mode = 46,
  sym_mode_name = 47,
  sym_mode_body = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_command_repeat1 = 50,
  aux_sym_command_repeat2 = 51,
  aux_sym_client_repeat1 = 52,
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
  [sym_value] = "value",
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
  [sym_mode] = "mode",
  [sym_mode_name] = "mode_name",
  [sym_mode_body] = "mode_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_client_repeat1] = "client_repeat1",
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
  [sym_value] = sym_value,
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
  [sym_mode] = sym_mode,
  [sym_mode_name] = sym_mode_name,
  [sym_mode_body] = sym_mode_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_client_repeat1] = aux_sym_client_repeat1,
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
  [sym_value] = {
    .visible = true,
    .named = true,
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 8,
  [11] = 11,
  [12] = 11,
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
  [57] = 48,
  [58] = 58,
  [59] = 59,
  [60] = 46,
  [61] = 47,
  [62] = 56,
  [63] = 37,
  [64] = 43,
  [65] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '"', 2,
        '#', 140,
        '$', 126,
        '-', 5,
        '.', 127,
        '[', 20,
        ']', 170,
        'a', 102,
        'b', 48,
        'c', 67,
        'e', 119,
        'f', 62,
        'm', 83,
        'n', 114,
        'p', 92,
        's', 38,
        't', 54,
        '{', 247,
        '}', 248,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(129);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(244);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(237);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 116:
      if (lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 117:
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 118:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 120:
      if (lookahead == 'x') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 123:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(123);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 124:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 125:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(125);
      if (lookahead != 0) ADVANCE(128);
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
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(132);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(238);
      END_STATE();
    case 130:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 131:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
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
        '"', 2,
        '#', 138,
        '-', 6,
        'a', 103,
        'b', 50,
        'c', 66,
        'e', 120,
        'f', 64,
        'm', 84,
        's', 35,
        't', 53,
        '}', 249,
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
      if (lookahead == '_') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(15);
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
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(195);
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
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '_') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '_') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'g') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'w') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'w') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'y') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == 'y') ADVANCE(226);
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
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_resource);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 249:
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 123},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 123},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 123},
  [42] = {.lex_state = 123},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 123},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 123},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 123},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 125},
  [60] = {.lex_state = 123},
  [61] = {.lex_state = 123},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
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
    [sym_source_file] = STATE(58),
    [sym_statement] = STATE(3),
    [sym_command] = STATE(20),
    [sym_binding] = STATE(20),
    [sym_assign] = STATE(20),
    [sym_client] = STATE(20),
    [sym_font] = STATE(20),
    [sym_set] = STATE(20),
    [sym_set_from_resource] = STATE(20),
    [sym_for_window] = STATE(20),
    [sym_mode] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(3),
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
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_exec,
    ACTIONS(39), 1,
      anon_sym_assign,
    ACTIONS(42), 1,
      anon_sym_client,
    ACTIONS(45), 1,
      anon_sym_font,
    ACTIONS(48), 1,
      anon_sym_set,
    ACTIONS(51), 1,
      anon_sym_set_from_resource,
    ACTIONS(54), 1,
      anon_sym_for_window,
    ACTIONS(57), 1,
      anon_sym_mode,
    ACTIONS(36), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(33), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(20), 9,
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
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(20), 9,
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
    ACTIONS(62), 1,
      anon_sym_exec,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(6), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(64), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(20), 9,
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
    ACTIONS(17), 1,
      anon_sym_set,
    ACTIONS(19), 1,
      anon_sym_set_from_resource,
    ACTIONS(21), 1,
      anon_sym_for_window,
    ACTIONS(23), 1,
      anon_sym_mode,
    ACTIONS(62), 1,
      anon_sym_exec,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(4), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(64), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(20), 9,
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
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_assign,
    ACTIONS(42), 1,
      anon_sym_client,
    ACTIONS(45), 1,
      anon_sym_font,
    ACTIONS(48), 1,
      anon_sym_set,
    ACTIONS(51), 1,
      anon_sym_set_from_resource,
    ACTIONS(54), 1,
      anon_sym_for_window,
    ACTIONS(57), 1,
      anon_sym_mode,
    ACTIONS(70), 1,
      anon_sym_exec,
    ACTIONS(36), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(6), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(73), 3,
      anon_sym_exec_always,
      anon_sym_floating_modifier,
      anon_sym_tiling_drag,
    STATE(20), 9,
      sym_command,
      sym_binding,
      sym_assign,
      sym_client,
      sym_font,
      sym_set,
      sym_set_from_resource,
      sym_for_window,
      sym_mode,
  [275] = 7,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      sym_arg,
    ACTIONS(82), 1,
      sym_flag,
    ACTIONS(84), 1,
      sym_quoted_string,
    STATE(8), 1,
      aux_sym_command_repeat1,
    STATE(14), 1,
      aux_sym_command_repeat2,
    ACTIONS(78), 14,
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
  [310] = 7,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_arg,
    ACTIONS(92), 1,
      sym_flag,
    ACTIONS(94), 1,
      sym_quoted_string,
    STATE(11), 1,
      aux_sym_command_repeat1,
    STATE(13), 1,
      aux_sym_command_repeat2,
    ACTIONS(88), 14,
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
  [345] = 6,
    ACTIONS(84), 1,
      sym_quoted_string,
    ACTIONS(96), 1,
      sym_arg,
    ACTIONS(98), 1,
      sym_flag,
    STATE(10), 1,
      aux_sym_command_repeat1,
    STATE(14), 1,
      aux_sym_command_repeat2,
    ACTIONS(78), 15,
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
  [378] = 6,
    ACTIONS(94), 1,
      sym_quoted_string,
    ACTIONS(100), 1,
      sym_arg,
    ACTIONS(102), 1,
      sym_flag,
    STATE(12), 1,
      aux_sym_command_repeat1,
    STATE(13), 1,
      aux_sym_command_repeat2,
    ACTIONS(88), 15,
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
  [411] = 5,
    ACTIONS(108), 1,
      sym_arg,
    ACTIONS(111), 1,
      sym_flag,
    STATE(11), 1,
      aux_sym_command_repeat1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_quoted_string,
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
  [441] = 5,
    ACTIONS(104), 1,
      sym_quoted_string,
    ACTIONS(114), 1,
      sym_arg,
    ACTIONS(117), 1,
      sym_flag,
    STATE(12), 1,
      aux_sym_command_repeat1,
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
  [471] = 4,
    ACTIONS(124), 1,
      sym_quoted_string,
    STATE(16), 1,
      aux_sym_command_repeat2,
    ACTIONS(122), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(120), 14,
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
  [498] = 4,
    ACTIONS(124), 1,
      sym_quoted_string,
    STATE(16), 1,
      aux_sym_command_repeat2,
    ACTIONS(88), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(86), 14,
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
  [525] = 4,
    ACTIONS(130), 1,
      sym_variable,
    STATE(17), 1,
      aux_sym_client_repeat1,
    ACTIONS(128), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(126), 14,
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
  [552] = 4,
    ACTIONS(136), 1,
      sym_quoted_string,
    STATE(16), 1,
      aux_sym_command_repeat2,
    ACTIONS(134), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(132), 14,
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
  [579] = 4,
    ACTIONS(143), 1,
      sym_variable,
    STATE(18), 1,
      aux_sym_client_repeat1,
    ACTIONS(141), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(139), 14,
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
  [606] = 4,
    ACTIONS(149), 1,
      sym_variable,
    STATE(18), 1,
      aux_sym_client_repeat1,
    ACTIONS(147), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(145), 14,
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
  [633] = 3,
    ACTIONS(156), 1,
      sym_unit,
    ACTIONS(154), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(152), 14,
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
  [657] = 2,
    ACTIONS(160), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(158), 14,
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
  [678] = 2,
    ACTIONS(164), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(162), 14,
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
  [699] = 2,
    ACTIONS(168), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(166), 14,
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
  [720] = 2,
    ACTIONS(172), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(170), 14,
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
  [741] = 2,
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
  [762] = 2,
    ACTIONS(180), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(178), 14,
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
  [783] = 2,
    ACTIONS(184), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(182), 14,
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
  [804] = 2,
    ACTIONS(188), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(186), 14,
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
  [825] = 2,
    ACTIONS(192), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(190), 14,
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
  [846] = 2,
    ACTIONS(196), 2,
      anon_sym_exec,
      anon_sym_set,
    ACTIONS(194), 14,
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
  [867] = 4,
    ACTIONS(198), 1,
      anon_sym_LBRACKclass_EQ,
    ACTIONS(200), 1,
      anon_sym_LBRACKtitle_EQ,
    STATE(45), 1,
      sym_condition,
    STATE(48), 2,
      sym_class_condition,
      sym_title_condition,
  [881] = 4,
    ACTIONS(202), 1,
      anon_sym_LBRACKclass_EQ,
    ACTIONS(204), 1,
      anon_sym_LBRACKtitle_EQ,
    STATE(53), 1,
      sym_condition,
    STATE(57), 2,
      sym_class_condition,
      sym_title_condition,
  [895] = 3,
    ACTIONS(206), 1,
      sym_keymap_trigger,
    ACTIONS(208), 1,
      sym_variable,
    STATE(41), 1,
      sym_keymap,
  [905] = 2,
    ACTIONS(210), 1,
      sym_quoted_string,
    STATE(34), 1,
      sym_mode_name,
  [912] = 2,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_mode_body,
  [919] = 1,
    ACTIONS(214), 1,
      sym_property,
  [923] = 1,
    ACTIONS(216), 1,
      sym_value,
  [927] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
  [931] = 1,
    ACTIONS(220), 1,
      sym_variable,
  [935] = 1,
    ACTIONS(222), 1,
      sym_value,
  [939] = 1,
    ACTIONS(224), 1,
      sym_keymap_trigger,
  [943] = 1,
    ACTIONS(226), 1,
      sym_value,
  [947] = 1,
    ACTIONS(228), 1,
      sym_value,
  [951] = 1,
    ACTIONS(230), 1,
      sym_quoted_string,
  [955] = 1,
    ACTIONS(232), 1,
      sym_quoted_string,
  [959] = 1,
    ACTIONS(234), 1,
      anon_sym_number,
  [963] = 1,
    ACTIONS(236), 1,
      anon_sym_number,
  [967] = 1,
    ACTIONS(238), 1,
      anon_sym_number,
  [971] = 1,
    ACTIONS(240), 1,
      anon_sym_number,
  [975] = 1,
    ACTIONS(242), 1,
      sym_variable,
  [979] = 1,
    ACTIONS(244), 1,
      sym_number,
  [983] = 1,
    ACTIONS(246), 1,
      sym_value,
  [987] = 1,
    ACTIONS(248), 1,
      sym_resource,
  [991] = 1,
    ACTIONS(250), 1,
      sym_value,
  [995] = 1,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
  [999] = 1,
    ACTIONS(254), 1,
      sym_variable,
  [1003] = 1,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
  [1007] = 1,
    ACTIONS(240), 1,
      sym_value,
  [1011] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1015] = 1,
    ACTIONS(260), 1,
      sym_font_name,
  [1019] = 1,
    ACTIONS(236), 1,
      sym_value,
  [1023] = 1,
    ACTIONS(238), 1,
      sym_value,
  [1027] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
  [1031] = 1,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
  [1035] = 1,
    ACTIONS(266), 1,
      sym_quoted_string,
  [1039] = 1,
    ACTIONS(268), 1,
      sym_quoted_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 275,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 345,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 411,
  [SMALL_STATE(12)] = 441,
  [SMALL_STATE(13)] = 471,
  [SMALL_STATE(14)] = 498,
  [SMALL_STATE(15)] = 525,
  [SMALL_STATE(16)] = 552,
  [SMALL_STATE(17)] = 579,
  [SMALL_STATE(18)] = 606,
  [SMALL_STATE(19)] = 633,
  [SMALL_STATE(20)] = 657,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 699,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 741,
  [SMALL_STATE(25)] = 762,
  [SMALL_STATE(26)] = 783,
  [SMALL_STATE(27)] = 804,
  [SMALL_STATE(28)] = 825,
  [SMALL_STATE(29)] = 846,
  [SMALL_STATE(30)] = 867,
  [SMALL_STATE(31)] = 881,
  [SMALL_STATE(32)] = 895,
  [SMALL_STATE(33)] = 905,
  [SMALL_STATE(34)] = 912,
  [SMALL_STATE(35)] = 919,
  [SMALL_STATE(36)] = 923,
  [SMALL_STATE(37)] = 927,
  [SMALL_STATE(38)] = 931,
  [SMALL_STATE(39)] = 935,
  [SMALL_STATE(40)] = 939,
  [SMALL_STATE(41)] = 943,
  [SMALL_STATE(42)] = 947,
  [SMALL_STATE(43)] = 951,
  [SMALL_STATE(44)] = 955,
  [SMALL_STATE(45)] = 959,
  [SMALL_STATE(46)] = 963,
  [SMALL_STATE(47)] = 967,
  [SMALL_STATE(48)] = 971,
  [SMALL_STATE(49)] = 975,
  [SMALL_STATE(50)] = 979,
  [SMALL_STATE(51)] = 983,
  [SMALL_STATE(52)] = 987,
  [SMALL_STATE(53)] = 991,
  [SMALL_STATE(54)] = 995,
  [SMALL_STATE(55)] = 999,
  [SMALL_STATE(56)] = 1003,
  [SMALL_STATE(57)] = 1007,
  [SMALL_STATE(58)] = 1011,
  [SMALL_STATE(59)] = 1015,
  [SMALL_STATE(60)] = 1019,
  [SMALL_STATE(61)] = 1023,
  [SMALL_STATE(62)] = 1027,
  [SMALL_STATE(63)] = 1031,
  [SMALL_STATE(64)] = 1035,
  [SMALL_STATE(65)] = 1039,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_client, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_client, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_client, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_client_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_client_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 3, 0, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_window, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_font, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_body, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_from_resource, 4, 0, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_from_resource, 4, 0, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_body, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_condition, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_condition, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_name, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
