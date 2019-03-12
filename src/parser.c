#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 14
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 2
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
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '_')
        ADVANCE(5);
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
        ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '%')
        ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '%')
        ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '%')
        ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 7:
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '_')
        ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '>')
        ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '_')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 16, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 16, .external_lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 16, .external_lex_state = 2},
  [11] = {.lex_state = 16, .external_lex_state = 2},
  [12] = {.lex_state = 16, .external_lex_state = 2},
  [13] = {.lex_state = 16, .external_lex_state = 2},
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
    [anon_sym__PERCENT_GT] = ACTIONS(1),
    [sym_code] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [sym_content] = ACTIONS(1),
    [anon_sym_LT_PERCENT_] = ACTIONS(1),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_comment_directive] = STATE(5),
    [aux_sym_template_repeat1] = STATE(5),
    [sym_directive] = STATE(5),
    [sym_output_directive] = STATE(5),
    [sym_template] = STATE(6),
    [anon_sym_LT_PERCENT_] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(7),
    [sym_content] = ACTIONS(11),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(13),
  },
  [2] = {
    [sym_code] = ACTIONS(15),
  },
  [3] = {
    [sym_code] = ACTIONS(17),
  },
  [4] = {
    [sym_code] = ACTIONS(19),
  },
  [5] = {
    [sym_comment_directive] = STATE(10),
    [aux_sym_template_repeat1] = STATE(10),
    [sym_directive] = STATE(10),
    [sym_output_directive] = STATE(10),
    [anon_sym_LT_PERCENT_] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(7),
    [sym_content] = ACTIONS(23),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(13),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [anon_sym__PERCENT_GT] = ACTIONS(27),
    [anon_sym_PERCENT_GT] = ACTIONS(27),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(27),
  },
  [8] = {
    [anon_sym_PERCENT_GT] = ACTIONS(29),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(29),
  },
  [9] = {
    [anon_sym_PERCENT_GT] = ACTIONS(31),
  },
  [10] = {
    [sym_comment_directive] = STATE(10),
    [aux_sym_template_repeat1] = STATE(10),
    [sym_directive] = STATE(10),
    [sym_output_directive] = STATE(10),
    [anon_sym_LT_PERCENT_] = ACTIONS(33),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(36),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LT_PERCENT] = ACTIONS(41),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(36),
    [sym_content] = ACTIONS(44),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(47),
  },
  [11] = {
    [anon_sym_LT_PERCENT_] = ACTIONS(50),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(50),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LT_PERCENT] = ACTIONS(52),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(50),
    [sym_content] = ACTIONS(50),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(50),
  },
  [12] = {
    [anon_sym_LT_PERCENT_] = ACTIONS(54),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(54),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_LT_PERCENT] = ACTIONS(56),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(54),
    [sym_content] = ACTIONS(54),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(54),
  },
  [13] = {
    [anon_sym_LT_PERCENT_] = ACTIONS(58),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(58),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_LT_PERCENT] = ACTIONS(60),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(58),
    [sym_content] = ACTIONS(58),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(58),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_template, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_template, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_directive, 3),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym_directive, 3),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_output_directive, 3),
  [56] = {.count = 1, .reusable = false}, REDUCE(sym_output_directive, 3),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_comment_directive, 3, .alias_sequence_id = 1),
  [60] = {.count = 1, .reusable = false}, REDUCE(sym_comment_directive, 3, .alias_sequence_id = 1),
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
