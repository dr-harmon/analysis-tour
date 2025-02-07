#pragma once

#include <iostream>

// Function to print all possible pairs from the array
void printPairs(int* arr, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i] << "," << arr[j] << std::endl;
        }
    }
}
