//Copyright Kutarin Aleksandr 2024

#ifndef GEMM_CUBLAS_H
#define GEMM_CUBLAS_H

#include <vector>

std::vector<float> GemmCUBLAS(const std::vector<float>& a,
    const std::vector<float>& b,
    int n);

#endif // __GEMM_CUBLAS_H