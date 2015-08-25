
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
SEXP  CppshiftmatFunc(SEXP Mat) {

  ComplexMatrix M(Mat);       // The input matrix

	int Rows = M.nrow();
	double HalfR = Rows/2;

	int Cols = M.ncol();
	double HalfC = Cols/2;

	ComplexMatrix Output1(Rows, Cols);
	ComplexMatrix Output2(Rows, Cols);

	// First shifting all of the rows
	for(int i = 0; i < Rows; i++){  //the loop over the rows
	for(int j = 0; j < HalfC; j++){  //the loop over half of the columns
	Output1(i, j) = M(i, HalfC + j);
	Output1(i, HalfC + j) = M(i, j);
	}   //Closing the j loop
	}  //Closing the i loop

	// Now shifting all of the columns
	for(int j = 0; j < Cols; j++){  //the loop over the columns
	for(int i = 0; i < HalfR; i++){  //the loop over half of the rows
	Output2(i, j) = Output1(HalfR + i, j);
	Output2(HalfR + i, j) = Output1(i, j);
	}   //Closing the i loop
	}  //Closing the j loop

	return Output2;
}
