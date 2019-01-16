#include <string>

class Person
{
    /* 
        By default, if private or public is not specified in a class,
        the members will be private. In a struct, they would be public.
    */

    private:
        std::string firstname;
        std::string lastname;
        int age;

    public:
        Person(std::string first, std::string last, int arbitraryNumber);
        Person()=default; 
        // default constructor is a constructor that doesn't take any parameters
        // Removes the need to define constructor in Person.cpp

    std::string getName();
};