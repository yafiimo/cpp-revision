#include <string>
#include <array>
#include <vector>
#include <iostream>

int main()
{
    int array1[10];

    for(int i = 0; i < 10; i++)
    {
        array1[i] = i * 2;
    }
    
    for(int i = 0; i < 10; i++)
    {
        std::cout << array1[i] << " ";
    }
    
    std::cout << "\n" << std::endl;

    // Ranged based for loop
    for(int ai : array1)
    {
        std::cout << ai << " ";
    }

    // The array variable name is a pointer to the first element of the array
    // Will print a memory address.
    std::cout << "\n\nAddress of array1: " << array1 << std::endl;

    /* 
        Arrays store memory contiguosly. Since an int is 4 size in bytes,
        the memory location of each element is separated by 4 bytes.
        Can use pointer arithmetic to show this:
        For an int pointer ptr, ptr + 1 will move along 4 bytes;
    */

    std::cout << array1 << " " << (array1 + 1) << " " << array1 + 2 << std::endl;

    // Arrays stored on the stack also stores its size (in bytes) somewhere close in memory
    // Can use this to work out the number of elements in the array:

    int noOfElements = sizeof(array1) / sizeof(int);
    std::cout << "Number of elements (should be 10) = " << noOfElements << std::endl;

    // Arrays stored on the heap store its size in an indeterminate memory location
    // If you want to keep a variable for the size of a raw array, keep in mind that
    // the size of a raw array must be a compile time known constant, hence use static.

    static int const sizeOfArray2 = 12;
    int array2[sizeOfArray2];

    int noOfElements2 = sizeof(array2) / sizeof(int);
    std::cout << "Number of elements (should be 12) = " << noOfElements2 << std::endl;


    int* aptr = new int[10];

    // Will instead return the size of an integer pointer
    std::cout << "The size of the array in the heap in bytes (should be 40) = " << sizeof(aptr) << std::endl;
    std::cout << "8 is actually the size of the ptr pointing to the array in the heap!!" << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << ", sizeof(int*) = " << sizeof(int*) << std::endl;

    // Just to be safe
    delete[] aptr;
    aptr = nullptr;

    // Create an array using the standard template
    std::array<int, 5> myStandardArray;
    int arraySize = myStandardArray.size();

    for(int i = 0; i < arraySize; i++)
    {
        myStandardArray[i] = i * 10;
    }

    for(int vi : myStandardArray)
    {
        std::cout << vi << " ";
    }
    std::cout << std::endl;

    /*
        Vectors are like dynamic arrays (can grow in size). When the inintial size it is allocated 
        is exceeded its contents are copied into a bigger new array in memory and the original is 
        cleaned up.

        A common design choice is whether to store actual objects in a vector or pointers to them.

        * Storing pointers has the advantage that when the vector needs to resize, whole object do
          not need to be copied over to the new vector, rather the memory address to the objects
          are copied over, although you can get around this by moving instead of copying.
        * Storing objects has the advantage that the memory will be stored inline (contiguosly),
          which is optimal for iteration and generally accessing them.
    */

    struct Vertex
    {
        int x, y, z;
    };

    // Can instantiate without declaring size;
    std::vector<int> intVector;
    std::vector<Vertex> v1;

    // To add to a vector
    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);

    v1.push_back({ 1, 2, 3 });
    v1.push_back({ 4, 5, 6 });
    v1.push_back({ 7, 8, 9 });

    // Loop over the vertex. When using range based, should pass by reference if
    // iterating over objects.

    for(Vertex const& vi : v1)
    {
        std::cout << "{ " << vi.x << ", " << vi.y << ", " << vi.z << " }" << std::endl;
    }

    // Vectors have size() method
    for(int i = 0; i < (int)intVector.size(); i++)
    {
        std::cout << intVector[i] << " ";
    }

    // To clear a vector
    intVector.clear();
    std::cout << "\nAfter clearing intVector, it now has size " << intVector.size() << std::endl;

    /* 
        Can clear a vector with an iterator:

        v1.erase(first, last);
    */

    v1.erase(v1.begin() + 1, v1.end()); // should be left with just first element;

    std::cout << "After removing the 2nd and 3rd elements, v1 now has size " << v1.size() << "\nv1 = ";

    for (Vertex const &vi : v1)
    {
        std::cout << "{ " << vi.x << ", " << vi.y << ", " << vi.z << " }" << std::endl;
    }

    return 0;
}