#pragma once

#include <iostream>
#include <string>

int constexpr ElNotFound = -1;

template <typename T>
int LinearSearch(T element, T const *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return ElNotFound;
}

template <typename T>
int BinarySearch(T element, T const *arr, int size)
{
    int left = 0;
    int right = size - 1;
    int middle = (left + right) / 2;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] == element)
        {
            return middle;
        }
        else if (arr[middle] < element)
        {
            left = middle + 1;
        }
        else if (arr[middle] > element)
        {
            right = middle - 1;
        }
    }

    return ElNotFound;
}