#include "Person.h"

template <class T>
class Accumulator
{
    private:
        T total;

    public:
        Accumulator(T initial) : total(initial){};
        T getTotal() const { return total; };
        T operator+=(T const &value) { return total = total + value; };
};

/*
    For the Person class to be able to use the accumulator, it needs a + operator
    between T and T (Person and Person), as the accumulator's += operator operates
    T + T, and returns type T. The person class has a + operator operating on 
    Person and Person, however, it returns an integer, which is different to the
    template class the accumulator expects to return, hence a specialisation is
    needed to handle this case.
*/

template <>
class Accumulator<Person>
{
    private:
        int total;

    public:
        Accumulator(Person p) : total(p.getAge()) {};
        int getTotal() const { return total; };
        int operator+=(Person p) { return total = total + p.getAge(); };
};