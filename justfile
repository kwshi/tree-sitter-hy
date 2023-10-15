generate:
  pnpm exec tree-sitter generate

test: generate
  pnpm exec tree-sitter test
