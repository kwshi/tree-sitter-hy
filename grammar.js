module.exports = grammar({
  name: "hy",
  rules: {
    source_file: ($) => seq(optional($.shebang), repeat($._element)),
    shebang: () => /#!.*/,

    _element: ($) => choice($.comment, $._form),

    _form: ($) => choice($._identifier, $._sequence, $.string),
    _sequence: ($) => choice($.expression, $.list),

    expression: ($) => seq("(", repeat1($._element), ")"),
    list: ($) => seq("[", repeat($._element), "]"),

    _identifier: ($) => choice($._numeric_literal, $.symbol),

    _numeric_literal: ($) => choice($.int, $.float),
    int: () => /\d+/,
    float: () => /\d\./,

    symbol: () => /[^()\[\]{};"'`~\s]+/,

    string: () => /"[^"]*"/,

    comment: () => /;.*/,
  },
});
