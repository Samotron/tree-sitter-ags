#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_COMMA = 2,
  sym_group_keyword = 3,
  sym_heading_keyword = 4,
  sym_unit_keyword = 5,
  sym_type_keyword = 6,
  sym_data_keyword = 7,
  anon_sym_DQUOTE = 8,
  sym_field_content = 9,
  sym_document = 10,
  sym_group = 11,
  sym_group_row = 12,
  sym_heading_row = 13,
  sym_unit_row = 14,
  sym_type_row = 15,
  sym_data_row = 16,
  sym_field_list = 17,
  sym_quoted_field = 18,
  aux_sym_document_repeat1 = 19,
  aux_sym_group_repeat1 = 20,
  aux_sym_field_list_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COMMA] = ",",
  [sym_group_keyword] = "group_keyword",
  [sym_heading_keyword] = "heading_keyword",
  [sym_unit_keyword] = "unit_keyword",
  [sym_type_keyword] = "type_keyword",
  [sym_data_keyword] = "data_keyword",
  [anon_sym_DQUOTE] = "\"",
  [sym_field_content] = "field_content",
  [sym_document] = "document",
  [sym_group] = "group",
  [sym_group_row] = "group_row",
  [sym_heading_row] = "heading_row",
  [sym_unit_row] = "unit_row",
  [sym_type_row] = "type_row",
  [sym_data_row] = "data_row",
  [sym_field_list] = "field_list",
  [sym_quoted_field] = "quoted_field",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_group_keyword] = sym_group_keyword,
  [sym_heading_keyword] = sym_heading_keyword,
  [sym_unit_keyword] = sym_unit_keyword,
  [sym_type_keyword] = sym_type_keyword,
  [sym_data_keyword] = sym_data_keyword,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_field_content] = sym_field_content,
  [sym_document] = sym_document,
  [sym_group] = sym_group,
  [sym_group_row] = sym_group_row,
  [sym_heading_row] = sym_heading_row,
  [sym_unit_row] = sym_unit_row,
  [sym_type_row] = sym_type_row,
  [sym_data_row] = sym_data_row,
  [sym_field_list] = sym_field_list,
  [sym_quoted_field] = sym_quoted_field,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_group_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_data_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_field_content] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
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
  [sym_data_row] = {
    .visible = true,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_field] = {
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
  [aux_sym_field_list_repeat1] = {
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
  [11] = 5,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 14,
  [16] = 3,
  [17] = 4,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 12,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
  [32] = 27,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(21);
      if (lookahead == 'H') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'G') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(4);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(3);
      END_STATE();
    case 24:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'Y') ADVANCE(19);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_group_keyword);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_heading_keyword);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_unit_keyword);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_type_keyword);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_data_keyword);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_field_content);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_field_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(42),
    [sym_group] = STATE(6),
    [sym_group_row] = STATE(30),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_group_keyword] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(13), 1,
      sym_data_keyword,
    STATE(8), 2,
      sym_data_row,
      aux_sym_group_repeat1,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_group_keyword,
  [13] = 3,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_group_keyword,
      sym_data_keyword,
  [26] = 3,
    ACTIONS(22), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(20), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_group_keyword,
      sym_data_keyword,
  [39] = 3,
    ACTIONS(22), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_group_keyword,
      sym_data_keyword,
  [52] = 5,
    ACTIONS(9), 1,
      sym_group_keyword,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      sym_comment,
    STATE(30), 1,
      sym_group_row,
    STATE(9), 2,
      sym_group,
      aux_sym_document_repeat1,
  [69] = 3,
    ACTIONS(32), 1,
      sym_data_keyword,
    STATE(7), 2,
      sym_data_row,
      aux_sym_group_repeat1,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_group_keyword,
  [82] = 3,
    ACTIONS(13), 1,
      sym_data_keyword,
    STATE(7), 2,
      sym_data_row,
      aux_sym_group_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_group_keyword,
  [95] = 5,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_group_keyword,
    STATE(30), 1,
      sym_group_row,
    STATE(9), 2,
      sym_group,
      aux_sym_document_repeat1,
  [112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 4,
      anon_sym_COMMA,
      sym_heading_keyword,
      sym_unit_keyword,
      sym_type_keyword,
  [122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(24), 2,
      sym_unit_keyword,
      sym_type_keyword,
  [136] = 1,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      sym_group_keyword,
      sym_data_keyword,
  [144] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      sym_group_keyword,
      sym_data_keyword,
  [152] = 1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      sym_group_keyword,
      sym_data_keyword,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 4,
      anon_sym_COMMA,
      sym_heading_keyword,
      sym_unit_keyword,
      sym_type_keyword,
  [170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(15), 2,
      sym_unit_keyword,
      sym_type_keyword,
  [184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(20), 2,
      sym_unit_keyword,
      sym_type_keyword,
  [198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_quoted_field,
    STATE(33), 1,
      sym_field_list,
  [211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_quoted_field,
    STATE(22), 1,
      sym_field_list,
  [224] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_group_keyword,
      sym_data_keyword,
  [231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_quoted_field,
    STATE(20), 1,
      sym_field_list,
  [244] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_group_keyword,
      sym_data_keyword,
  [251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_quoted_field,
    STATE(40), 1,
      sym_field_list,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 3,
      anon_sym_COMMA,
      sym_unit_keyword,
      sym_type_keyword,
  [273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_type_keyword,
    STATE(2), 1,
      sym_type_row,
  [283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_unit_keyword,
    STATE(25), 1,
      sym_unit_row,
  [293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_quoted_field,
  [303] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      sym_field_content,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_quoted_field,
  [323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_heading_keyword,
    STATE(26), 1,
      sym_heading_row,
  [333] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      sym_field_content,
  [343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_quoted_field,
  [353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_type_keyword,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
  [367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_heading_keyword,
  [374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
  [381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
  [388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
  [395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
  [402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_unit_keyword,
  [409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
  [416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 136,
  [SMALL_STATE(13)] = 144,
  [SMALL_STATE(14)] = 152,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 211,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 231,
  [SMALL_STATE(22)] = 244,
  [SMALL_STATE(23)] = 251,
  [SMALL_STATE(24)] = 264,
  [SMALL_STATE(25)] = 273,
  [SMALL_STATE(26)] = 283,
  [SMALL_STATE(27)] = 293,
  [SMALL_STATE(28)] = 303,
  [SMALL_STATE(29)] = 313,
  [SMALL_STATE(30)] = 323,
  [SMALL_STATE(31)] = 333,
  [SMALL_STATE(32)] = 343,
  [SMALL_STATE(33)] = 353,
  [SMALL_STATE(34)] = 360,
  [SMALL_STATE(35)] = 367,
  [SMALL_STATE(36)] = 374,
  [SMALL_STATE(37)] = 381,
  [SMALL_STATE(38)] = 388,
  [SMALL_STATE(39)] = 395,
  [SMALL_STATE(40)] = 402,
  [SMALL_STATE(41)] = 409,
  [SMALL_STATE(42)] = 416,
  [SMALL_STATE(43)] = 423,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(32),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_field, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_field, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(27),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_row, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_row, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_row, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_row, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_row, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
