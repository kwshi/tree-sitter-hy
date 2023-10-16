["(" ")" "[" "]"] @punctuation.bracket
(comment) @comment
(string) @string
(int) @number

(symbol) @variable
(dotted_identifier "." @punctuation.delimiter)
(keyword) @field

(expression
  . [(symbol) (dotted_identifier)] @function.call)

(expression
  . (symbol) @keyword
 (#any-of? @keyword
  "let"))

(expression
 . (symbol) @conditional
 (#any-of? @conditional
  "if" "when" "cond" "match"))

(expression
 . (symbol) @repeat
  (#any-of? @repeat
   "for" "while"))

(expression
 . (symbol) @include
 . [(symbol) @namespace (dotted_identifier)]
 ((keyword) @include.as
  . (symbol) @namespace
  (#eq? @include.as ":as"))?
 (#eq? @include "import"))

(expression
 . (symbol) @function.macro
 . (symbol) @parameter
 (#any-of? @function.macro "gfor" "lfor" "sfor" "dfor"))

(expression
  . (symbol) @keyword.function
  (#any-of? @keyword.function
   "fn"
   "defn"))

(expression
  . (symbol) @type.definition
  (#any-of? @type.definition
   "defclass"))

(expression
  . (symbol) @keyword.operator
  (#any-of? @keyword.operator
   "get" "in" "cut"
   "and" "or" "not"))

(expression
  . (symbol) @function.macro
  (#any-of? @function.macro
   "setv"
   "setx"
   "chainc"))

(expression
  . (symbol) @keyword.return
  (#any-of? @keyword.return
   "return" "yield"))

(expression
  .
  (symbol) @keyword.function
  (symbol) @function
  .
  (list (symbol)* @parameter)
  (#any-of? @keyword.function "defn" "fn"))

(expression
  . (symbol) @operator
 (#any-of? @operator
  "+" "-" "*" "/" "//" "+=" "-="
  "<" "<=" ">" ">=" "=" "!="))

((symbol)
 @function.builtin
 (#any-of? @function.builtin
  "sum" "map" "abs" "range" "len"))

((symbol)
 @type.builtin
 (#any-of? @type.builtin
  "int" "str" "bool"))

((symbol)
 @constant.builtin
 (#any-of? @constant.builtin
  "True" "False" "None"))
