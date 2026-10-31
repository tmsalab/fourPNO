

<!-- README.md is generated from README.qmd. Please edit that file -->

# fourPNO <a href="https://tmsalab.github.io/fourPNO/"><picture><source media="(prefers-color-scheme: dark)" srcset="man/figures/fourPNO-logo-animated-dark.svg"><img src="man/figures/fourPNO-logo-animated-light.svg" width="150" align="right" alt="A hexagonal logo for fourPNO: an S-shaped item response curve splits the hex above a solid ink form with the word fourPNO across its rise, inside an orange posterior band, with thin lines labelled g, 1 − s, a and b/a for its floor, ceiling, slope at the inflection and location."/></picture></a>

<!-- badges: start -->

[![R-CMD-check](https://github.com/tmsalab/fourPNO/actions/workflows/R-CMD-check.yaml/badge.svg)](https://github.com/tmsalab/fourPNO/actions/workflows/R-CMD-check.yaml)
[![Package-License](http://img.shields.io/badge/license-GPL%20(%3E=2)-brightgreen.svg?style=flat)](http://www.gnu.org/licenses/gpl-2.0.html)
[![CRAN Version
Badge](http://www.r-pkg.org/badges/version/fourPNO.png)](https://cran.r-project.org/package=fourPNO)
[![CRAN
Status](https://cranchecks.info/badges/worst/fourPNO.png)](https://cran.r-project.org/web/checks/check_results_fourPNO.html)
[![RStudio CRAN Mirror’s Monthly
Downloads](http://cranlogs.r-pkg.org/badges/fourPNO?color=brightgreen.png)](https://www.r-pkg.org:443/pkg/fourPNO)
[![RStudio CRAN Mirror’s Total
Downloads](http://cranlogs.r-pkg.org/badges/grand-total/fourPNO?color=brightgreen.png)](https://www.r-pkg.org:443/pkg/fourPNO)
<!-- badges: end -->

Estimate Barton & Lord’s (1981)
<https://doi.org/10.1002/j.2333-8504.1981.tb01255.x> four parameter IRT
model with lower and upper asymptotes using Bayesian formulation
described by Culpepper (2016)
<https://doi.org/10.1007/s11336-015-9477-6>.

## Installation

You can install `fourPNO` from CRAN using:

``` r
install.packages("fourPNO")
```

Or, you can be on the cutting-edge development version on GitHub using:

``` r
if(!requireNamespace("devtools")) install.packages("devtools")
devtools::install_github("tmsalab/fourPNO")
```

## Usage

To use the `fourPNO` package, load it into *R* using:

``` r
library("fourPNO")
```

Inside the package, the estimation routines can be viewed as:

- `Gibbs_2PNO()`
- `Gibbs_4PNO()`

## Author

Steven Andrew Culpepper

## Citing the `fourPNO` package

To ensure future development of the package, please cite `fourPNO`
package if used during an analysis or simulation study. Citation
information for the package may be acquired by using in *R*:

``` r
citation("fourPNO")
```

## License

GPL (\>= 2)
