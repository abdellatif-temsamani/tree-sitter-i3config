#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_include = 2,
  sym_include_source = 3,
  anon_sym_bindsym = 4,
  anon_sym_bindcode = 5,
  sym_keymap_trigger = 6,
  anon_sym_DASH_DASHrelease = 7,
  anon_sym_DASH_DASHborder = 8,
  anon_sym_DASH_DASHwhole_DASHwindow = 9,
  anon_sym_DASH_DASHexclude_DASHtitlebar = 10,
  anon_sym_font = 11,
  sym_font_name = 12,
  anon_sym_mode = 13,
  sym_mode_name = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  sym_variable = 17,
  sym_unit = 18,
  sym_number = 19,
  sym_value = 20,
  sym_source_file = 21,
  sym_statement = 22,
  sym_include = 23,
  sym_binding = 24,
  sym_keymap = 25,
  sym_keymap_flags = 26,
  sym_font = 27,
  sym_mode = 28,
  sym_mode_body = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_binding_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_include] = "include",
  [sym_include_source] = "include_source",
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
  [sym_unit] = "unit",
  [sym_number] = "number",
  [sym_value] = "value",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_include] = "include",
  [sym_binding] = "binding",
  [sym_keymap] = "keymap",
  [sym_keymap_flags] = "keymap_flags",
  [sym_font] = "font",
  [sym_mode] = "mode",
  [sym_mode_body] = "mode_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_binding_repeat1] = "binding_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_include] = anon_sym_include,
  [sym_include_source] = sym_include_source,
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
  [sym_unit] = sym_unit,
  [sym_number] = sym_number,
  [sym_value] = sym_value,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_include] = sym_include,
  [sym_binding] = sym_binding,
  [sym_keymap] = sym_keymap,
  [sym_keymap_flags] = sym_keymap_flags,
  [sym_font] = sym_font,
  [sym_mode] = sym_mode,
  [sym_mode_body] = sym_mode_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_binding_repeat1] = aux_sym_binding_repeat1,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '"', 2,
        '#', 78,
        '$', 70,
        '-', 5,
        'b', 33,
        'f', 49,
        'i', 42,
        'm', 46,
        'p', 52,
        '{', 94,
        '}', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '-') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 66:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 67:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 68:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 69:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_include_source);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_include_source);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_keymap_trigger);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrelease);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH_DASHborder);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_DASHwhole_DASHwindow);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH_DASHexclude_DASHtitlebar);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_font_name);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_mode_name);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_mode_name);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
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
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 68},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
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
    [sym_unit] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_statement] = STATE(3),
    [sym_include] = STATE(10),
    [sym_binding] = STATE(10),
    [sym_font] = STATE(10),
    [sym_mode] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_bindsym] = ACTIONS(9),
    [anon_sym_bindcode] = ACTIONS(9),
    [anon_sym_font] = ACTIONS(11),
    [anon_sym_mode] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_include,
    ACTIONS(26), 1,
      anon_sym_font,
    ACTIONS(29), 1,
      anon_sym_mode,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(23), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(10), 4,
      sym_include,
      sym_binding,
      sym_font,
      sym_mode,
  [31] = 8,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_font,
    ACTIONS(13), 1,
      anon_sym_mode,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(10), 4,
      sym_include,
      sym_binding,
      sym_font,
      sym_mode,
  [61] = 8,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_font,
    ACTIONS(13), 1,
      anon_sym_mode,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(10), 4,
      sym_include,
      sym_binding,
      sym_font,
      sym_mode,
  [91] = 8,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_font,
    ACTIONS(13), 1,
      anon_sym_mode,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_bindsym,
      anon_sym_bindcode,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(10), 4,
      sym_include,
      sym_binding,
      sym_font,
      sym_mode,
  [121] = 3,
    ACTIONS(40), 1,
      sym_unit,
    ACTIONS(42), 1,
      sym_number,
    ACTIONS(38), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [138] = 5,
    ACTIONS(44), 1,
      sym_keymap_trigger,
    ACTIONS(48), 1,
      sym_variable,
    STATE(28), 1,
      sym_keymap,
    STATE(8), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(46), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [158] = 5,
    ACTIONS(44), 1,
      sym_keymap_trigger,
    ACTIONS(48), 1,
      sym_variable,
    STATE(30), 1,
      sym_keymap,
    STATE(16), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(46), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [178] = 2,
    ACTIONS(52), 1,
      sym_unit,
    ACTIONS(50), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [192] = 1,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [203] = 1,
    ACTIONS(56), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [214] = 1,
    ACTIONS(50), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [225] = 1,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [236] = 1,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [247] = 1,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [258] = 3,
    ACTIONS(64), 2,
      sym_keymap_trigger,
      sym_variable,
    STATE(16), 2,
      sym_keymap_flags,
      aux_sym_binding_repeat1,
    ACTIONS(66), 4,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
  [273] = 1,
    ACTIONS(69), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [284] = 1,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [295] = 1,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_include,
      anon_sym_bindsym,
      anon_sym_bindcode,
      anon_sym_font,
      anon_sym_mode,
      anon_sym_RBRACE,
  [306] = 1,
    ACTIONS(75), 6,
      sym_keymap_trigger,
      anon_sym_DASH_DASHrelease,
      anon_sym_DASH_DASHborder,
      anon_sym_DASH_DASHwhole_DASHwindow,
      anon_sym_DASH_DASHexclude_DASHtitlebar,
      sym_variable,
  [315] = 2,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_mode_body,
  [322] = 1,
    ACTIONS(79), 1,
      sym_include_source,
  [326] = 1,
    ACTIONS(81), 1,
      sym_mode_name,
  [330] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [334] = 1,
    ACTIONS(85), 1,
      sym_value,
  [338] = 1,
    ACTIONS(87), 1,
      sym_font_name,
  [342] = 1,
    ACTIONS(89), 1,
      sym_keymap_trigger,
  [346] = 1,
    ACTIONS(91), 1,
      sym_value,
  [350] = 1,
    ACTIONS(93), 1,
      sym_value,
  [354] = 1,
    ACTIONS(95), 1,
      sym_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 192,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 258,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 306,
  [SMALL_STATE(21)] = 315,
  [SMALL_STATE(22)] = 322,
  [SMALL_STATE(23)] = 326,
  [SMALL_STATE(24)] = 330,
  [SMALL_STATE(25)] = 334,
  [SMALL_STATE(26)] = 338,
  [SMALL_STATE(27)] = 342,
  [SMALL_STATE(28)] = 346,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 354,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_font, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_body, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_flags, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
