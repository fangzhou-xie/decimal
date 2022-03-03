#' #' @export
#' sum <- function(x) UseMethod("sum", x)

#' @export
`sum.decimal` <- function(x, ...) {
  decimal(sub("\\.?0+$", "", sum_decimal(x)))
}