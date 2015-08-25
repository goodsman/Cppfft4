
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
SEXP  CppReflFunc(SEXP Pop) {

  NumericMatrix P(Pop);       // the distribution of the population in space

	int Rows = P.nrow();
	int Cols = P.ncol();

	// An empty matrix for output
	NumericMatrix M(2*Rows, 2*Cols);

	// loop over all of the columns and reflect them (reflecting in y dir)
	for(int j = 0; j < Cols; j++){
	for(int i = 0; i < Rows; i++){
	M(i,j) = P(i,j);
	M(2*Rows - 1 - i, j) = P(i,j);
	}  //Closing the i loop
	}  //Closing the j loop

	// loop over all of the rows and reflect them (reflecting in x dir)
	for(int i = 0; i < 2*Rows; i++){
	for(int j = 0; j < Cols; j++){
	M(i, 2*Cols - 1 - j) = M(i,j);
	}  //Closing the j loop
	}	//Closing the i loop

	return M;
}
