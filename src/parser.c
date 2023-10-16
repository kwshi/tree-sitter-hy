#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_shebang = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_int = 6,
  sym_float = 7,
  sym_complex = 8,
  anon_sym_DOT = 9,
  anon_sym_DOT2 = 10,
  sym_keyword = 11,
  sym_symbol = 12,
  aux_sym__symbol_immediate_token1 = 13,
  sym_string = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym__element = 17,
  sym__form = 18,
  sym__sequence = 19,
  sym_expression = 20,
  sym_list = 21,
  sym__identifier = 22,
  sym__numeric_literal = 23,
  sym_dotted_identifier = 24,
  sym__symbol_immediate = 25,
  sym__string = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_dotted_identifier_repeat1 = 28,
  aux_sym_dotted_identifier_repeat2 = 29,
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
  [sym_complex] = "complex",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT2] = ".",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
  [aux_sym__symbol_immediate_token1] = "symbol",
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
  [sym_dotted_identifier] = "dotted_identifier",
  [sym__symbol_immediate] = "_symbol_immediate",
  [sym__string] = "_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_dotted_identifier_repeat1] = "dotted_identifier_repeat1",
  [aux_sym_dotted_identifier_repeat2] = "dotted_identifier_repeat2",
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
  [sym_complex] = sym_complex,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
  [aux_sym__symbol_immediate_token1] = sym_symbol,
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
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym__symbol_immediate] = sym__symbol_immediate,
  [sym__string] = sym__string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_dotted_identifier_repeat1] = aux_sym_dotted_identifier_repeat1,
  [aux_sym_dotted_identifier_repeat2] = aux_sym_dotted_identifier_repeat2,
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
  [sym_complex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__symbol_immediate_token1] = {
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
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol_immediate] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_identifier_repeat2] = {
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 5,
  [11] = 8,
  [12] = 2,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 16,
  [23] = 19,
  [24] = 18,
  [25] = 15,
  [26] = 17,
  [27] = 27,
  [28] = 20,
  [29] = 21,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 33,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
};

static inline bool sym_shebang_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < '.'
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= '.' || (c < '`'
      ? (c < '['
        ? c == ';'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '"' || (c < '.'
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym__symbol_immediate_token1_character_set_1(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(53);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(49);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'I') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(6);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(49);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(49);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 21:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(84);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(84);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(84);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(84);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_shebang);
      if (sym_shebang_character_set_1(lookahead)) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(32);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(33);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(37);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(38);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(39);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(49);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(49);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_complex);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_complex);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_keyword);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(26);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (!aux_sym__symbol_immediate_token1_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(42);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(44);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(80);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(61);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(62);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(63);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(42);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(44);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(80);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(67);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(69);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(37);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(38);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == '0') ADVANCE(86);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(86);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(87);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(88);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__symbol_immediate_token1);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [aux_sym__symbol_immediate_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__element] = STATE(6),
    [sym__form] = STATE(6),
    [sym__sequence] = STATE(6),
    [sym_expression] = STATE(6),
    [sym_list] = STATE(6),
    [sym__identifier] = STATE(6),
    [sym__numeric_literal] = STATE(6),
    [sym_dotted_identifier] = STATE(6),
    [sym__string] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_int] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_complex] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_keyword] = ACTIONS(15),
    [sym_symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
  },
  [2] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(22),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_complex] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(30),
    [sym_keyword] = ACTIONS(33),
    [sym_symbol] = ACTIONS(36),
    [sym_string] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
  },
  [3] = {
    [sym__element] = STATE(5),
    [sym__form] = STATE(5),
    [sym__sequence] = STATE(5),
    [sym_expression] = STATE(5),
    [sym_list] = STATE(5),
    [sym__identifier] = STATE(5),
    [sym__numeric_literal] = STATE(5),
    [sym_dotted_identifier] = STATE(5),
    [sym__string] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_int] = ACTIONS(45),
    [sym_float] = ACTIONS(45),
    [sym_complex] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_keyword] = ACTIONS(49),
    [sym_symbol] = ACTIONS(51),
    [sym_string] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
  },
  [4] = {
    [sym__element] = STATE(10),
    [sym__form] = STATE(10),
    [sym__sequence] = STATE(10),
    [sym_expression] = STATE(10),
    [sym_list] = STATE(10),
    [sym__identifier] = STATE(10),
    [sym__numeric_literal] = STATE(10),
    [sym_dotted_identifier] = STATE(10),
    [sym__string] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_int] = ACTIONS(55),
    [sym_float] = ACTIONS(55),
    [sym_complex] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_keyword] = ACTIONS(57),
    [sym_symbol] = ACTIONS(51),
    [sym_string] = ACTIONS(57),
    [sym_comment] = ACTIONS(57),
  },
  [5] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(59),
    [sym_int] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [sym_complex] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(51),
    [sym_string] = ACTIONS(63),
    [sym_comment] = ACTIONS(63),
  },
  [6] = {
    [sym__element] = STATE(12),
    [sym__form] = STATE(12),
    [sym__sequence] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_list] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym__numeric_literal] = STATE(12),
    [sym_dotted_identifier] = STATE(12),
    [sym__string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_int] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [sym_complex] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_keyword] = ACTIONS(69),
    [sym_symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(69),
    [sym_comment] = ACTIONS(69),
  },
  [7] = {
    [sym__element] = STATE(12),
    [sym__form] = STATE(12),
    [sym__sequence] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_list] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym__numeric_literal] = STATE(12),
    [sym_dotted_identifier] = STATE(12),
    [sym__string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_int] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [sym_complex] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_keyword] = ACTIONS(69),
    [sym_symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(69),
    [sym_comment] = ACTIONS(69),
  },
  [8] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_int] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [sym_complex] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(51),
    [sym_string] = ACTIONS(63),
    [sym_comment] = ACTIONS(63),
  },
  [9] = {
    [sym__element] = STATE(7),
    [sym__form] = STATE(7),
    [sym__sequence] = STATE(7),
    [sym_expression] = STATE(7),
    [sym_list] = STATE(7),
    [sym__identifier] = STATE(7),
    [sym__numeric_literal] = STATE(7),
    [sym_dotted_identifier] = STATE(7),
    [sym__string] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_int] = ACTIONS(75),
    [sym_float] = ACTIONS(75),
    [sym_complex] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_keyword] = ACTIONS(77),
    [sym_symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(77),
    [sym_comment] = ACTIONS(77),
  },
  [10] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_int] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [sym_complex] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(51),
    [sym_string] = ACTIONS(63),
    [sym_comment] = ACTIONS(63),
  },
  [11] = {
    [sym__element] = STATE(2),
    [sym__form] = STATE(2),
    [sym__sequence] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_list] = STATE(2),
    [sym__identifier] = STATE(2),
    [sym__numeric_literal] = STATE(2),
    [sym_dotted_identifier] = STATE(2),
    [sym__string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_int] = ACTIONS(61),
    [sym_float] = ACTIONS(61),
    [sym_complex] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_keyword] = ACTIONS(63),
    [sym_symbol] = ACTIONS(51),
    [sym_string] = ACTIONS(63),
    [sym_comment] = ACTIONS(63),
  },
  [12] = {
    [sym__element] = STATE(12),
    [sym__form] = STATE(12),
    [sym__sequence] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_list] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym__numeric_literal] = STATE(12),
    [sym_dotted_identifier] = STATE(12),
    [sym__string] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(22),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(86),
    [sym_int] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [sym_complex] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(92),
    [sym_keyword] = ACTIONS(95),
    [sym_symbol] = ACTIONS(98),
    [sym_string] = ACTIONS(95),
    [sym_comment] = ACTIONS(95),
  },
  [13] = {
    [sym__element] = STATE(11),
    [sym__form] = STATE(11),
    [sym__sequence] = STATE(11),
    [sym_expression] = STATE(11),
    [sym_list] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym__numeric_literal] = STATE(11),
    [sym_dotted_identifier] = STATE(11),
    [sym__string] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_int] = ACTIONS(101),
    [sym_float] = ACTIONS(101),
    [sym_complex] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_keyword] = ACTIONS(103),
    [sym_symbol] = ACTIONS(51),
    [sym_string] = ACTIONS(103),
    [sym_comment] = ACTIONS(103),
  },
  [14] = {
    [sym__element] = STATE(8),
    [sym__form] = STATE(8),
    [sym__sequence] = STATE(8),
    [sym_expression] = STATE(8),
    [sym_list] = STATE(8),
    [sym__identifier] = STATE(8),
    [sym__numeric_literal] = STATE(8),
    [sym_dotted_identifier] = STATE(8),
    [sym__string] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_int] = ACTIONS(105),
    [sym_float] = ACTIONS(105),
    [sym_complex] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(47),
    [sym_keyword] = ACTIONS(107),
    [sym_symbol] = ACTIONS(51),
    [sym_string] = ACTIONS(107),
    [sym_comment] = ACTIONS(107),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT2,
    STATE(19), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(111), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(109), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [23] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT2,
    STATE(19), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(117), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(115), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [46] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT2,
    STATE(18), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(111), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(109), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [69] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT2,
    STATE(19), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(121), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(119), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [92] = 4,
    ACTIONS(127), 1,
      anon_sym_DOT2,
    STATE(19), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(125), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(123), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [115] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT2,
    STATE(16), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(132), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(130), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [138] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT2,
    STATE(15), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(117), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(115), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [161] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT2,
    STATE(23), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(117), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [183] = 4,
    ACTIONS(136), 1,
      anon_sym_DOT2,
    STATE(23), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(125), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [205] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT2,
    STATE(23), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(121), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [227] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT2,
    STATE(23), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(111), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [249] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT2,
    STATE(24), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(111), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [271] = 2,
    ACTIONS(125), 6,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(123), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [289] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT2,
    STATE(22), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(132), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [311] = 4,
    ACTIONS(134), 1,
      anon_sym_DOT2,
    STATE(25), 1,
      aux_sym_dotted_identifier_repeat2,
    ACTIONS(117), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [333] = 2,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
    ACTIONS(125), 6,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_symbol,
  [350] = 2,
    ACTIONS(141), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(139), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [367] = 2,
    ACTIONS(145), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(143), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [384] = 2,
    ACTIONS(149), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(147), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [401] = 2,
    ACTIONS(141), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [417] = 2,
    ACTIONS(149), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [433] = 2,
    ACTIONS(145), 5,
      sym_int,
      sym_float,
      sym_complex,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_keyword,
      sym_string,
      sym_comment,
  [449] = 4,
    ACTIONS(151), 1,
      anon_sym_DOT2,
    ACTIONS(153), 1,
      aux_sym__symbol_immediate_token1,
    STATE(17), 1,
      sym__symbol_immediate,
    STATE(41), 1,
      aux_sym_dotted_identifier_repeat1,
  [462] = 4,
    ACTIONS(155), 1,
      anon_sym_DOT2,
    ACTIONS(157), 1,
      aux_sym__symbol_immediate_token1,
    STATE(29), 1,
      sym__symbol_immediate,
    STATE(40), 1,
      aux_sym_dotted_identifier_repeat1,
  [475] = 4,
    ACTIONS(159), 1,
      anon_sym_DOT2,
    ACTIONS(161), 1,
      aux_sym__symbol_immediate_token1,
    STATE(21), 1,
      sym__symbol_immediate,
    STATE(37), 1,
      aux_sym_dotted_identifier_repeat1,
  [488] = 4,
    ACTIONS(151), 1,
      anon_sym_DOT2,
    ACTIONS(163), 1,
      aux_sym__symbol_immediate_token1,
    STATE(26), 1,
      sym__symbol_immediate,
    STATE(41), 1,
      aux_sym_dotted_identifier_repeat1,
  [501] = 3,
    ACTIONS(165), 1,
      anon_sym_DOT2,
    ACTIONS(168), 1,
      aux_sym__symbol_immediate_token1,
    STATE(41), 1,
      aux_sym_dotted_identifier_repeat1,
  [511] = 2,
    ACTIONS(170), 1,
      aux_sym__symbol_immediate_token1,
    STATE(27), 1,
      sym__symbol_immediate,
  [518] = 2,
    ACTIONS(172), 1,
      aux_sym__symbol_immediate_token1,
    STATE(30), 1,
      sym__symbol_immediate,
  [525] = 1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 23,
  [SMALL_STATE(17)] = 46,
  [SMALL_STATE(18)] = 69,
  [SMALL_STATE(19)] = 92,
  [SMALL_STATE(20)] = 115,
  [SMALL_STATE(21)] = 138,
  [SMALL_STATE(22)] = 161,
  [SMALL_STATE(23)] = 183,
  [SMALL_STATE(24)] = 205,
  [SMALL_STATE(25)] = 227,
  [SMALL_STATE(26)] = 249,
  [SMALL_STATE(27)] = 271,
  [SMALL_STATE(28)] = 289,
  [SMALL_STATE(29)] = 311,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 350,
  [SMALL_STATE(32)] = 367,
  [SMALL_STATE(33)] = 384,
  [SMALL_STATE(34)] = 401,
  [SMALL_STATE(35)] = 417,
  [SMALL_STATE(36)] = 433,
  [SMALL_STATE(37)] = 449,
  [SMALL_STATE(38)] = 462,
  [SMALL_STATE(39)] = 475,
  [SMALL_STATE(40)] = 488,
  [SMALL_STATE(41)] = 501,
  [SMALL_STATE(42)] = 511,
  [SMALL_STATE(43)] = 518,
  [SMALL_STATE(44)] = 525,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2), SHIFT_REPEAT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat2, 2), SHIFT_REPEAT(43),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(41),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
