#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 7
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  sym_data_row = 1,
  sym_group_row = 2,
  sym_heading_row = 3,
  sym_unit_row = 4,
  sym_type_row = 5,
  sym_source_file = 6,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_data_row] = "data_row",
  [sym_group_row] = "group_row",
  [sym_heading_row] = "heading_row",
  [sym_unit_row] = "unit_row",
  [sym_type_row] = "type_row",
  [sym_source_file] = "source_file",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_data_row] = sym_data_row,
  [sym_group_row] = sym_group_row,
  [sym_heading_row] = sym_heading_row,
  [sym_unit_row] = sym_unit_row,
  [sym_type_row] = sym_type_row,
  [sym_source_file] = sym_source_file,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_data_row] = {
    .visible = true,
    .named = true,
  },
  [sym_group_row] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_row] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_row] = {
    .visible = true,
    .named = true,
  },
  [sym_type_row] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(1);
      if (lookahead == 'G') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'G') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'Y') ADVANCE(15);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_data_row);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_group_row);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_heading_row);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_unit_row);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_type_row);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_data_row] = ACTIONS(1),
    [sym_group_row] = ACTIONS(1),
    [sym_heading_row] = ACTIONS(1),
    [sym_unit_row] = ACTIONS(1),
    [sym_type_row] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_data_row] = ACTIONS(3),
    [sym_group_row] = ACTIONS(3),
    [sym_heading_row] = ACTIONS(3),
    [sym_unit_row] = ACTIONS(3),
    [sym_type_row] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ags(void) {
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
