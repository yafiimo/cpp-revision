
#include <iostream>
#include <string>
#include <vector>
#include "Array.hpp"
#include "SearchAlgorithms.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

template <typename T>
void ImplementSearch(T const *arr, int size, std::string name, string type)
{
    cout << "Which element should we search for in " << name << "?" << endl;
    T x;
    getline(cin, x);
    int index = (type == "linear") ? LinearSearch(x, arr, size) : BinarySearch(x, arr, size);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
}

int main()
{

    int arr1[10]{};
    ImplementSearch(arr1, 10, "arr1", "linear");

    std::vector<int> arr2{1, 2, 6, 10};
    ImplementSearch(arr2.data(), arr2.size(), "arr 2", "linear");

    Array<int> arr3(20);
    for (int i = 0; i < arr3.Size(); i++)
    {
        arr3[i] = i * 3;
    }
    ImplementSearch(arr3.Start(), arr3.Size(), "arr3", "binary");

    std::vector<int> arr4{1, 2, 6, 10, 20, 24, 50};
    ImplementSearch(arr4.data(), arr4.size(), "arr 4", "binary");

    std::vector<double> arr5{1.0, 2.5, 6.9, 10.0, 20.2, 26, 50.5};
    ImplementSearch(arr5.data(), arr5.size(), "arr 5", "binary");

    return 0;
}