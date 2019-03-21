#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

class IndexOutOfBoundsException {};

class IntArray
{
    private:
        int m_size = 0;
        int *m_ptr = nullptr;

    public:
        IntArray() = default;
        IntArray(IntArray const&) = delete;                 // 1.6

        explicit IntArray(int size)                         // 1.7
        {
            m_ptr = new int[size]{};                        // 1.1
            m_size = size;                                  // 1.2
        }

        ~IntArray()                                         // 1.3
        {
            delete[] m_ptr;
        }

        int &operator[](int index)                          // 1.4
        {
            if (!IsValidIndex(index)) 
            {
                throw IndexOutOfBoundsException{};
            }
            return m_ptr[index];
        }

        int operator[](int index) const                     // 1.5
        {
            if (!IsValidIndex(index)) 
            {
                throw IndexOutOfBoundsException{};
            }
            return m_ptr[index];
        }

        int Size() const
        {
            return m_size;
        }

        bool IsEmpty() const 
        {
            return m_size == 0;
        }

        bool IsValidIndex(int index) const 
        {
            return (index >= 0) && (index < m_size);
        }
};

/*
    Notes:*

    1.1:
        Allocate array memory block of specified size from the heap.
        {} for zero init (Safe init) ie no garbage
    1.2: 
        store size of array
    1.3:
        Free alocated memory
    1.4:
        Return by reference so that elements are read and write
    1.5:
        Return by value so that elements are read only
    1.6:
        Prevent copy constructor
    1.7
        The explicit keyword prevents implicit conversion such as:

        IntArray a5 = 1;

        This will prevent initialising an array as above, as this
        not semantic to arrays.

        It will however allow explicit casts as below:

        IntArray a1(1);
        IntArray a2 = IntArray(5);
        IntArray* pA = new IntArray(1);
        IntArray a3 = (IntArray)3;
        IntArray a4 = static_cast<IntArray>(7);
*/