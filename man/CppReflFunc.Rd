\name{CppReflFunc}
\alias{CppReflFunc}
\docType{package}
\title{
Four-way reflecting function
}
\description{
This function is used to simulate reflecting boundary conditions for an integrodifference equation model. The function reflects the intital rectangular spatial domain first along its horizontal axis and then along the vertical axis of the resultant extended domain.
}
\usage{
See below.
}
\examples{
\dontrun{
# Assume the population is randomly distributed in space
Pop0 = matrix(runif(100, min = 1, max = 5), nrow = 10, ncol = 10)
image(Pop0)

# Visualizing the result
image(CppReflFunc(Pop0))
}
}
