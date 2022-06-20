module.exports = grammar({
  name: 'embedded_template',
  extras: $ => [],
  rules: {
    template: $ => repeat(choice(
      $.directive,
      $.output_directive,
      $.comment_directive,
      $.graphql_directive,
      $.content
    )),

    code: $ => repeat1(choice(/[^%=_-]+|[%=_-]/, '%%>')),

    content: $ => prec.right(repeat1(choice(/[^<]+|</, '<%%'))),

    directive: $ => seq(
      choice('<%', '<%_'),
      optional($.code),
      choice('%>', '-%>', '_%>')
    ),

    output_directive: $ => seq(
      choice('<%=', '<%-'),
      optional($.code),
      choice('%>', '-%>', '=%>')
    ),

    comment_directive: $ => seq(
      '<%#',
      optional(alias($.code, $.comment)),
      '%>'
    ),

    graphql_directive: $ => seq(
      '<%graphql',
      optional($.code),
      '%>'
    )
  }
});
