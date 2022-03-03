
# automatically generate the read decimal function for different precision

add_function <- function(digits) {
  func <- paste0("decimal<", digits, "> decimal", digits, "(std::string s) {decimal<", digits, "> b(s); return b; }")
  func
}

writeLines(
  paste0(
    c(
      "#include \"decimal.h\"\nusing namespace dec;\n",
      sapply(1:18, add_function, USE.NAMES = FALSE),
      ""
    )
  ),
  "src/read_funcs.cpp"
)