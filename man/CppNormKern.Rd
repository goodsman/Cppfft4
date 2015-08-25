\name{CppNormKern}
\alias{CppNormKern}
\docType{package}
\title{
Bivariate Gaussian Dispersal Kernel
}
\description{
A function to compute the isotropic bivariate Gaussian kernel with a parameter equivalent to diffusion multiplied by stopping time (Di = D*ts).
}
\usage{
See below.
}
\examples{
\dontrun{
# A square spatial domain that is 200 units wide (X2) and long (Y2)
X2 = seq(-100,99,by=1)
Y2 = X2

# Visualizing the result
image(CppNormKern(X2, Y2, Di = 1, pi = pi))
}
}
