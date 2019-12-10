#pragma once

#include "Person.h"
#include "BankAccount.h"

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
    between T and T (Person and Person) since the accumulator's += operator operates
    T + T, and returns type T. This is not present on the person class, hence a
    template specialisation is needed.
*/

template <>
class Accumulator<Person>
{
    private:
        int total;

    public:
        Accumulator(int start) : total(start) {};
        int getTotal() const { return total; };
        int operator+=(Person const& p) { return total = total + p.getAge(); };
};

/*
    The BankAccount class has a + operator operating on (T and T) BankAccount and
    BankAccount, however, it returns an integer, which is different to the template
    class the accumulator expects to return, hence a template specialisation is 
    needed to handle this case.
*/

template <>
class Accumulator<BankAccount>
{
    private:
        int total;
    
    public:
        Accumulator(int start) : total(start) {};
        int getTotal() const { return total; };
        int operator+=(BankAccount const& b) { return total = total + b.getBalance(); };
};
