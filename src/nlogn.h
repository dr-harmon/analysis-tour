#pragma once

#include <vector>

// All comparison sort algorithms are n log n (or worse)
void sort(int *arr, int size)
{
    std::vector<int> vec(arr, arr + size);
    std::sort(vec.begin(), vec.end());
}
