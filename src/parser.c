#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_data_row = 1,
  sym_heading_row = 2,
  sym_unit_row = 3,
  sym_type_row = 4,
  anon_sym_DQUOTEGROUP = 5,
  aux_sym_group_token1 = 6,
  sym_document = 7,
  sym_group = 8,
  aux_sym_document_repeat1 = 9,
  aux_sym_group_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_data_row] = "data_row",
  [sym_heading_row] = "heading_row",
  [sym_unit_row] = "unit_row",
  [sym_type_row] = "type_row",
  [anon_sym_DQUOTEGROUP] = "\"GROUP",
  [aux_sym_group_token1] = "group_token1",
  [sym_document] = "document",
  [sym_group] = "group",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_group_repeat1] = "group_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_data_row] = sym_data_row,
  [sym_heading_row] = sym_heading_row,
  [sym_unit_row] = sym_unit_row,
  [sym_type_row] = sym_type_row,
  [anon_sym_DQUOTEGROUP] = anon_sym_DQUOTEGROUP,
  [aux_sym_group_token1] = aux_sym_group_token1,
  [sym_document] = sym_document,
  [sym_group] = sym_group,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
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
  [anon_sym_DQUOTEGROUP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
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
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'G') ADVANCE(23);
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
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(24);
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
      ACCEPT_TOKEN(sym_heading_row);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_unit_row);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_type_row);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTEGROUP);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_group_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_group_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
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
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_data_row] = ACTIONS(1),
    [sym_heading_row] = ACTIONS(1),
    [sym_unit_row] = ACTIONS(1),
    [sym_type_row] = ACTIONS(1),
    [anon_sym_DQUOTEGROUP] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(8),
    [sym_group] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DQUOTEGROUP] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_DQUOTEGROUP,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_group,
      aux_sym_document_repeat1,
  [11] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DQUOTEGROUP,
    STATE(3), 2,
      sym_group,
      aux_sym_document_repeat1,
  [22] = 3,
    ACTIONS(16), 1,
      sym_data_row,
    STATE(5), 1,
      aux_sym_group_repeat1,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTEGROUP,
  [33] = 3,
    ACTIONS(20), 1,
      sym_data_row,
    STATE(6), 1,
      aux_sym_group_repeat1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTEGROUP,
  [44] = 3,
    ACTIONS(24), 1,
      sym_data_row,
    STATE(6), 1,
      aux_sym_group_repeat1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTEGROUP,
  [55] = 1,
    ACTIONS(27), 1,
      aux_sym_group_token1,
  [59] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [63] = 1,
    ACTIONS(31), 1,
      sym_heading_row,
  [67] = 1,
    ACTIONS(33), 1,
      sym_unit_row,
  [71] = 1,
    ACTIONS(35), 1,
      sym_type_row,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 59,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 67,
  [SMALL_STATE(11)] = 71,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
