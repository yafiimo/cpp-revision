#include <array>
#include <iostream>
#include <memory>

// Using smart pointer for internal array so memory is managed automatically;
// Alternatively can use Array Template defined in headers

// Generic Stack Error
class StackException {};

template <typename T>
class Stack
{
    private:
        int m_top;
        int m_max_size;
        std::unique_ptr<T[]> m_ptr;

        friend std::ostream& operator<<(std::ostream& os, Stack const& stack)
        {   
            if(stack.IsEmpty())
            {
                os << "[*** EMPTY STACK ***]\n\n";
                return os;
            }
            os << "[STACK] -> [ ";

            int start = stack.Size() - 1;
            for(int i = start; i >= 0; i--)
            {
                os << stack.m_ptr[i] << " ";
            }
            os << "]";
            return os;
        }


    public:
        // Initialise stack with maximum size
        explicit Stack(int maxSize) : m_top(-1) 
        {
            if(maxSize < 1)
                throw StackException{};

            m_max_size = maxSize;
            m_ptr = std::make_unique<T[]>(maxSize);
        }

        // Add an element to the top of the stack
        void Push(T const& element)
        {
            if(!(Size() < m_max_size))
                throw StackException{};

            m_top++;
            m_ptr[m_top] = element;
        }

        // Remove top element
        T Pop()
        {
            if(IsEmpty())
                throw StackException{};

            T element = m_ptr[m_top];
            m_top--;
            return element;
        }

        // Return read only top element
        T const& Top() const
        {
            if(IsEmpty())
                throw StackException{};

            return m_ptr[m_top];
        }

        // Return read and write top element
        T& Top()
        {
            if(IsEmpty())
                throw StackException{};

            return m_ptr[m_top];
        }

        // Return current size of stack
        int Size() const
        {
            return m_top + 1;
        }

        bool IsEmpty() const
        {
            return Size() == 0;
        }

        bool IsFull() const
        {
            return Size() == m_max_size;
        }

        int MaxSize() const
        {
            return m_max_size;
        }

        // Clear the stack. May need more complex implementation
        // for complex data types
        void Clear()
        {
            m_top = -1;
        }
};