#pragma once

template <typename T>
bool replace(T* arr, int size, T value, T replacement)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            arr[i] = replacement;
            return true;
        }
    }

    return false;
}
