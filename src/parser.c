#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_code_token1 = 1,
  anon_sym_PERCENT_PERCENT_GT = 2,
  aux_sym_content_token1 = 3,
  anon_sym_LT_PERCENT_PERCENT = 4,
  anon_sym_LT_PERCENT = 5,
  anon_sym_LT_PERCENT_ = 6,
  anon_sym_PERCENT_GT = 7,
  anon_sym_DASH_PERCENT_GT = 8,
  anon_sym__PERCENT_GT = 9,
  anon_sym_LT_PERCENT_EQ = 10,
  anon_sym_LT_PERCENT_DASH = 11,
  anon_sym_EQ_PERCENT_GT = 12,
  anon_sym_LT_PERCENT_POUND = 13,
  anon_sym_LT_PERCENTgraphql = 14,
  sym_template = 15,
  sym_code = 16,
  sym_content = 17,
  sym_directive = 18,
  sym_output_directive = 19,
  sym_comment_directive = 20,
  sym_graphql_directive = 21,
  aux_sym_template_repeat1 = 22,
  aux_sym_code_repeat1 = 23,
  aux_sym_content_repeat1 = 24,
  alias_sym_comment = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_PERCENT_PERCENT_GT] = "%%>",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_] = "<%_",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_DASH_PERCENT_GT] = "-%>",
  [anon_sym__PERCENT_GT] = "_%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_DASH] = "<%-",
  [anon_sym_EQ_PERCENT_GT] = "=%>",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_LT_PERCENTgraphql] = "<%graphql",
  [sym_template] = "template",
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [sym_graphql_directive] = "graphql_directive",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_PERCENT_PERCENT_GT] = anon_sym_PERCENT_PERCENT_GT,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_] = anon_sym_LT_PERCENT_,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_DASH_PERCENT_GT] = anon_sym_DASH_PERCENT_GT,
  [anon_sym__PERCENT_GT] = anon_sym__PERCENT_GT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_DASH] = anon_sym_LT_PERCENT_DASH,
  [anon_sym_EQ_PERCENT_GT] = anon_sym_EQ_PERCENT_GT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_LT_PERCENTgraphql] = anon_sym_LT_PERCENTgraphql,
  [sym_template] = sym_template,
  [sym_code] = sym_code,
  [sym_content] = sym_content,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment_directive] = sym_comment_directive,
  [sym_graphql_directive] = sym_graphql_directive,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [alias_sym_comment] = alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENTgraphql] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_code, 2,
    sym_code,
    alias_sym_comment,
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
  [18] = 16,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 16,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(16);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'q') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(4);
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(5);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(6);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(7);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_PERCENTgraphql);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_GT] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(1),
    [anon_sym__PERCENT_GT] = ACTIONS(1),
    [anon_sym_EQ_PERCENT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(28),
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_graphql_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(13),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(15),
    [anon_sym_LT_PERCENTgraphql] = ACTIONS(17),
  },
  [2] = {
    [sym_content] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [sym_graphql_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_content_token1] = ACTIONS(21),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(24),
    [anon_sym_LT_PERCENT] = ACTIONS(27),
    [anon_sym_LT_PERCENT_] = ACTIONS(30),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(33),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(36),
    [anon_sym_LT_PERCENTgraphql] = ACTIONS(39),
  },
  [3] = {
    [sym_content] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [sym_graphql_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(42),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(13),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(15),
    [anon_sym_LT_PERCENTgraphql] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(46), 1,
      aux_sym_content_token1,
    ACTIONS(48), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(50), 1,
      anon_sym_LT_PERCENT,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [21] = 5,
    ACTIONS(54), 1,
      aux_sym_content_token1,
    ACTIONS(57), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(60), 1,
      anon_sym_LT_PERCENT,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [42] = 2,
    ACTIONS(64), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [56] = 2,
    ACTIONS(68), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [70] = 2,
    ACTIONS(72), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [84] = 2,
    ACTIONS(76), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [98] = 2,
    ACTIONS(80), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [112] = 2,
    ACTIONS(84), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [126] = 2,
    ACTIONS(88), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [140] = 2,
    ACTIONS(92), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [154] = 5,
    ACTIONS(94), 1,
      aux_sym_code_token1,
    ACTIONS(96), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(16), 1,
      aux_sym_code_repeat1,
    STATE(25), 1,
      sym_code,
    ACTIONS(98), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [172] = 5,
    ACTIONS(100), 1,
      aux_sym_code_token1,
    ACTIONS(102), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(18), 1,
      aux_sym_code_repeat1,
    STATE(24), 1,
      sym_code,
    ACTIONS(104), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [190] = 4,
    ACTIONS(106), 1,
      aux_sym_code_token1,
    ACTIONS(108), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(17), 1,
      aux_sym_code_repeat1,
    ACTIONS(110), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [205] = 4,
    ACTIONS(112), 1,
      aux_sym_code_token1,
    ACTIONS(115), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(17), 1,
      aux_sym_code_repeat1,
    ACTIONS(118), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [220] = 4,
    ACTIONS(120), 1,
      aux_sym_code_token1,
    ACTIONS(122), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(19), 1,
      aux_sym_code_repeat1,
    ACTIONS(110), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [235] = 4,
    ACTIONS(124), 1,
      aux_sym_code_token1,
    ACTIONS(127), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(19), 1,
      aux_sym_code_repeat1,
    ACTIONS(118), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [250] = 5,
    ACTIONS(130), 1,
      aux_sym_code_token1,
    ACTIONS(132), 1,
      anon_sym_PERCENT_PERCENT_GT,
    ACTIONS(134), 1,
      anon_sym_PERCENT_GT,
    STATE(22), 1,
      aux_sym_code_repeat1,
    STATE(26), 1,
      sym_code,
  [266] = 5,
    ACTIONS(130), 1,
      aux_sym_code_token1,
    ACTIONS(132), 1,
      anon_sym_PERCENT_PERCENT_GT,
    ACTIONS(136), 1,
      anon_sym_PERCENT_GT,
    STATE(22), 1,
      aux_sym_code_repeat1,
    STATE(27), 1,
      sym_code,
  [282] = 4,
    ACTIONS(110), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(138), 1,
      aux_sym_code_token1,
    ACTIONS(140), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(23), 1,
      aux_sym_code_repeat1,
  [295] = 4,
    ACTIONS(118), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(142), 1,
      aux_sym_code_token1,
    ACTIONS(145), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(23), 1,
      aux_sym_code_repeat1,
  [308] = 1,
    ACTIONS(148), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [314] = 1,
    ACTIONS(150), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [320] = 1,
    ACTIONS(152), 1,
      anon_sym_PERCENT_GT,
  [324] = 1,
    ACTIONS(154), 1,
      anon_sym_PERCENT_GT,
  [328] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 98,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 140,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 172,
  [SMALL_STATE(16)] = 190,
  [SMALL_STATE(17)] = 205,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 266,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 295,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 314,
  [SMALL_STATE(26)] = 320,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(14),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(20),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_directive, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_directive, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_directive, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_directive, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(17),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(19),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(19),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(23),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(23),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_embedded_template(void) {
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
