#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 14
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
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
  sym_code = 9,
  sym_content = 10,
  sym_template = 11,
  sym_directive = 12,
  sym_output_directive = 13,
  sym_comment_directive = 14,
  aux_sym_template_repeat1 = 15,
  alias_sym_comment = 16,
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
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_template] = "template",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [aux_sym_template_repeat1] = "template_repeat1",
  [alias_sym_comment] = "comment",
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
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
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
      if (lookahead == '%') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '_') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
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

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_code] = ACTIONS(1),
    [sym_content] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(12),
    [sym_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(9),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(11),
    [sym_content] = ACTIONS(13),
  },
  [2] = {
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(9),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(11),
    [sym_content] = ACTIONS(17),
  },
  [3] = {
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LT_PERCENT] = ACTIONS(21),
    [anon_sym_LT_PERCENT_] = ACTIONS(24),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(27),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(27),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(30),
    [sym_content] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_LT_PERCENT] = ACTIONS(38),
    [anon_sym_LT_PERCENT_] = ACTIONS(36),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(36),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(36),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(36),
    [sym_content] = ACTIONS(36),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_LT_PERCENT] = ACTIONS(42),
    [anon_sym_LT_PERCENT_] = ACTIONS(40),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(40),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(40),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(40),
    [sym_content] = ACTIONS(40),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_LT_PERCENT] = ACTIONS(46),
    [anon_sym_LT_PERCENT_] = ACTIONS(44),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(44),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(44),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(44),
    [sym_content] = ACTIONS(44),
  },
  [7] = {
    [anon_sym_PERCENT_GT] = ACTIONS(48),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(48),
    [anon_sym__PERCENT_GT] = ACTIONS(48),
  },
  [8] = {
    [anon_sym_PERCENT_GT] = ACTIONS(50),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(50),
  },
  [9] = {
    [sym_code] = ACTIONS(52),
  },
  [10] = {
    [sym_code] = ACTIONS(54),
  },
  [11] = {
    [sym_code] = ACTIONS(56),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(58),
  },
  [13] = {
    [anon_sym_PERCENT_GT] = ACTIONS(60),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_template, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(9),
  [7] = {.count = 1, .reusable = true}, SHIFT(9),
  [9] = {.count = 1, .reusable = true}, SHIFT(10),
  [11] = {.count = 1, .reusable = true}, SHIFT(11),
  [13] = {.count = 1, .reusable = true}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_template, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2),
  [21] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(9),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(10),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 3),
  [38] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 3),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_output_directive, 3),
  [42] = {.count = 1, .reusable = false}, REDUCE(sym_output_directive, 3),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_comment_directive, 3, .production_id = 1),
  [48] = {.count = 1, .reusable = true}, SHIFT(4),
  [50] = {.count = 1, .reusable = true}, SHIFT(5),
  [52] = {.count = 1, .reusable = true}, SHIFT(7),
  [54] = {.count = 1, .reusable = true}, SHIFT(8),
  [56] = {.count = 1, .reusable = true}, SHIFT(13),
  [58] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [60] = {.count = 1, .reusable = true}, SHIFT(6),
};

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
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
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
