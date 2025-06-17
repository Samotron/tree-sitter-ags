module.exports = grammar({
  name: 'ags',
  
  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    document: $ => repeat(choice(
      $.group,
      $.comment
    )),

    comment: $ => /#.*/,

    group: $ => seq(
      $.group_row,
      $.heading_row,
      $.unit_row,
      $.type_row,
      repeat($.data_row)
    ),

    group_row: $ => seq(
      $.group_keyword,
      ',',
      $.quoted_field
    ),

    heading_row: $ => seq(
      $.heading_keyword,
      ',',
      $.field_list
    ),

    unit_row: $ => seq(
      $.unit_keyword,
      ',',
      $.field_list
    ),

    type_row: $ => seq(
      $.type_keyword,
      ',',
      $.field_list
    ),

    data_row: $ => seq(
      $.data_keyword,
      ',',
      $.field_list
    ),

    // Keywords for each row type
    group_keyword: $ => '"GROUP"',
    heading_keyword: $ => '"HEADING"',
    unit_keyword: $ => '"UNIT"',
    type_keyword: $ => '"TYPE"',
    data_keyword: $ => '"DATA"',

    field_list: $ => seq(
      $.quoted_field,
      repeat(seq(',', $.quoted_field))
    ),

    quoted_field: $ => seq(
      '"',
      optional($.field_content),
      '"'
    ),

    field_content: $ => /[^"]*/,
  }
});
