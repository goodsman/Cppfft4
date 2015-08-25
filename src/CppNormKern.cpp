
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
SEXP CppNormKern(SEXP x2, SEXP y2, SEXP Di, SEXP pi) {

  NumericVector X2(x2);       // a vector representing the domain in the x dir
	NumericVector Y2(y2);       // a vector representing the domain in the y dir
	double mu = as<double>(Di); // Diffusion parameter times time
	double Pi = as<double>(pi); // the pi constant passed from R

	int Cols = X2.size();
	int Rows = Y2.size();

	// An empty matrix for output
	NumericMatrix Z(Rows, Cols);
	double sum = 0;

	for(int i = 0; i < Rows; i++){  //the loop over the rows
	for(int j = 0; j < Cols; j++){  //the loop over the columns

	Z(i,j) = 1/(4*Pi*mu)*exp(-(X2(j)*X2(j) + Y2(i)*Y2(i))/(4*mu));
	sum = sum + Z(i,j);

	}  //Closing the j loop
	}  //Closing the i loop

	// Another loop to normalize by dividing by the sum
	for(int i = 0; i < Rows; i++){  //the loop over the rows
	for(int j = 0; j < Cols; j++){  //the loop over the columns

	Z(i,j) = Z(i,j)/sum;

	}  //Closing the j loop
	}  //Closing the i loop

	return Z;
}
