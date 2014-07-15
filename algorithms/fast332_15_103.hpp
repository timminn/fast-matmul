#ifndef _grey332_15_103_HPP_
#define _grey332_15_103_HPP_


// This is an automatically generated file from gen.py.
#include "common.hpp"


namespace grey332_15_103 {

template <typename Scalar>
void FastMatmulRecursive(Matrix<Scalar>& A, Matrix<Scalar>& B, Matrix<Scalar>& C, int numsteps, double x=1e-8) {
    // Update multipliers
    C.UpdateMultiplier(A.multiplier());
    C.UpdateMultiplier(B.multiplier());
    A.set_multiplier(Scalar(1.0));
    B.set_multiplier(Scalar(1.0));
    // Base case for recursion
    if (numsteps == 0) {
        Gemm(A, B, C);
        return;
    }

    Matrix<Scalar> A11 = A.Subblock(3, 3, 1, 1);
    Matrix<Scalar> A12 = A.Subblock(3, 3, 1, 2);
    Matrix<Scalar> A13 = A.Subblock(3, 3, 1, 3);
    Matrix<Scalar> A21 = A.Subblock(3, 3, 2, 1);
    Matrix<Scalar> A22 = A.Subblock(3, 3, 2, 2);
    Matrix<Scalar> A23 = A.Subblock(3, 3, 2, 3);
    Matrix<Scalar> A31 = A.Subblock(3, 3, 3, 1);
    Matrix<Scalar> A32 = A.Subblock(3, 3, 3, 2);
    Matrix<Scalar> A33 = A.Subblock(3, 3, 3, 3);
    Matrix<Scalar> B11 = B.Subblock(3, 2, 1, 1);
    Matrix<Scalar> B12 = B.Subblock(3, 2, 1, 2);
    Matrix<Scalar> B21 = B.Subblock(3, 2, 2, 1);
    Matrix<Scalar> B22 = B.Subblock(3, 2, 2, 2);
    Matrix<Scalar> B31 = B.Subblock(3, 2, 3, 1);
    Matrix<Scalar> B32 = B.Subblock(3, 2, 3, 2);
    Matrix<Scalar> C11 = C.Subblock(3, 2, 1, 1);
    Matrix<Scalar> C12 = C.Subblock(3, 2, 1, 2);
    Matrix<Scalar> C21 = C.Subblock(3, 2, 2, 1);
    Matrix<Scalar> C22 = C.Subblock(3, 2, 2, 2);
    Matrix<Scalar> C31 = C.Subblock(3, 2, 3, 1);
    Matrix<Scalar> C32 = C.Subblock(3, 2, 3, 2);


    // These are the intermediate matrices.
    // We define them here so that they can be used
    // inside the lambda functions for Cilk.
    Matrix<Scalar> M1(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M2(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M3(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M4(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M5(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M6(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M7(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M8(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M9(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M10(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M11(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M12(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M13(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M14(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M15(C11.m(), C11.n(), C.multiplier());


    // M1 = (-1.0 * A13) * (1.0 * B22 + 1.0 * B32)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> T1(B11.m(), B11.n());
    Add(B22, B32, Scalar(1.0), Scalar(1.0), T1);
    M1.UpdateMultiplier(Scalar(-1));
    FastMatmulRecursive(A13, T1, M1, numsteps - 1, x);
    T1.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M2 = (-1.0 * A13 + -1.0 * A32) * (-1.0 * B22 + 1.0 * B31)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S2(A11.m(), A11.n());
    Add(A13, A32, Scalar(-1.0), Scalar(-1.0), S2);
    Matrix<Scalar> T2(B11.m(), B11.n());
    Add(B22, B31, Scalar(-1.0), Scalar(1.0), T2);
    FastMatmulRecursive(S2, T2, M2, numsteps - 1, x);
    S2.deallocate();
    T2.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M3 = (-1.0 * A11 + 1.0 * A12 + 1.0 * A32) * (-1.0 * B21 + -1.0 * B22)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S3(A11.m(), A11.n());
    Add(A11, A12, A32, Scalar(-1.0), Scalar(1.0), Scalar(1.0), S3);
    Matrix<Scalar> T3(B11.m(), B11.n());
    Add(B21, B22, Scalar(-1.0), Scalar(-1.0), T3);
    FastMatmulRecursive(S3, T3, M3, numsteps - 1, x);
    S3.deallocate();
    T3.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M4 = (1.0 * A13 + 1.0 * A23 + -1.0 * A31) * (-1.0 * B12 + 1.0 * B31 + 1.0 * B32)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S4(A11.m(), A11.n());
    Add(A13, A23, A31, Scalar(1.0), Scalar(1.0), Scalar(-1.0), S4);
    Matrix<Scalar> T4(B11.m(), B11.n());
    Add(B12, B31, B32, Scalar(-1.0), Scalar(1.0), Scalar(1.0), T4);
    FastMatmulRecursive(S4, T4, M4, numsteps - 1, x);
    S4.deallocate();
    T4.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M5 = (-1.0 * A11 + 1.0 * A12 + 1.0 * A22) * (1.0 * B11 + 1.0 * B21 + 1.0 * B22)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S5(A11.m(), A11.n());
    Add(A11, A12, A22, Scalar(-1.0), Scalar(1.0), Scalar(1.0), S5);
    Matrix<Scalar> T5(B11.m(), B11.n());
    Add(B11, B21, B22, Scalar(1.0), Scalar(1.0), Scalar(1.0), T5);
    FastMatmulRecursive(S5, T5, M5, numsteps - 1, x);
    S5.deallocate();
    T5.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M6 = (1.0 * A11 + -1.0 * A12 + 1.0 * A21 + -1.0 * A22 + 1.0 * A31) * (1.0 * B11)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S6(A11.m(), A11.n());
    Add(A11, A12, A21, A22, A31, Scalar(1.0), Scalar(-1.0), Scalar(1.0), Scalar(-1.0), Scalar(1.0), S6);
    FastMatmulRecursive(S6, B11, M6, numsteps - 1, x);
    S6.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M7 = (-1.0 * A13 + -1.0 * A23) * (1.0 * B12 + -1.0 * B32)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S7(A11.m(), A11.n());
    Add(A13, A23, Scalar(-1.0), Scalar(-1.0), S7);
    Matrix<Scalar> T7(B11.m(), B11.n());
    Add(B12, B32, Scalar(1.0), Scalar(-1.0), T7);
    FastMatmulRecursive(S7, T7, M7, numsteps - 1, x);
    S7.deallocate();
    T7.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M8 = (1.0 * A13 + 1.0 * A21 + 1.0 * A23) * (1.0 * B12)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S8(A11.m(), A11.n());
    Add(A13, A21, A23, Scalar(1.0), Scalar(1.0), Scalar(1.0), S8);
    FastMatmulRecursive(S8, B12, M8, numsteps - 1, x);
    S8.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M9 = (1.0 * A32) * (1.0 * B21 + 1.0 * B31)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> T9(B11.m(), B11.n());
    Add(B21, B31, Scalar(1.0), Scalar(1.0), T9);
    FastMatmulRecursive(A32, T9, M9, numsteps - 1, x);
    T9.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M10 = (1.0 * A12 + 1.0 * A22) * (-1.0 * B11 + -1.0 * B21)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S10(A11.m(), A11.n());
    Add(A12, A22, Scalar(1.0), Scalar(1.0), S10);
    Matrix<Scalar> T10(B11.m(), B11.n());
    Add(B11, B21, Scalar(-1.0), Scalar(-1.0), T10);
    FastMatmulRecursive(S10, T10, M10, numsteps - 1, x);
    S10.deallocate();
    T10.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M11 = (1.0 * A13 + 1.0 * A31 + 1.0 * A33) * (1.0 * B31 + 1.0 * B32)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S11(A11.m(), A11.n());
    Add(A13, A31, A33, Scalar(1.0), Scalar(1.0), Scalar(1.0), S11);
    Matrix<Scalar> T11(B11.m(), B11.n());
    Add(B31, B32, Scalar(1.0), Scalar(1.0), T11);
    FastMatmulRecursive(S11, T11, M11, numsteps - 1, x);
    S11.deallocate();
    T11.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M12 = (1.0 * A13 + 1.0 * A23 + -1.0 * A32 + 1.0 * A33) * (1.0 * B31)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S12(A11.m(), A11.n());
    Add(A13, A23, A32, A33, Scalar(1.0), Scalar(1.0), Scalar(-1.0), Scalar(1.0), S12);
    FastMatmulRecursive(S12, B31, M12, numsteps - 1, x);
    S12.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M13 = (1.0 * A11) * (1.0 * B11 + 1.0 * B12 + 1.0 * B21 + 1.0 * B22)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> T13(B11.m(), B11.n());
    Add(B11, B12, B21, B22, Scalar(1.0), Scalar(1.0), Scalar(1.0), Scalar(1.0), T13);
    FastMatmulRecursive(A11, T13, M13, numsteps - 1, x);
    T13.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M14 = (-1.0 * A31) * (1.0 * B11 + 1.0 * B12 + -1.0 * B31 + -1.0 * B32)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> T14(B11.m(), B11.n());
    Add(B11, B12, B31, B32, Scalar(1.0), Scalar(1.0), Scalar(-1.0), Scalar(-1.0), T14);
    M14.UpdateMultiplier(Scalar(-1));
    FastMatmulRecursive(A31, T14, M14, numsteps - 1, x);
    T14.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

    // M15 = (-1.0 * A13 + -1.0 * A22) * (1.0 * B22)
#ifdef _CILK_
    cilk_spawn [&] {
#elif defined _OPEN_MP_
# pragma omp task
    {
#endif
    Matrix<Scalar> S15(A11.m(), A11.n());
    Add(A13, A22, Scalar(-1.0), Scalar(-1.0), S15);
    FastMatmulRecursive(S15, B22, M15, numsteps - 1, x);
    S15.deallocate();
#ifdef _CILK_
    }();
#elif defined _OPEN_MP_
    }
#endif

#ifdef _CILK_
    cilk_sync;
#elif defined _OPEN_MP_
        # pragma omp taskwait
#endif
    Add(M2, M3, M5, M9, M10, M15, Scalar(-1.0), Scalar(-1.0), Scalar(-1.0), Scalar(-1.0), Scalar(-1.0), Scalar(-1.0), C11);
    Add(M1, M5, M10, M13, M15, Scalar(-1.0), Scalar(1.0), Scalar(1.0), Scalar(1.0), Scalar(1.0), C12);
    Add(M2, M3, M4, M5, M6, M7, M9, M14, M15, Scalar(1.0), Scalar(1.0), Scalar(1.0), Scalar(1.0), Scalar(1.0), Scalar(-1.0), Scalar(1.0), Scalar(1.0), Scalar(1.0), C21);
    Add(M1, M7, M8, M15, Scalar(1.0), Scalar(1.0), Scalar(1.0), Scalar(-1.0), C22);
    Add(M4, M7, M9, M12, M14, Scalar(-1.0), Scalar(1.0), Scalar(1.0), Scalar(1.0), Scalar(-1.0), C31);
    Add(M1, M2, M4, M7, M11, M12, Scalar(1.0), Scalar(1.0), Scalar(1.0), Scalar(-1.0), Scalar(1.0), Scalar(-1.0), C32);


    // Handle edge cases with dynamic peeling
    DynamicPeeling(A, B, C, 3, 3, 2);
}

template <typename Scalar>
void FastMatmul(Matrix<Scalar>& A, Matrix<Scalar>& B, Matrix<Scalar>& C, int numsteps, double x=1e-8) {
#ifdef _OPEN_MP_
# pragma omp parallel
    {
# pragma omp single
#endif
        FastMatmulRecursive(A, B, C, numsteps, x);
#ifdef _OPEN_MP_
    }
#endif
}

}  // namespace grey332_15_103

#endif  // _grey332_15_103_HPP_
