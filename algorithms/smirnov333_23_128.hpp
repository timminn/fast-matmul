#ifndef _smirnov333_23_128_HPP_
#define _smirnov333_23_128_HPP_

// This is an automatically generated file from gen.py.
#include "common.hpp"

namespace smirnov333_23_128 {

template <typename Scalar>
void S_Add1(Matrix<Scalar>& S1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1];
        }
    }
}

template <typename Scalar>
void S_Add2(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add3(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& S3, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideS3 = S3.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    const Scalar *dataS3 = S3.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1] + dataS2[i + j * strideS2] + dataS3[i + j * strideS3];
        }
    }
}

template <typename Scalar>
void S_Add4(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add5(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] -dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add6(Matrix<Scalar>& S1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1];
        }
    }
}

template <typename Scalar>
void S_Add7(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] -dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add8(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add9(Matrix<Scalar>& S1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1];
        }
    }
}

template <typename Scalar>
void S_Add10(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1] -dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add11(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] -dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add12(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add13(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add14(Matrix<Scalar>& S1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1];
        }
    }
}

template <typename Scalar>
void S_Add15(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add16(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add17(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& S3, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideS3 = S3.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    const Scalar *dataS3 = S3.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] -dataS2[i + j * strideS2] + dataS3[i + j * strideS3];
        }
    }
}

template <typename Scalar>
void S_Add18(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add19(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] -dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add20(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] -dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add21(Matrix<Scalar>& S1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataS1[i + j * strideS1];
        }
    }
}

template <typename Scalar>
void S_Add22(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] -dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void S_Add23(Matrix<Scalar>& S1, Matrix<Scalar>& S2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideS1 = S1.stride();
    const int strideS2 = S2.stride();
    const int strideC = C.stride();
    const Scalar *dataS1 = S1.data();
    const Scalar *dataS2 = S2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataS1[i + j * strideS1] + dataS2[i + j * strideS2];
        }
    }
}

template <typename Scalar>
void T_Add1(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& T3, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideT3 = T3.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    const Scalar *dataT3 = T3.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataT1[i + j * strideT1] -dataT2[i + j * strideT2] + dataT3[i + j * strideT3];
        }
    }
}

template <typename Scalar>
void T_Add2(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataT1[i + j * strideT1] + dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add3(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add4(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add5(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add6(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add7(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add8(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add9(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataT1[i + j * strideT1] + dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add10(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1] -dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add11(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add12(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataT1[i + j * strideT1] + dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add13(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1] + dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add14(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& T3, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideT3 = T3.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    const Scalar *dataT3 = T3.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1] + dataT2[i + j * strideT2] -dataT3[i + j * strideT3];
        }
    }
}

template <typename Scalar>
void T_Add15(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1] + dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add16(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& T3, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideT3 = T3.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    const Scalar *dataT3 = T3.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1] + dataT2[i + j * strideT2] -dataT3[i + j * strideT3];
        }
    }
}

template <typename Scalar>
void T_Add17(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add18(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataT1[i + j * strideT1] + dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add19(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataT1[i + j * strideT1] -dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add20(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add21(Matrix<Scalar>& T1, Matrix<Scalar>& T2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideT2 = T2.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    const Scalar *dataT2 = T2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1] -dataT2[i + j * strideT2];
        }
    }
}

template <typename Scalar>
void T_Add22(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void T_Add23(Matrix<Scalar>& T1, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideT1 = T1.stride();
    const int strideC = C.stride();
    const Scalar *dataT1 = T1.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataT1[i + j * strideT1];
        }
    }
}

template <typename Scalar>
void M_Add1(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& M3, Matrix<Scalar>& M4, Matrix<Scalar>& M5, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideM3 = M3.stride();
    const int strideM4 = M4.stride();
    const int strideM5 = M5.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    const Scalar *dataM3 = M3.data();
    const Scalar *dataM4 = M4.data();
    const Scalar *dataM5 = M5.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = -dataM1[i + j * strideM1] + dataM2[i + j * strideM2] -dataM3[i + j * strideM3] + dataM4[i + j * strideM4] -dataM5[i + j * strideM5] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = -dataM1[i + j * strideM1] + dataM2[i + j * strideM2] -dataM3[i + j * strideM3] + dataM4[i + j * strideM4] -dataM5[i + j * strideM5];
            }
        }
    }
}

template <typename Scalar>
void M_Add2(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& M3, Matrix<Scalar>& M4, Matrix<Scalar>& M5, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideM3 = M3.stride();
    const int strideM4 = M4.stride();
    const int strideM5 = M5.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    const Scalar *dataM3 = M3.data();
    const Scalar *dataM4 = M4.data();
    const Scalar *dataM5 = M5.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] + dataM3[i + j * strideM3] + dataM4[i + j * strideM4] + dataM5[i + j * strideM5] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] + dataM3[i + j * strideM3] + dataM4[i + j * strideM4] + dataM5[i + j * strideM5];
            }
        }
    }
}

template <typename Scalar>
void M_Add3(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& M3, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideM3 = M3.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    const Scalar *dataM3 = M3.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = -dataM1[i + j * strideM1] -dataM2[i + j * strideM2] + dataM3[i + j * strideM3] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = -dataM1[i + j * strideM1] -dataM2[i + j * strideM2] + dataM3[i + j * strideM3];
            }
        }
    }
}

template <typename Scalar>
void M_Add4(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& M3, Matrix<Scalar>& M4, Matrix<Scalar>& M5, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideM3 = M3.stride();
    const int strideM4 = M4.stride();
    const int strideM5 = M5.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    const Scalar *dataM3 = M3.data();
    const Scalar *dataM4 = M4.data();
    const Scalar *dataM5 = M5.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] -dataM2[i + j * strideM2] + dataM3[i + j * strideM3] -dataM4[i + j * strideM4] + dataM5[i + j * strideM5] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] -dataM2[i + j * strideM2] + dataM3[i + j * strideM3] -dataM4[i + j * strideM4] + dataM5[i + j * strideM5];
            }
        }
    }
}

template <typename Scalar>
void M_Add5(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2];
            }
        }
    }
}

template <typename Scalar>
void M_Add6(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& M3, Matrix<Scalar>& M4, Matrix<Scalar>& M5, Matrix<Scalar>& M6, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideM3 = M3.stride();
    const int strideM4 = M4.stride();
    const int strideM5 = M5.stride();
    const int strideM6 = M6.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    const Scalar *dataM3 = M3.data();
    const Scalar *dataM4 = M4.data();
    const Scalar *dataM5 = M5.data();
    const Scalar *dataM6 = M6.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] + dataM3[i + j * strideM3] -dataM4[i + j * strideM4] -dataM5[i + j * strideM5] -dataM6[i + j * strideM6] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] + dataM3[i + j * strideM3] -dataM4[i + j * strideM4] -dataM5[i + j * strideM5] -dataM6[i + j * strideM6];
            }
        }
    }
}

template <typename Scalar>
void M_Add7(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& M3, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideM3 = M3.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    const Scalar *dataM3 = M3.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] -dataM3[i + j * strideM3] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] -dataM3[i + j * strideM3];
            }
        }
    }
}

template <typename Scalar>
void M_Add8(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& M3, Matrix<Scalar>& M4, Matrix<Scalar>& M5, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideM3 = M3.stride();
    const int strideM4 = M4.stride();
    const int strideM5 = M5.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    const Scalar *dataM3 = M3.data();
    const Scalar *dataM4 = M4.data();
    const Scalar *dataM5 = M5.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] + dataM3[i + j * strideM3] + dataM4[i + j * strideM4] -dataM5[i + j * strideM5] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = dataM1[i + j * strideM1] + dataM2[i + j * strideM2] + dataM3[i + j * strideM3] + dataM4[i + j * strideM4] -dataM5[i + j * strideM5];
            }
        }
    }
}

template <typename Scalar>
void M_Add9(Matrix<Scalar>& M1, Matrix<Scalar>& M2, Matrix<Scalar>& M3, Matrix<Scalar>& M4, Matrix<Scalar>& M5, Matrix<Scalar>& C, double x, bool sequential, Scalar beta) {
    const int strideM1 = M1.stride();
    const int strideM2 = M2.stride();
    const int strideM3 = M3.stride();
    const int strideM4 = M4.stride();
    const int strideM5 = M5.stride();
    const int strideC = C.stride();
    const Scalar *dataM1 = M1.data();
    const Scalar *dataM2 = M2.data();
    const Scalar *dataM3 = M3.data();
    const Scalar *dataM4 = M4.data();
    const Scalar *dataM5 = M5.data();
    Scalar *dataC = C.data();
    if (beta != Scalar(0.0)) {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = -dataM1[i + j * strideM1] -dataM2[i + j * strideM2] + dataM3[i + j * strideM3] + dataM4[i + j * strideM4] -dataM5[i + j * strideM5] + beta * dataC[i + j * strideC];
            }
        }
    } else {
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
        for (int j = 0; j < C.n(); ++j) {
            for (int i = 0; i < C.m(); ++i) {
                dataC[i + j * strideC] = -dataM1[i + j * strideM1] -dataM2[i + j * strideM2] + dataM3[i + j * strideM3] + dataM4[i + j * strideM4] -dataM5[i + j * strideM5];
            }
        }
    }
}

template <typename Scalar>
void SX_Add1(Matrix<Scalar>& SX1, Matrix<Scalar>& SX2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideSX1 = SX1.stride();
    const int strideSX2 = SX2.stride();
    const int strideC = C.stride();
    const Scalar *dataSX1 = SX1.data();
    const Scalar *dataSX2 = SX2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataSX1[i + j * strideSX1] + dataSX2[i + j * strideSX2];
        }
    }
}

template <typename Scalar>
void SX_Add2(Matrix<Scalar>& SX1, Matrix<Scalar>& SX2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideSX1 = SX1.stride();
    const int strideSX2 = SX2.stride();
    const int strideC = C.stride();
    const Scalar *dataSX1 = SX1.data();
    const Scalar *dataSX2 = SX2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataSX1[i + j * strideSX1] + dataSX2[i + j * strideSX2];
        }
    }
}

template <typename Scalar>
void TX_Add1(Matrix<Scalar>& TX1, Matrix<Scalar>& TX2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideTX1 = TX1.stride();
    const int strideTX2 = TX2.stride();
    const int strideC = C.stride();
    const Scalar *dataTX1 = TX1.data();
    const Scalar *dataTX2 = TX2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataTX1[i + j * strideTX1] + dataTX2[i + j * strideTX2];
        }
    }
}

template <typename Scalar>
void TX_Add2(Matrix<Scalar>& TX1, Matrix<Scalar>& TX2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideTX1 = TX1.stride();
    const int strideTX2 = TX2.stride();
    const int strideC = C.stride();
    const Scalar *dataTX1 = TX1.data();
    const Scalar *dataTX2 = TX2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataTX1[i + j * strideTX1] + dataTX2[i + j * strideTX2];
        }
    }
}

template <typename Scalar>
void TX_Add3(Matrix<Scalar>& TX1, Matrix<Scalar>& TX2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideTX1 = TX1.stride();
    const int strideTX2 = TX2.stride();
    const int strideC = C.stride();
    const Scalar *dataTX1 = TX1.data();
    const Scalar *dataTX2 = TX2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataTX1[i + j * strideTX1] + dataTX2[i + j * strideTX2];
        }
    }
}

template <typename Scalar>
void MX_Add1(Matrix<Scalar>& MX1, Matrix<Scalar>& MX2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideMX1 = MX1.stride();
    const int strideMX2 = MX2.stride();
    const int strideC = C.stride();
    const Scalar *dataMX1 = MX1.data();
    const Scalar *dataMX2 = MX2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataMX1[i + j * strideMX1] -dataMX2[i + j * strideMX2];
        }
    }
}

template <typename Scalar>
void MX_Add2(Matrix<Scalar>& MX1, Matrix<Scalar>& MX2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideMX1 = MX1.stride();
    const int strideMX2 = MX2.stride();
    const int strideC = C.stride();
    const Scalar *dataMX1 = MX1.data();
    const Scalar *dataMX2 = MX2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = -dataMX1[i + j * strideMX1] -dataMX2[i + j * strideMX2];
        }
    }
}

template <typename Scalar>
void MX_Add3(Matrix<Scalar>& MX1, Matrix<Scalar>& MX2, Matrix<Scalar>& C, double x, bool sequential) {
    const int strideMX1 = MX1.stride();
    const int strideMX2 = MX2.stride();
    const int strideC = C.stride();
    const Scalar *dataMX1 = MX1.data();
    const Scalar *dataMX2 = MX2.data();
    Scalar *dataC = C.data();
#ifdef _PARALLEL_
# pragma omp parallel for if(!sequential)
#endif
    for (int j = 0; j < C.n(); ++j) {
        for (int i = 0; i < C.m(); ++i) {
            dataC[i + j * strideC] = dataMX1[i + j * strideMX1] -dataMX2[i + j * strideMX2];
        }
    }
}

template <typename Scalar>
void FastMatmulRecursive(LockAndCounter& locker, MemoryManager<Scalar>& mem_mngr, Matrix<Scalar>& A, Matrix<Scalar>& B, Matrix<Scalar>& C, int total_steps, int steps_left, int start_index, double x, int num_threads, Scalar beta) {
    // Update multipliers
    C.UpdateMultiplier(A.multiplier());
    C.UpdateMultiplier(B.multiplier());
    A.set_multiplier(Scalar(1.0));
    B.set_multiplier(Scalar(1.0));
    // Base case for recursion
    if (steps_left == 0) {
        MatMul(A, B, C);
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
    Matrix<Scalar> B11 = B.Subblock(3, 3, 1, 1);
    Matrix<Scalar> B12 = B.Subblock(3, 3, 1, 2);
    Matrix<Scalar> B13 = B.Subblock(3, 3, 1, 3);
    Matrix<Scalar> B21 = B.Subblock(3, 3, 2, 1);
    Matrix<Scalar> B22 = B.Subblock(3, 3, 2, 2);
    Matrix<Scalar> B23 = B.Subblock(3, 3, 2, 3);
    Matrix<Scalar> B31 = B.Subblock(3, 3, 3, 1);
    Matrix<Scalar> B32 = B.Subblock(3, 3, 3, 2);
    Matrix<Scalar> B33 = B.Subblock(3, 3, 3, 3);
    Matrix<Scalar> C11 = C.Subblock(3, 3, 1, 1);
    Matrix<Scalar> C12 = C.Subblock(3, 3, 1, 2);
    Matrix<Scalar> C13 = C.Subblock(3, 3, 1, 3);
    Matrix<Scalar> C21 = C.Subblock(3, 3, 2, 1);
    Matrix<Scalar> C22 = C.Subblock(3, 3, 2, 2);
    Matrix<Scalar> C23 = C.Subblock(3, 3, 2, 3);
    Matrix<Scalar> C31 = C.Subblock(3, 3, 3, 1);
    Matrix<Scalar> C32 = C.Subblock(3, 3, 3, 2);
    Matrix<Scalar> C33 = C.Subblock(3, 3, 3, 3);


    // Matrices to store the results of multiplications.
#ifdef _PARALLEL_
    Matrix<Scalar> M1(mem_mngr.GetMem(start_index, 1, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M2(mem_mngr.GetMem(start_index, 2, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M3(mem_mngr.GetMem(start_index, 3, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M4(mem_mngr.GetMem(start_index, 4, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M5(mem_mngr.GetMem(start_index, 5, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M6(mem_mngr.GetMem(start_index, 6, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M7(mem_mngr.GetMem(start_index, 7, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M8(mem_mngr.GetMem(start_index, 8, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M9(mem_mngr.GetMem(start_index, 9, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M10(mem_mngr.GetMem(start_index, 10, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M11(mem_mngr.GetMem(start_index, 11, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M12(mem_mngr.GetMem(start_index, 12, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M13(mem_mngr.GetMem(start_index, 13, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M14(mem_mngr.GetMem(start_index, 14, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M15(mem_mngr.GetMem(start_index, 15, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M16(mem_mngr.GetMem(start_index, 16, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M17(mem_mngr.GetMem(start_index, 17, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M18(mem_mngr.GetMem(start_index, 18, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M19(mem_mngr.GetMem(start_index, 19, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M20(mem_mngr.GetMem(start_index, 20, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M21(mem_mngr.GetMem(start_index, 21, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M22(mem_mngr.GetMem(start_index, 22, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M23(mem_mngr.GetMem(start_index, 23, total_steps - steps_left, M), C11.m(), C11.m(), C11.n(), C.multiplier());
#else
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
    Matrix<Scalar> M16(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M17(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M18(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M19(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M20(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M21(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M22(C11.m(), C11.n(), C.multiplier());
    Matrix<Scalar> M23(C11.m(), C11.n(), C.multiplier());
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
    bool sequential1 = should_launch_task(23, total_steps, steps_left, start_index, 1, num_threads);
    bool sequential2 = should_launch_task(23, total_steps, steps_left, start_index, 2, num_threads);
    bool sequential3 = should_launch_task(23, total_steps, steps_left, start_index, 3, num_threads);
    bool sequential4 = should_launch_task(23, total_steps, steps_left, start_index, 4, num_threads);
    bool sequential5 = should_launch_task(23, total_steps, steps_left, start_index, 5, num_threads);
    bool sequential6 = should_launch_task(23, total_steps, steps_left, start_index, 6, num_threads);
    bool sequential7 = should_launch_task(23, total_steps, steps_left, start_index, 7, num_threads);
    bool sequential8 = should_launch_task(23, total_steps, steps_left, start_index, 8, num_threads);
    bool sequential9 = should_launch_task(23, total_steps, steps_left, start_index, 9, num_threads);
    bool sequential10 = should_launch_task(23, total_steps, steps_left, start_index, 10, num_threads);
    bool sequential11 = should_launch_task(23, total_steps, steps_left, start_index, 11, num_threads);
    bool sequential12 = should_launch_task(23, total_steps, steps_left, start_index, 12, num_threads);
    bool sequential13 = should_launch_task(23, total_steps, steps_left, start_index, 13, num_threads);
    bool sequential14 = should_launch_task(23, total_steps, steps_left, start_index, 14, num_threads);
    bool sequential15 = should_launch_task(23, total_steps, steps_left, start_index, 15, num_threads);
    bool sequential16 = should_launch_task(23, total_steps, steps_left, start_index, 16, num_threads);
    bool sequential17 = should_launch_task(23, total_steps, steps_left, start_index, 17, num_threads);
    bool sequential18 = should_launch_task(23, total_steps, steps_left, start_index, 18, num_threads);
    bool sequential19 = should_launch_task(23, total_steps, steps_left, start_index, 19, num_threads);
    bool sequential20 = should_launch_task(23, total_steps, steps_left, start_index, 20, num_threads);
    bool sequential21 = should_launch_task(23, total_steps, steps_left, start_index, 21, num_threads);
    bool sequential22 = should_launch_task(23, total_steps, steps_left, start_index, 22, num_threads);
    bool sequential23 = should_launch_task(23, total_steps, steps_left, start_index, 23, num_threads);
#else
    bool sequential1 = false;
    bool sequential2 = false;
    bool sequential3 = false;
    bool sequential4 = false;
    bool sequential5 = false;
    bool sequential6 = false;
    bool sequential7 = false;
    bool sequential8 = false;
    bool sequential9 = false;
    bool sequential10 = false;
    bool sequential11 = false;
    bool sequential12 = false;
    bool sequential13 = false;
    bool sequential14 = false;
    bool sequential15 = false;
    bool sequential16 = false;
    bool sequential17 = false;
    bool sequential18 = false;
    bool sequential19 = false;
    bool sequential20 = false;
    bool sequential21 = false;
    bool sequential22 = false;
    bool sequential23 = false;
#endif
    Matrix<Scalar> A_X1(A11.m(), A11.n());
    SX_Add1(A11, A31, A_X1, x, false);
    Matrix<Scalar> A_X2(A11.m(), A11.n());
    SX_Add2(A22, A23, A_X2, x, false);

    Matrix<Scalar> B_X1(B11.m(), B11.n());
    TX_Add1(B12, B13, B_X1, x, false);
    Matrix<Scalar> B_X2(B11.m(), B11.n());
    TX_Add2(B12, B22, B_X2, x, false);
    Matrix<Scalar> B_X3(B11.m(), B11.n());
    TX_Add3(B22, B23, B_X3, x, false);


    // M1 = (1 * A33) * (-1 * B11 + -1 * B21 + 1 * B31)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential1) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> T1(mem_mngr.GetMem(start_index, 1, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T1(B11.m(), B11.n());
#endif
    T_Add1(B11, B21, B31, T1, x, sequential1);
    M1.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, A33, T1, M1, total_steps, steps_left - 1, (start_index + 1 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    T1.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 1, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M2 = (1 * A22 + 1 * A33) * (-1 * B21 + 1 * B32)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential2) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S2(mem_mngr.GetMem(start_index, 2, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S2(A11.m(), A11.n());
#endif
    S_Add2(A22, A33, S2, x, sequential2);
#ifdef _PARALLEL_
    Matrix<Scalar> T2(mem_mngr.GetMem(start_index, 2, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T2(B11.m(), B11.n());
#endif
    T_Add2(B21, B32, T2, x, sequential2);
    FastMatmulRecursive(locker, mem_mngr, S2, T2, M2, total_steps, steps_left - 1, (start_index + 2 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S2.deallocate();
    T2.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 2, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M3 = (1 * A12 + 1 * A32 + 1 * A_X1) * (1 * B23)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential3) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S3(mem_mngr.GetMem(start_index, 3, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S3(A11.m(), A11.n());
#endif
    S_Add3(A12, A32, A_X1, S3, x, sequential3);
    M3.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, S3, B23, M3, total_steps, steps_left - 1, (start_index + 3 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S3.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 3, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M4 = (-1 * A11 + 1 * A21) * (1 * B_X1)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential4) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S4(mem_mngr.GetMem(start_index, 4, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S4(A11.m(), A11.n());
#endif
    S_Add4(A11, A21, S4, x, sequential4);
    M4.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, S4, B_X1, M4, total_steps, steps_left - 1, (start_index + 4 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S4.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 4, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M5 = (-1 * A31 + -1 * A32) * (-1 * B12)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential5) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S5(mem_mngr.GetMem(start_index, 5, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S5(A11.m(), A11.n());
#endif
    S_Add5(A31, A32, S5, x, sequential5);
    M5.UpdateMultiplier(Scalar(-1));
    FastMatmulRecursive(locker, mem_mngr, S5, B12, M5, total_steps, steps_left - 1, (start_index + 5 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S5.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 5, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M6 = (1 * A_X2) * (1 * B32)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential6) shared(mem_mngr, locker) untied
    {
#endif
    M6.UpdateMultiplier(Scalar(1));
    M6.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, A_X2, B32, M6, total_steps, steps_left - 1, (start_index + 6 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 6, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M7 = (-1 * A21 + -1 * A33) * (1 * B11)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential7) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S7(mem_mngr.GetMem(start_index, 7, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S7(A11.m(), A11.n());
#endif
    S_Add7(A21, A33, S7, x, sequential7);
    M7.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, S7, B11, M7, total_steps, steps_left - 1, (start_index + 7 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S7.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 7, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M8 = (1 * A31 + 1 * A33) * (1 * B11)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential8) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S8(mem_mngr.GetMem(start_index, 8, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S8(A11.m(), A11.n());
#endif
    S_Add8(A31, A33, S8, x, sequential8);
    M8.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, S8, B11, M8, total_steps, steps_left - 1, (start_index + 8 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S8.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 8, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M9 = (1 * A22) * (-1 * B32 + 1 * B_X2)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential9) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> T9(mem_mngr.GetMem(start_index, 9, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T9(B11.m(), B11.n());
#endif
    T_Add9(B32, B_X2, T9, x, sequential9);
    M9.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, A22, T9, M9, total_steps, steps_left - 1, (start_index + 9 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    T9.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 9, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M10 = (1 * A22 + -1 * A32) * (1 * B21 + -1 * B_X2)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential10) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S10(mem_mngr.GetMem(start_index, 10, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S10(A11.m(), A11.n());
#endif
    S_Add10(A22, A32, S10, x, sequential10);
#ifdef _PARALLEL_
    Matrix<Scalar> T10(mem_mngr.GetMem(start_index, 10, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T10(B11.m(), B11.n());
#endif
    T_Add10(B21, B_X2, T10, x, sequential10);
    FastMatmulRecursive(locker, mem_mngr, S10, T10, M10, total_steps, steps_left - 1, (start_index + 10 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S10.deallocate();
    T10.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 10, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M11 = (-1 * A32 + -1 * A33) * (1 * B21)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential11) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S11(mem_mngr.GetMem(start_index, 11, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S11(A11.m(), A11.n());
#endif
    S_Add11(A32, A33, S11, x, sequential11);
    M11.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, S11, B21, M11, total_steps, steps_left - 1, (start_index + 11 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S11.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 11, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M12 = (-1 * A13 + 1 * A_X2) * (-1 * B32 + 1 * B_X3)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential12) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S12(mem_mngr.GetMem(start_index, 12, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S12(A11.m(), A11.n());
#endif
    S_Add12(A13, A_X2, S12, x, sequential12);
#ifdef _PARALLEL_
    Matrix<Scalar> T12(mem_mngr.GetMem(start_index, 12, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T12(B11.m(), B11.n());
#endif
    T_Add12(B32, B_X3, T12, x, sequential12);
    FastMatmulRecursive(locker, mem_mngr, S12, T12, M12, total_steps, steps_left - 1, (start_index + 12 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S12.deallocate();
    T12.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 12, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M13 = (1 * A13 + 1 * A33) * (1 * B31 + 1 * B33)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential13) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S13(mem_mngr.GetMem(start_index, 13, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S13(A11.m(), A11.n());
#endif
    S_Add13(A13, A33, S13, x, sequential13);
#ifdef _PARALLEL_
    Matrix<Scalar> T13(mem_mngr.GetMem(start_index, 13, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T13(B11.m(), B11.n());
#endif
    T_Add13(B31, B33, T13, x, sequential13);
    FastMatmulRecursive(locker, mem_mngr, S13, T13, M13, total_steps, steps_left - 1, (start_index + 13 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S13.deallocate();
    T13.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 13, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M14 = (1 * A_X1) * (1 * B11 + 1 * B13 + -1 * B23)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential14) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> T14(mem_mngr.GetMem(start_index, 14, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T14(B11.m(), B11.n());
#endif
    T_Add14(B11, B13, B23, T14, x, sequential14);
    M14.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, A_X1, T14, M14, total_steps, steps_left - 1, (start_index + 14 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    T14.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 14, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M15 = (-1 * A11 + 1 * A33) * (1 * B11 + 1 * B33)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential15) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S15(mem_mngr.GetMem(start_index, 15, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S15(A11.m(), A11.n());
#endif
    S_Add15(A11, A33, S15, x, sequential15);
#ifdef _PARALLEL_
    Matrix<Scalar> T15(mem_mngr.GetMem(start_index, 15, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T15(B11.m(), B11.n());
#endif
    T_Add15(B11, B33, T15, x, sequential15);
    FastMatmulRecursive(locker, mem_mngr, S15, T15, M15, total_steps, steps_left - 1, (start_index + 15 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S15.deallocate();
    T15.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 15, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M16 = (-1 * A13 + 1 * A23) * (1 * B32 + 1 * B33 + -1 * B_X3)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential16) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S16(mem_mngr.GetMem(start_index, 16, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S16(A11.m(), A11.n());
#endif
    S_Add16(A13, A23, S16, x, sequential16);
#ifdef _PARALLEL_
    Matrix<Scalar> T16(mem_mngr.GetMem(start_index, 16, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T16(B11.m(), B11.n());
#endif
    T_Add16(B32, B33, B_X3, T16, x, sequential16);
    FastMatmulRecursive(locker, mem_mngr, S16, T16, M16, total_steps, steps_left - 1, (start_index + 16 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S16.deallocate();
    T16.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 16, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M17 = (-1 * A12 + -1 * A13 + 1 * A_X2) * (-1 * B_X3)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential17) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S17(mem_mngr.GetMem(start_index, 17, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S17(A11.m(), A11.n());
#endif
    S_Add17(A12, A13, A_X2, S17, x, sequential17);
    M17.UpdateMultiplier(Scalar(-1));
    FastMatmulRecursive(locker, mem_mngr, S17, B_X3, M17, total_steps, steps_left - 1, (start_index + 17 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S17.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 17, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M18 = (-1 * A23 + 1 * A33) * (-1 * B31 + 1 * B32)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential18) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S18(mem_mngr.GetMem(start_index, 18, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S18(A11.m(), A11.n());
#endif
    S_Add18(A23, A33, S18, x, sequential18);
#ifdef _PARALLEL_
    Matrix<Scalar> T18(mem_mngr.GetMem(start_index, 18, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T18(B11.m(), B11.n());
#endif
    T_Add18(B31, B32, T18, x, sequential18);
    FastMatmulRecursive(locker, mem_mngr, S18, T18, M18, total_steps, steps_left - 1, (start_index + 18 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S18.deallocate();
    T18.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 18, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M19 = (-1 * A32 + -1 * A_X1) * (-1 * B12 + -1 * B23)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential19) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S19(mem_mngr.GetMem(start_index, 19, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S19(A11.m(), A11.n());
#endif
    S_Add19(A32, A_X1, S19, x, sequential19);
#ifdef _PARALLEL_
    Matrix<Scalar> T19(mem_mngr.GetMem(start_index, 19, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T19(B11.m(), B11.n());
#endif
    T_Add19(B12, B23, T19, x, sequential19);
    FastMatmulRecursive(locker, mem_mngr, S19, T19, M19, total_steps, steps_left - 1, (start_index + 19 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S19.deallocate();
    T19.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 19, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M20 = (-1 * A11 + -1 * A13) * (1 * B33)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential20) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S20(mem_mngr.GetMem(start_index, 20, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S20(A11.m(), A11.n());
#endif
    S_Add20(A11, A13, S20, x, sequential20);
    M20.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, S20, B33, M20, total_steps, steps_left - 1, (start_index + 20 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S20.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 20, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M21 = (1 * A11) * (1 * B33 + -1 * B_X1)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential21) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> T21(mem_mngr.GetMem(start_index, 21, total_steps - steps_left, T), B11.m(), B11.m(), B11.n());
#else
    Matrix<Scalar> T21(B11.m(), B11.n());
#endif
    T_Add21(B33, B_X1, T21, x, sequential21);
    M21.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, A11, T21, M21, total_steps, steps_left - 1, (start_index + 21 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    T21.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 21, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M22 = (-1 * A21 + -1 * A22) * (1 * B12)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential22) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S22(mem_mngr.GetMem(start_index, 22, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S22(A11.m(), A11.n());
#endif
    S_Add22(A21, A22, S22, x, sequential22);
    M22.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, S22, B12, M22, total_steps, steps_left - 1, (start_index + 22 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S22.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 22, num_threads)) {
# pragma omp taskwait
# if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    SwitchToDFS(locker, num_threads);
# endif
    }
#endif

    // M23 = (-1 * A12 + 1 * A33) * (1 * B21)
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
# pragma omp task if(sequential23) shared(mem_mngr, locker) untied
    {
#endif
#ifdef _PARALLEL_
    Matrix<Scalar> S23(mem_mngr.GetMem(start_index, 23, total_steps - steps_left, S), A11.m(), A11.m(), A11.n());
#else
    Matrix<Scalar> S23(A11.m(), A11.n());
#endif
    S_Add23(A12, A33, S23, x, sequential23);
    M23.UpdateMultiplier(Scalar(1));
    FastMatmulRecursive(locker, mem_mngr, S23, B21, M23, total_steps, steps_left - 1, (start_index + 23 - 1) * 23, x, num_threads, Scalar(0.0));
#ifndef _PARALLEL_
    S23.deallocate();
#endif
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
locker.Decrement();
    }
    if (should_task_wait(23, total_steps, steps_left, start_index, 23, num_threads)) {
# pragma omp taskwait
    }
#endif

    Matrix<Scalar> M_X1(M11.m(), M11.n());
    MX_Add1(M3, M5, M_X1, x, false);
    Matrix<Scalar> M_X2(M11.m(), M11.n());
    MX_Add2(M19, M21, M_X2, x, false);
    Matrix<Scalar> M_X3(M11.m(), M11.n());
    MX_Add3(M9, M22, M_X3, x, false);
    M_Add1(M1, M13, M15, M20, M23, C11, x, false, beta);
    M_Add2(M6, M12, M17, M19, M_X1, C12, x, false, beta);
    M_Add3(M20, M_X1, M_X2, C13, x, false, beta);
    M_Add4(M1, M2, M6, M7, M18, C21, x, false, beta);
    M_Add5(M6, M_X3, C22, x, false, beta);
    M_Add6(M4, M12, M16, M20, M21, M_X3, C23, x, false, beta);
    M_Add7(M1, M8, M11, C31, x, false, beta);
    M_Add8(M2, M5, M9, M10, M11, C32, x, false, beta);
    M_Add9(M5, M8, M14, M15, M_X2, C33, x, false, beta);

    // Handle edge cases with dynamic peeling
#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_ || _PARALLEL_ == _HYBRID_PAR_)
    if (total_steps == steps_left) {
        mkl_set_num_threads_local(num_threads);
        mkl_set_dynamic(0);
    }
#endif
    DynamicPeeling(A, B, C, 3, 3, 3, beta);
}

// C := alpha * A * B + beta * C
template <typename Scalar>
double FastMatmul(Matrix<Scalar>& A, Matrix<Scalar>& B, Matrix<Scalar>& C,
    int num_steps, double x=1e-8, Scalar alpha=Scalar(1.0), Scalar beta=Scalar(0.0)) {
    MemoryManager<Scalar> mem_mngr;
#ifdef _PARALLEL_
    mem_mngr.Allocate(3, 3, 3, 23, num_steps, A.m(), A.n(), B.n());
#endif
    A.set_multiplier(alpha);
    int num_multiplies_per_step = 23;
    int total_multiplies = pow(num_multiplies_per_step, num_steps);

    // Set parameters needed for all types of parallelism.
    int num_threads = 0;
#ifdef _PARALLEL_
# pragma omp parallel
    {
        if (omp_get_thread_num() == 0) { num_threads = omp_get_num_threads(); }
    }
    omp_set_nested(1);
#endif

#if defined(_PARALLEL_) && (_PARALLEL_ == _BFS_PAR_)
# pragma omp parallel
    {
        mkl_set_num_threads_local(1);
        mkl_set_dynamic(0);
    }
#endif

#if defined(_PARALLEL_) && (_PARALLEL_ == _DFS_PAR_)
    mkl_set_dynamic(0);
#endif

#if defined(_PARALLEL_) && (_PARALLEL_ == _HYBRID_PAR_)
    if (num_threads > total_multiplies) {
        mkl_set_dynamic(0);
    } else {
# pragma omp parallel
        {
            mkl_set_num_threads_local(1);
            mkl_set_dynamic(0);
        }
    }
#endif

    LockAndCounter locker(total_multiplies - (total_multiplies % num_threads));
    using FpMilliseconds = std::chrono::duration<float, std::chrono::milliseconds::period>;
    auto t1 = std::chrono::high_resolution_clock::now();

#ifdef _PARALLEL_
# pragma omp parallel
    {
# pragma omp single
#endif
        FastMatmulRecursive(locker, mem_mngr, A, B, C, num_steps, num_steps, 0, x, num_threads, beta);
#ifdef _PARALLEL_
    }
#endif
    auto t2 = std::chrono::high_resolution_clock::now();
    return FpMilliseconds(t2 - t1).count();
}

}  // namespace smirnov333_23_128

#endif  // _smirnov333_23_128_HPP_
