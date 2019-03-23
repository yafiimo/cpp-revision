#include <iostream>
#include <string>
#include "Array.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{

    try
    {
        Array<int> a1(10);
        int sizeOfArr = a1.Size();

        for (int i = 0; i < sizeOfArr; i++)
        {
            a1[i] = i * 2;
        }

        cout << "Printing a1: " << a1 << endl;

        cout << "Value at a1[3] = " << a1[3] << endl;

        Array<int> a2 = a1;
        Array<int> a3;
        a3 = a1;
        cout << a3 << endl;

        Array<std::string> a4(2);
        a4[0] = "Hello";
        a4[1] = "World";
        cout << a4 << endl;

        Array<double> a5(10);
        for(int i = 0; i < 10; i++)
        {
            a5[i] = static_cast<double>(i) / 4;
        }
        cout << a5 << endl;


    }
    catch (IndexOutOfBoundsException &e)
    {
        cout << "\n *** ERROR: Index out of bounds! \n" << endl;
    }

    return 0;
}