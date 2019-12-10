#pragma once
#include <string>
#include <iostream>
#include "Resource.h"

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int age;

        Resource* pResource;


    public:
        Person(std::string first, std::string last, int number);
        Person(Person const& originalP);
        Person& operator=(Person const& originalP);
        ~Person();

        std::string GetName() const;
        int GetAge() const { return age; };

        void SetName(std::string first, std::string last) { firstname = first; lastname = last; };
        void SetAge(int number) { age = number; };

        void AddResource();
};