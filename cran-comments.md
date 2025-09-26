## Test environments

- local macOS 26 Tahoe install, R 4.5.1
- ubuntu 24.04 (on github actions), R 4.5.1
- win-builder (devel and release)

## R CMD check results

0 errors | 0 warnings | 1 note

We are making this release to account for the RcppArmadillo change that
requires removing `CXX_STD=CXX11`. However, we are not able to opt-in to 
Armadillo 15.0.2 because we still have a deprecation warning associated with
`hist()` inside of our package. Details:

<https://gitlab.com/conradsnicta/armadillo-code/-/issues/284>

Once the version is bumped to Armadillo 15.0.3,
there will be no deprecation warning triggered.

We have one note related to spelling:

Possibly mis-spelled words in DESCRIPTION:
  Culpepper (9:62)
  IRT (8:54)
  asymptotes (9:11)

The first is the author's last name. The last two are correct spellings of
the methodology implemented and the plural form of a mathematical term.

## Reverse dependencies

There are no reverse dependencies.
