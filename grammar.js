module.exports = grammar({
  name: 'embedded_template',

  externals: $ => [
    $.code,
    $.content
  ],

  rules: {
    template: $ => repeat(choice(
      $.directive,
      $.output_directive,
      $.comment_directive,
      $.content
    )),

    directive: $ => seq(
      choice('<%', '<%_'),
      $.code,
      choice('%>', '-%>', '_%>')
    ),

    output_directive: $ => seq(
      choice('<%=', '<%-'),
      $.code,
      choice('%>', '-%>')
    ),

    comment_directive: $ => seq(
      '<%#',
      alias($.code, $.comment),
      '%>'
    )
  }
});
