#pragma once
#include <string>

class Person
{
    protected:
        std::string firstname;
        std::string lastname;
        int age;

    public:
        Person(std::string first, std::string last, int number);
        virtual ~Person();

        virtual std::string GetName() const;
        int GetAge() const;

        void SetAge(int number);
        void SetName(std::string first, std::string last);
};