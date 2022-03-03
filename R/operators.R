#' Decimal Operators
#' 
#' `+`, `-`, `*`, `/` operators for decimal operations
#' 
#' @export
`+.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_add)
}

#' @export
`-.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_minus)
}

#' @export
`*.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_multiply)
}

#' @export
`/.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_divide)
}

#' @export
`==.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_equal, TRUE)
}

#' @export
`!=.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_notequal, TRUE)
}

#' @export
`<=.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_lessequal, TRUE)
}

#' @export
`>=.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_greaterequal, TRUE)
}

#' @export
`<.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_less, TRUE)
}

#' @export
`>.decimal` <- function(e1, e2) {
  operator_function(e1, e2, decimal_greater, TRUE)
}

operator_function <- function(e1, e2, func, return_logical = FALSE) {
  if (length(e1) != length(e2)) stop("Vector size not equal!")
  e <- func(e1, e2)
  if (return_logical) e else decimal(sub("\\.?0+$", "", e))
}