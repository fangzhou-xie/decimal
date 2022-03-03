
#' @export
print.decimal <- function(x, max = getOption("max.print")) {
  x <- x[seq_len(min(length(x), max))]
  if (length(x) == 0) {
    print(character(0))
  } else {
    print(as.character(x))
  }
  invisible(x)
}

#' @export
sum.decimal <- function(x, ...) {
  decimal(sub("\\.?0+$", "", sum_decimal_cpp(x)))
}

#' #' @export
#' sum_decimal <- function(x) {
#'   decimal(sub("\\.?0+$", "", sum_decimal(x)))
#' }