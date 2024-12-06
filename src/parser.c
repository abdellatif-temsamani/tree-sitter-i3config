#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_include = 2,
  sym_include_source = 3,
  anon_sym_bindsym = 4,
  anon_sym_bindcode = 5,
  anon_sym_DASH_DASHrelease = 6,
  sym_keymap_trigger = 7,
  anon_sym_font = 8,
  sym_font_name = 9,
  sym_variable = 10,
  sym_unit = 11,
  sym_number = 12,
  sym_value = 13,
  sym_source_file = 14,
  sym_statement = 15,
  sym_include = 16,
  sym_command = 17,
  sym_binding = 18,
  sym_keymap = 19,
  sym_font = 20,
  aux_sym_source_file_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_include] = "include",
  [sym_include_source] = "include_source",
  [anon_sym_bindsym] = "bindsym",
  [anon_sym_bindcode] = "bindcode",
  [anon_sym_DASH_DASHrelease] = "--release",
  [sym_keymap_trigger] = "keymap_trigger",
  [anon_sym_font] = "font",
  [sym_font_name] = "font_name",
  [sym_variable] = "variable",
  [sym_unit] = "unit",
  [sym_number] = "number",
  [sym_value] = "value",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_include] = "include",
  [sym_command] = "command",
  [sym_binding] = "binding",
  [sym_keymap] = "keymap",
  [sym_font] = "font",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_include] = anon_sym_include,
  [sym_include_source] = sym_include_source,
  [anon_sym_bindsym] = anon_sym_bindsym,
  [anon_sym_bindcode] = anon_sym_bindcode,
  [anon_sym_DASH_DASHrelease] = anon_sym_DASH_DASHrelease,
  [sym_keymap_trigger] = sym_keymap_trigger,
  [anon_sym_font] = anon_sym_font,
  [sym_font_name] = sym_font_name,
  [sym_variable] = sym_variable,
  [sym_unit] = sym_unit,
  [sym_number] = sym_number,
  [sym_value] = sym_value,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_include] = sym_include,
  [sym_command] = sym_command,
  [sym_binding] = sym_binding,
  [sym_keymap] = sym_keymap,
  [sym_font] = sym_font,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [sym_include_source] = {
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
  [anon_sym_DASH_DASHrelease] = {
    .visible = true,
    .named = false,
  },
  [sym_keymap_trigger] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
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
  [sym_font] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [6] = 6,
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '-') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 31:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 32:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 33:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(35);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 33},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_bindsym] = ACTIONS(1),
    [anon_sym_bindcode] = ACTIONS(1),
    [anon_sym_DASH_DASHrelease] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_unit] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_statement] = STATE(2),
    [sym_include] = STATE(7),
    [sym_command] = STATE(7),
    [sym_binding] = STATE(6),
    [sym_font] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_bindsym] = ACTIONS(9),
    [anon_sym_bindcode] = ACTIONS(9),
    [anon_sym_font] = ACTIONS(11),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_include] = STATE(7),
    [sym_command] = STATE(7),
    [sym_binding] = STATE(6),
    [sym_font] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_bindsym] = ACTIONS(9),
    [anon_sym_bindcode] = ACTIONS(9),
    [anon_sym_font] = ACTIONS(11),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_include] = STATE(7),
    [sym_command] = STATE(7),
    [sym_binding] = STATE(6),
    [sym_font] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_bindsym] = ACTIONS(23),
    [anon_sym_bindcode] = ACTIONS(23),
    [anon_sym_font] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(31), 1,
      sym_unit,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [15] = 2,
    ACTIONS(37), 1,
      sym_unit,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [27] = 1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [36] = 1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [45] = 1,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [54] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [63] = 1,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [72] = 1,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [81] = 1,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
  [90] = 4,
    ACTIONS(51), 1,
      anon_sym_DASH_DASHrelease,
    ACTIONS(53), 1,
      sym_keymap_trigger,
    ACTIONS(55), 1,
      sym_variable,
    STATE(18), 1,
      sym_keymap,
  [103] = 3,
    ACTIONS(53), 1,
      sym_keymap_trigger,
    ACTIONS(55), 1,
      sym_variable,
    STATE(19), 1,
      sym_keymap,
  [113] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [117] = 1,
    ACTIONS(59), 1,
      sym_font_name,
  [121] = 1,
    ACTIONS(61), 1,
      sym_include_source,
  [125] = 1,
    ACTIONS(63), 1,
      sym_value,
  [129] = 1,
    ACTIONS(65), 1,
      sym_value,
  [133] = 1,
    ACTIONS(67), 1,
      sym_value,
  [137] = 1,
    ACTIONS(69), 1,
      sym_keymap_trigger,
  [141] = 1,
    ACTIONS(71), 1,
      sym_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 27,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 54,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 72,
  [SMALL_STATE(12)] = 81,
  [SMALL_STATE(13)] = 90,
  [SMALL_STATE(14)] = 103,
  [SMALL_STATE(15)] = 113,
  [SMALL_STATE(16)] = 117,
  [SMALL_STATE(17)] = 121,
  [SMALL_STATE(18)] = 125,
  [SMALL_STATE(19)] = 129,
  [SMALL_STATE(20)] = 133,
  [SMALL_STATE(21)] = 137,
  [SMALL_STATE(22)] = 141,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
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
