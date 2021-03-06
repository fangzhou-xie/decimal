
<!-- README.md is generated from README.Rmd. Please edit that file -->

# decimal

<!-- badges: start -->

[![R-CMD-check](https://github.com/fangzhou-xie/decimal/workflows/R-CMD-check/badge.svg)](https://github.com/fangzhou-xie/decimal/actions)
<!-- badges: end -->

The goal of decimal is to provide a decimal class and related arithmetic
operations.

Supported operations: `+`, `-`, `*`, `/`, `==`, `!=`, `<=`, `>=`, `<`,
`>`.

## Installation

You can install the development version of decimal from
[GitHub](https://github.com/) with:

``` r
# install.packages("devtools")
devtools::install_github("fangzhou-xie/decimal")
```

## Example

This is a basic example:

``` r
library(decimal)
## basic example code
d1 <- decimal("0.120000001")
d2 <- decimal("1.232")
d1 + d2
#> [1] "1.352000001"

f1 <- 0.120000001
f2 <- 1.232
format(f1 + f2, scientific = FALSE)
#> [1] "1.352"
```
