#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 14
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_code = 1,
  sym_content = 2,
  anon_sym_LT_PERCENT = 3,
  anon_sym_LT_PERCENT_ = 4,
  anon_sym_PERCENT_GT = 5,
  anon_sym_DASH_PERCENT_GT = 6,
  anon_sym__PERCENT_GT = 7,
  anon_sym_LT_PERCENT_EQ = 8,
  anon_sym_LT_PERCENT_DASH = 9,
  anon_sym_LT_PERCENT_POUND = 10,
  sym_template = 11,
  sym_directive = 12,
  sym_output_directive = 13,
  sym_comment_directive = 14,
  aux_sym_template_repeat1 = 15,
  alias_sym_comment = 16,
};

static const char *ts_symbol_names[] = {
  [sym_code] = "code",
  [sym_content] = "content",
  [ts_builtin_sym_end] = "END",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_] = "<%_",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_DASH_PERCENT_GT] = "-%>",
  [anon_sym__PERCENT_GT] = "_%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_DASH] = "<%-",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [sym_template] = "template",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [aux_sym_template_repeat1] = "template_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
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
  [1] = {
    [1] = alias_sym_comment,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(7);
      if (lookahead == '_')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '>')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 4:
      if (lookahead == '%')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '>')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 7:
      if (lookahead == '%')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '_')
        ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 13:
      if (lookahead == '%')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '>')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      END_STATE();
    case 17:
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 16, .external_lex_state = 2},
  [2] = {.lex_state = 17, .external_lex_state = 3},
  [3] = {.lex_state = 17, .external_lex_state = 3},
  [4] = {.lex_state = 17, .external_lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 16, .external_lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 16, .external_lex_state = 2},
  [11] = {.lex_state = 16, .external_lex_state = 2},
  [12] = {.lex_state = 16, .external_lex_state = 2},
  [13] = {.lex_state = 16, .external_lex_state = 2},
};

enum {
  ts_external_token_code,
  ts_external_token_content,
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
    [sym_code] = ACTIONS(1),
    [sym_content] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(3),
    [anon_sym_LT_PERCENT_] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(1),
    [anon_sym__PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(5),
    [sym_directive] = STATE(6),
    [sym_output_directive] = STATE(6),
    [sym_comment_directive] = STATE(6),
    [aux_sym_template_repeat1] = STATE(6),
    [sym_content] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(13),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(15),
  },
  [2] = {
    [sym_code] = ACTIONS(17),
  },
  [3] = {
    [sym_code] = ACTIONS(19),
  },
  [4] = {
    [sym_code] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [6] = {
    [sym_directive] = STATE(10),
    [sym_output_directive] = STATE(10),
    [sym_comment_directive] = STATE(10),
    [aux_sym_template_repeat1] = STATE(10),
    [sym_content] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(13),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(15),
  },
  [7] = {
    [anon_sym_PERCENT_GT] = ACTIONS(29),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(29),
    [anon_sym__PERCENT_GT] = ACTIONS(29),
  },
  [8] = {
    [anon_sym_PERCENT_GT] = ACTIONS(31),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(31),
  },
  [9] = {
    [anon_sym_PERCENT_GT] = ACTIONS(33),
  },
  [10] = {
    [sym_directive] = STATE(10),
    [sym_output_directive] = STATE(10),
    [sym_comment_directive] = STATE(10),
    [aux_sym_template_repeat1] = STATE(10),
    [sym_content] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_LT_PERCENT] = ACTIONS(40),
    [anon_sym_LT_PERCENT_] = ACTIONS(43),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(46),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(46),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(49),
  },
  [11] = {
    [sym_content] = ACTIONS(52),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LT_PERCENT] = ACTIONS(54),
    [anon_sym_LT_PERCENT_] = ACTIONS(52),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(52),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(52),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(52),
  },
  [12] = {
    [sym_content] = ACTIONS(56),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_LT_PERCENT] = ACTIONS(58),
    [anon_sym_LT_PERCENT_] = ACTIONS(56),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(56),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(56),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(56),
  },
  [13] = {
    [sym_content] = ACTIONS(60),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_LT_PERCENT] = ACTIONS(62),
    [anon_sym_LT_PERCENT_] = ACTIONS(60),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(60),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(60),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(60),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(6),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_template, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_template, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(11),
  [31] = {.count = 1, .reusable = true}, SHIFT(12),
  [33] = {.count = 1, .reusable = true}, SHIFT(13),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2),
  [40] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 3),
  [54] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 3),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_output_directive, 3),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym_output_directive, 3),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_comment_directive, 3, .alias_sequence_id = 1),
  [62] = {.count = 1, .reusable = false}, REDUCE(sym_comment_directive, 3, .alias_sequence_id = 1),
};

void *tree_sitter_embedded_template_external_scanner_create();
void tree_sitter_embedded_template_external_scanner_destroy(void *);
bool tree_sitter_embedded_template_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_embedded_template_external_scanner_serialize(void *, char *);
void tree_sitter_embedded_template_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_embedded_template() {
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
