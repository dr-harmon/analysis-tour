#pragma once

// Recursive implementation of the binary search algorithm to return
// the position of `key` in subarray arr[low...high]
int binarySearch(int arr[], int low, int high, int key)
{
    // Base condition (search space is exhausted)
    if (low > high) {
        return -1;
    }

    // Find the mid-value in the search space and compare it with the target

    int mid = (low + high) / 2;

    if (arr[mid] == key) {  // Base condition (target value is found)
        return mid;
    }
    
    if (arr[mid] > key) {
        // Discard all elements in the right search space
        return binarySearch(arr, low, mid - 1, key);
    } else {
        // Discard all elements in the left search space
        return binarySearch(arr, mid + 1, high, key);
    }
}
