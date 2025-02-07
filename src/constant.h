#pragma once

// Constant-time algorithms
// f(n) = c

// Get nth element in an array
template <typename T>
T getElementAt(T* array, int index)
{
    return array[index];
}

// Swap two elements
template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}
