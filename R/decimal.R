#' Decimal Class
#' 
#' `decimal()` converts a valid vector into decimal class;
#' `is.decimal()` tests whether the object is decimal class;
#' `as.decimal()` converts suitable vector into decimal class
#' 
#' @param digits, int, nubmer of digits
#' @param decimal_sep, separator for decimal place
#' @param thousand_sep, separator for thousand place
#' 
#' @export
decimal <- function(x, digits = NULL, decimal_sep = ".", thousand_sep = ",") {
  if (!is.character(x)) {
    if (is.numeric(x)) {
      x <- sapply(x, toString, USE.NAMES = FALSE)
    } else {
      stop("Input x must either be numeric or character.")
    }
  } else {
    if (identical(character(0), x)) stop("Input x must not be character(0).")
  }
  
  x <- gsub(thousand_sep, "", x, fixed = TRUE)
  
  if (is.null(digits)) {
    # determine digits automatically
    x_split <- strsplit(x, ".", fixed = TRUE)
    digits <- max(nchar(sapply(x_split, function(x) x[2])))
    digits <- if (is.na(digits)) 0 else digits
  }
  structure(x, class = "decimal", digits = digits)
}

#' @rdname decimal
#' @export
as.decimal <- function(x) {
  if (is.numeric(x) || (is.character(x) && all(numbers_only(x)))) {
    decimal(sapply(x, toString, USE.NAMES = FALSE))
  } else {
    stop("There are non-numeric entries.")
  }
}

#' @rdname decimal
#' @export
is.decimal <- function(x) {
  inherits(x, "decimal")
}


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

numbers_only <- function(x) {
  suppressWarnings(!is.na(as.numeric(as.character(x))))
}