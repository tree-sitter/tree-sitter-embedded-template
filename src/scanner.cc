#include <tree_sitter/parser.h>

enum TokenType {
  CODE,
  CONTENT,
};

extern "C" {

void *tree_sitter_embedded_template_external_scanner_create() {
  return NULL;
}

bool tree_sitter_embedded_template_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[CONTENT]) {
    lexer->result_symbol = CONTENT;

    enum {
      START,
      AFTER_ANGLE_BRACKET,
      AFTER_PERCENT,
      DONE
    } state = START;

    bool did_advance = false;
    bool has_content = false;

    while (state != DONE) {
      if (lexer->lookahead == 0) {
        lexer->mark_end(lexer);
        if (did_advance) has_content = true;
        state = DONE;
      }

      switch (state) {
        case START:
          if (lexer->lookahead == '<') {
            lexer->mark_end(lexer);
            if (did_advance) has_content = true;
            state = AFTER_ANGLE_BRACKET;
          }
          break;

        case AFTER_ANGLE_BRACKET:
          if (lexer->lookahead == '%') {
            state = AFTER_PERCENT;
          } else {
            state = START;
          }
          break;

        case AFTER_PERCENT:
          if (lexer->lookahead == '%') {
            state = START;
          } else {
            state = DONE;
          }

        case DONE:
          break;
      }

      lexer->advance(lexer, false);
      did_advance = true;
    }

    return has_content;
  }

  if (valid_symbols[CODE]) {
    lexer->result_symbol = CODE;

    enum {
      START,
      AFTER_PERCENT,
      AFTER_QUALIFIER,
      DONE
    } state = START;

    while (state != DONE) {
      if (lexer->lookahead == 0) {
        lexer->mark_end(lexer);
        state = DONE;
      }

      switch (state) {
        case START:
          if (lexer->lookahead == '-' || lexer->lookahead == '_' || lexer->lookahead == '=') {
            lexer->mark_end(lexer);
            state = AFTER_QUALIFIER;
          } else if (lexer->lookahead == '%') {
            lexer->mark_end(lexer);
            state = AFTER_PERCENT;
          }
          break;

        case AFTER_QUALIFIER:
          if (lexer->lookahead == '%') {
            state = AFTER_PERCENT;
          } else {
            lexer->mark_end(lexer);
            state = START;
          }
          break;

        case AFTER_PERCENT:
          if (lexer->lookahead == '>') {
            state = DONE;
          } else {
            lexer->mark_end(lexer);
            state = START;
          }
          break;

        case DONE:
          break;
      }

      lexer->advance(lexer, false);
    }

    return true;
  }

  return false;
}

unsigned tree_sitter_embedded_template_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_embedded_template_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

void tree_sitter_embedded_template_external_scanner_destroy(void *payload) {}

}
