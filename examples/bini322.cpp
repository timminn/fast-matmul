/**
   Copyright (c) 2014-2015, Sandia Corporation
   All rights reserved.

   This file is part of fast-matmul and is under the BSD 2-Clause License, 
   which can be found in the LICENSE file in the root directory, or at 
   http://opensource.org/licenses/BSD-2-Clause.
*/

#include "linalg.hpp"
#include "bini322_10_52_approx.hpp"
#include "timing.hpp"

#include <iostream>

int main(int argc, char **argv) {
  int m = 2700;
  int k = 400;
  int n = 400;
  int numsteps = 2;

  Matrix<double> A = RandomMatrix<double>(m, k);
  Matrix<double> B = RandomMatrix<double>(k, n);
  Matrix<double> C1(m, n), C2(m, n);

  Time([&] { MatMul(A, B, C1); }, "Classical gemm");
  Time([&] { bini322_10_52_approx::FastMatmul(A, B, C2, numsteps, 1e-4); }, "Bini");

  // Test for correctness.
  std::cout << "Maximum relative difference: " << MaxRelativeDiff(C1, C2) << std::endl;

  return 0;
}
