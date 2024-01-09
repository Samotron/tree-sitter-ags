module.exports = grammar({
  name: 'ags',
  rules : {
    source_file: $ => choice(
      $.data_row,
      $.group_row,
      $.heading_row,
      $.unit_row,
      $.type_row,
      //$.delimiter
    ),
    data_row: $ => token(seq('\"DATA', /.*/)),
    group_row : $ => token(seq('\"GROUP', /.*/)),
    heading_row: $ => token(seq('\"HEADING', /.*/)),
    unit_row : $ => token(seq('\"UNIT', /.*/)),
    type_row: $ => token(seq('\"TYPE', /.*/)),
    //delimiter : $ => ',',

}


});
