#include <Rcpp.h>
using namespace Rcpp;

// export C++ function to R
//
// [[Rcpp::export]]
int fibonacci(const int x) {
   if (x<2) {
     return x;
   } else {
     return (fibonacci(x-1) + fibonacci(x-2));
   }
}
