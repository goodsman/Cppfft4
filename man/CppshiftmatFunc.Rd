\name{CppshifmatFunc}
\alias{CppshiftmatFunc}
\docType{package}
\title{
Shift function for fast fourier transforms
}
\description{
This function shifts a two-dimensional fast Fourier transform so that it appears correctly in when it is inverse Fourier transformed. It does so by cutting the domain in half vertically and switching the halves. It then does the same thing in the horizontal direction.
}
\usage{
See below.
}
\examples{
\dontrun{
# We create a matrix that is half ones and half zeros
AMat = matrix(c(1,1,1,0), nrow = 2, ncol = 2)
AMat

# We shift it:
BMat = CppshiftmatFunc(AMat)
BMat
}
}
