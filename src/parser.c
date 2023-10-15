#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_shebang = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_int = 6,
  sym_float = 7,
  sym_symbol = 8,
  sym_string = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym__element = 12,
  sym__form = 13,
  sym__sequence = 14,
  sym_expression = 15,
  sym_list = 16,
  sym__identifier = 17,
  sym__numeric_literal = 18,
  aux_sym_source_file_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym__form] = "_form",
  [sym__sequence] = "_sequence",
  [sym_expression] = "expression",
  [sym_list] = "list",
  [sym__identifier] = "_identifier",
  [sym__numeric_literal] = "_numeric_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym__form] = sym__form,
  [sym__sequence] = sym__sequence,
  [sym_expression] = sym_expression,
  [sym_list] = sym_list,
  [sym__identifier] = sym__identifier,
  [sym__numeric_literal] = sym__numeric_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym__sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
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
  [9] = 2,
  [10] = 4,
  [11] = 7,
  [12] = 3,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 16,
  [20] = 17,
  [21] = 21,
};

static inline bool sym_shebang_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= ';' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= ';' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= ')')))
    : (c <= ';' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(14);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_shebang);
      if (sym_shebang_character_set_1(lookahead)) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_float);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(4);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym__element] = STATE(5),
    [sym__form] = STATE(5),
    [sym__sequence] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym__identifier] = STATE(5),
    [sym__numeric_literal] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_int] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_symbol] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(18),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(18),
    [sym_int] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_symbol] = ACTIONS(23),
    [sym_string] = ACTIONS(26),
    [sym_comment] = ACTIONS(26),
  },
  [3] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(33),
    [sym_int] = ACTIONS(35),
    [sym_float] = ACTIONS(35),
    [sym_symbol] = ACTIONS(35),
    [sym_string] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
  },
  [4] = {
    [sym__element] = STATE(3),
    [sym__form] = STATE(3),
    [sym__sequence] = STATE(3),
    [sym_expression] = STATE(3),
    [sym_list] = STATE(3),
    [sym__identifier] = STATE(3),
    [sym__numeric_literal] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(39),
    [sym_int] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_symbol] = ACTIONS(41),
    [sym_string] = ACTIONS(43),
    [sym_comment] = ACTIONS(43),
  },
  [5] = {
    [sym__element] = STATE(9),
    [sym__form] = STATE(9),
    [sym__sequence] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_list] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym__numeric_literal] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_int] = ACTIONS(47),
    [sym_float] = ACTIONS(47),
    [sym_symbol] = ACTIONS(47),
    [sym_string] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
  },
  [6] = {
    [sym__element] = STATE(9),
    [sym__form] = STATE(9),
    [sym__sequence] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_list] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym__numeric_literal] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_int] = ACTIONS(47),
    [sym_float] = ACTIONS(47),
    [sym_symbol] = ACTIONS(47),
    [sym_string] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
  },
  [7] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_int] = ACTIONS(35),
    [sym_float] = ACTIONS(35),
    [sym_symbol] = ACTIONS(35),
    [sym_string] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
  },
  [8] = {
    [sym__element] = STATE(6),
    [sym__form] = STATE(6),
    [sym__sequence] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym__identifier] = STATE(6),
    [sym__numeric_literal] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_int] = ACTIONS(55),
    [sym_float] = ACTIONS(55),
    [sym_symbol] = ACTIONS(55),
    [sym_string] = ACTIONS(57),
    [sym_comment] = ACTIONS(57),
  },
  [9] = {
    [sym__element] = STATE(9),
    [sym__form] = STATE(9),
    [sym__sequence] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_list] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym__numeric_literal] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(62),
    [sym_int] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [sym_symbol] = ACTIONS(65),
    [sym_string] = ACTIONS(68),
    [sym_comment] = ACTIONS(68),
  },
  [10] = {
    [sym__element] = STATE(12),
    [sym__form] = STATE(12),
    [sym__sequence] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_list] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym__numeric_literal] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym_int] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_symbol] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
  },
  [11] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_int] = ACTIONS(35),
    [sym_float] = ACTIONS(35),
    [sym_symbol] = ACTIONS(35),
    [sym_string] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
  },
  [12] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_int] = ACTIONS(35),
    [sym_float] = ACTIONS(35),
    [sym_symbol] = ACTIONS(35),
    [sym_string] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
  },
  [13] = {
    [sym__element] = STATE(7),
    [sym__form] = STATE(7),
    [sym__sequence] = STATE(7),
    [sym_expression] = STATE(7),
    [sym_list] = STATE(7),
    [sym__identifier] = STATE(7),
    [sym__numeric_literal] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_int] = ACTIONS(81),
    [sym_float] = ACTIONS(81),
    [sym_symbol] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(83),
  },
  [14] = {
    [sym__element] = STATE(11),
    [sym__form] = STATE(11),
    [sym__sequence] = STATE(11),
    [sym_expression] = STATE(11),
    [sym_list] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym__numeric_literal] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_int] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [sym_symbol] = ACTIONS(85),
    [sym_string] = ACTIONS(87),
    [sym_comment] = ACTIONS(87),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(91), 3,
      sym_int,
      sym_float,
      sym_symbol,
    ACTIONS(89), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_comment,
  [14] = 2,
    ACTIONS(95), 3,
      sym_int,
      sym_float,
      sym_symbol,
    ACTIONS(93), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_comment,
  [28] = 2,
    ACTIONS(99), 3,
      sym_int,
      sym_float,
      sym_symbol,
    ACTIONS(97), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_comment,
  [42] = 2,
    ACTIONS(91), 3,
      sym_int,
      sym_float,
      sym_symbol,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_string,
      sym_comment,
  [55] = 2,
    ACTIONS(95), 3,
      sym_int,
      sym_float,
      sym_symbol,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_string,
      sym_comment,
  [68] = 2,
    ACTIONS(99), 3,
      sym_int,
      sym_float,
      sym_symbol,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_string,
      sym_comment,
  [81] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 14,
  [SMALL_STATE(17)] = 28,
  [SMALL_STATE(18)] = 42,
  [SMALL_STATE(19)] = 55,
  [SMALL_STATE(20)] = 68,
  [SMALL_STATE(21)] = 81,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hy(void) {
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
