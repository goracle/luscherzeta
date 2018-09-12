//#include <algorithm> // std::count
//#include <assert.h>
#include <cstdlib>
#include <iostream>
#include <sstream>

#include "gsl_exception_handler.h"
#include "spherical.h"
#include "vector_sorting.h"
#include "zeta.h"

// need gsl, blas => sudo apt-get install libgsl-dev libblas-dev

using namespace std;

//std::string gsl_complex_to_string( gsl_complex val )
//{
//  stringstream sout;
//  sout <<"(" <<GSL_REAL(val) <<", " <<GSL_IMAG(val) <<")";
//  return sout.str();
//}

int main(int argc, char** argv)
{

  gsl_set_error_handler( &gsl_to_c_handler ); // set my own error handler

  struct full_params fparams;
  struct zeta_params zparams;
  fparams.dx = 0;
  fparams.dy = 1;
  fparams.dz = 1;
  fparams.q2 = .9;
  fparams.gam = 1.1;
  fparams.l = 0;
  fparams.m = 0;

  std::cout << "zeta 00 : " << full_zeta_med_00 (fparams) << std::endl;
  std::cout << "zeta 00 : " << full_zeta_00 (fparams) << std::endl;

  //associated_legendre algen(); // generator for associated legendre polynomials

  gsl_set_error_handler( NULL );
  return 0;
}
