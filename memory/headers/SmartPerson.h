#pragma once
#include <string>
#include <iostream>
#include <memory>
#include "Resource.h"

class SmartPerson
{
    private:
        std::string firstname;
        std::string lastname;
        int age;

        std::shared_ptr<Resource> pResource;


    public:
        SmartPerson(std::string first, std::string last, int number);
        ~SmartPerson();

        std::string GetName() const;
        int GetAge() const { return age; };
        std::string GetResourceName() const { return pResource ? pResource->GetName() : ""; };
        std::shared_ptr<Resource> GetResourcePointer() const { return pResource; };

        void SetName(std::string first, std::string last) { firstname = first; lastname = last; };
        void SetAge(int number) { age = number; };
        void AddResource();
};