#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 1
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_LT_PERCENT = 1,
  anon_sym_LT_PERCENT_ = 2,
  anon_sym_PERCENT_GT = 3,
  anon_sym_DASH_PERCENT_GT = 4,
  anon_sym__PERCENT_GT = 5,
  anon_sym_LT_PERCENT_EQ = 6,
  anon_sym_LT_PERCENT_DASH = 7,
  anon_sym_LT_PERCENT_POUND = 8,
  anon_sym_LT_PERCENTgraphql = 9,
  sym_code = 10,
  sym_content = 11,
  sym_template = 12,
  sym_directive = 13,
  sym_output_directive = 14,
  sym_comment_directive = 15,
  sym_graphql_directive = 16,
  aux_sym_template_repeat1 = 17,
  alias_sym_comment = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_] = "<%_",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_DASH_PERCENT_GT] = "-%>",
  [anon_sym__PERCENT_GT] = "_%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_DASH] = "<%-",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_LT_PERCENTgraphql] = "<%graphql",
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_template] = "template",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [sym_graphql_directive] = "graphql_directive",
  [aux_sym_template_repeat1] = "template_repeat1",
  [alias_sym_comment] = "comment",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_] = anon_sym_LT_PERCENT_,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_DASH_PERCENT_GT] = anon_sym_DASH_PERCENT_GT,
  [anon_sym__PERCENT_GT] = anon_sym__PERCENT_GT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_DASH] = anon_sym_LT_PERCENT_DASH,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_LT_PERCENTgraphql] = anon_sym_LT_PERCENTgraphql,
  [sym_code] = sym_code,
  [sym_content] = sym_content,
  [sym_template] = sym_template,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment_directive] = sym_comment_directive,
  [sym_graphql_directive] = sym_graphql_directive,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [alias_sym_comment] = alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENTgraphql] = {
    .visible = true,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
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
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_comment,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '%') ADVANCE(4);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'q') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_PERCENTgraphql);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

enum {
  ts_external_token_code = 0,
  ts_external_token_content = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code] = sym_code,
  [ts_external_token_content] = sym_content,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code] = true,
    [ts_external_token_content] = true,
  },
  [2] = {
    [ts_external_token_content] = true,
  },
  [3] = {
    [ts_external_token_code] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(1),
    [anon_sym__PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_LT_PERCENTgraphql] = ACTIONS(1),
    [sym_code] = ACTIONS(1),
    [sym_content] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(14),
    [sym_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [sym_graphql_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(9),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(11),
    [anon_sym_LT_PERCENTgraphql] = ACTIONS(13),
    [sym_content] = ACTIONS(15),
  },
  [2] = {
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_graphql_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(9),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(11),
    [anon_sym_LT_PERCENTgraphql] = ACTIONS(13),
    [sym_content] = ACTIONS(19),
  },
  [3] = {
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_graphql_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LT_PERCENT] = ACTIONS(23),
    [anon_sym_LT_PERCENT_] = ACTIONS(26),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(29),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(29),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(32),
    [anon_sym_LT_PERCENTgraphql] = ACTIONS(35),
    [sym_content] = ACTIONS(38),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(43), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 7,
      sym_content,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [13] = 2,
    ACTIONS(47), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(45), 7,
      sym_content,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [26] = 2,
    ACTIONS(51), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(49), 7,
      sym_content,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [39] = 2,
    ACTIONS(55), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(53), 7,
      sym_content,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENTgraphql,
  [52] = 1,
    ACTIONS(57), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [58] = 1,
    ACTIONS(59), 2,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
  [63] = 1,
    ACTIONS(61), 1,
      sym_code,
  [67] = 1,
    ACTIONS(63), 1,
      sym_code,
  [71] = 1,
    ACTIONS(65), 1,
      sym_code,
  [75] = 1,
    ACTIONS(67), 1,
      sym_code,
  [79] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [83] = 1,
    ACTIONS(71), 1,
      anon_sym_PERCENT_GT,
  [87] = 1,
    ACTIONS(73), 1,
      anon_sym_PERCENT_GT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 39,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 67,
  [SMALL_STATE(12)] = 71,
  [SMALL_STATE(13)] = 75,
  [SMALL_STATE(14)] = 79,
  [SMALL_STATE(15)] = 83,
  [SMALL_STATE(16)] = 87,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(10),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(12),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_directive, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_directive, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_embedded_template_external_scanner_create(void);
void tree_sitter_embedded_template_external_scanner_destroy(void *);
bool tree_sitter_embedded_template_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_embedded_template_external_scanner_serialize(void *, char *);
void tree_sitter_embedded_template_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_embedded_template(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_embedded_template_external_scanner_create,
      tree_sitter_embedded_template_external_scanner_destroy,
      tree_sitter_embedded_template_external_scanner_scan,
      tree_sitter_embedded_template_external_scanner_serialize,
      tree_sitter_embedded_template_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
