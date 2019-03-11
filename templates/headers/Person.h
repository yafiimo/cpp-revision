#pragma once
#include <string>

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int age;
    
    public:
        Person(std::string first, std::string last, int number) 
            : firstname(first), lastname(last), age(number) {};
        
        std::string getName() const { return firstname + " " + lastname; };
        int getAge() const { return age; };
};