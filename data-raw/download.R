
system("wget -O inst/include/decimal.h https://raw.githubusercontent.com/vpiotr/decimal_for_cpp/master/include/decimal.h ")

# system("wget -O inst/include/fixed.hpp https://raw.githubusercontent.com/burner/sweet.hpp/master/fixed.hpp")

{
  lines <- readLines("inst/include/decimal.h")
  lines[lines == ";"] <- ""
  writeLines(lines, "inst/include/decimal.h")
}
