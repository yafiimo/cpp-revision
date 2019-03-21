#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <utility>

class IndexOutOfBoundsException {};

template <typename T>
class Array
{
    private:
        T* m_ptr = nullptr;
        int m_size = 0;

        bool IsValidIndex(int index) const
        {
            return (index >= 0) && (index < m_size);
        }

      public:
        Array()=default;

        explicit Array(int size)
        {
            if(size != 0)
            {
                m_ptr = new T[size]{};
                m_size = size;
            }
        }

        ~Array()
        {
            delete[] m_ptr;
        }

        Array(Array const& source)
        {
            if(!source.IsEmpty())
            {
                m_size = source.m_size;
                m_ptr = new T[m_size]{};

                for(int i = 0; i < m_size; i++)
                {
                    m_ptr[i] = source.m_ptr[i];
                }
            }
        }

        Array(Array&& source)
        {
            m_ptr = source.m_ptr;
            m_size = source.m_size;

            source.m_ptr = nullptr;
            source.m_size = 0;
        }

        Array& operator=(Array const& source)
        {
            if(this != &source)
            {
                delete[] m_ptr;
                m_size = source.m_size;

                if(!IsEmpty())
                {
                    m_ptr = new T[m_size]{};
                    for(int i = 0; i < m_size; i++)
                    {
                        m_ptr[i] = source.m_ptr[i];
                    }
                }
                else
                {
                    m_ptr = nullptr;
                }
                
            }
            return *this;
        }

        T& operator[](int index)
        {
            if(!IsValidIndex(index))
            {
                throw IndexOutOfBoundsException{};
            }
            return m_ptr[index];
        }

        T operator[](int index) const
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
};

std::ostream &operator<<(std::ostream &os, Array<int> const &a)
{
    int a_size = a.Size();
    os << "[ ";
    for (int i = 0; i < a_size; i++)
    {
        os << a[i] << " ";
    }
    os << "]";
    return os;
}

std::ostream &operator<<(std::ostream &os, Array<std::string> const &a)
{
    int a_size = a.Size();
    os << "[ ";
    for (int i = 0; i < a_size; i++)
    {
        os << a[i] << " ";
    }
    os << "]";
    return os;
}

#endif

/*
    Notes:

    Notes taken from "Introduction to Data Structures and Algorithms in C++" 
    course by Giovanni Dicanio.

    1.1:
        Create members for array size and array contents
    1.2:
        Default constructor for initialising to default values
    1.3:
        Explicit constructor to disable implicit conversion and create array of correct size
    1.4:
        Methods for checking size and if array is empty
    1.4:
        Destructor for clearing memory
    1.5:
        Method to check for valid index (bounds checking)
    1.6:
        Operator for array indexing, read only and read and write, with error checking
    1.7
        Copy constructor for creating deep copies
    1.8:
        Copy assignment operator for creating deep copies and deleting old value. 
        Can be simplified using the copy and swap idiom.
    1.9:
        Move constructor using rvalue reference
    1.10:
        Template to allow for other types
    1.11:
        Add an overload for the ostream<< operator to print simple array items like strings and ints.
        Further overloads will be needed for complex array items.

*/