// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CppNormKern
SEXP CppNormKern(SEXP x2, SEXP y2, SEXP Di, SEXP pi);
RcppExport SEXP Cppfft4_CppNormKern(SEXP x2SEXP, SEXP y2SEXP, SEXP DiSEXP, SEXP piSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type Di(DiSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pi(piSEXP);
    __result = Rcpp::wrap(CppNormKern(x2, y2, Di, pi));
    return __result;
END_RCPP
}
// CppReflFunc
SEXP CppReflFunc(SEXP Pop);
RcppExport SEXP Cppfft4_CppReflFunc(SEXP PopSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type Pop(PopSEXP);
    __result = Rcpp::wrap(CppReflFunc(Pop));
    return __result;
END_RCPP
}
// CppshiftmatFunc
SEXP CppshiftmatFunc(SEXP Mat);
RcppExport SEXP Cppfft4_CppshiftmatFunc(SEXP MatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type Mat(MatSEXP);
    __result = Rcpp::wrap(CppshiftmatFunc(Mat));
    return __result;
END_RCPP
}