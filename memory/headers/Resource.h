#pragma once
#include <string>
#include <iostream>

class Resource
{
    private:
        std::string name;

    public:
        Resource(std::string n) : name(n) 
        {
            std::cout << "Creating resource: " << GetName() << std::endl;
        };

        ~Resource() 
        {
            std::cout << "Destructing resource: " << GetName() << std::endl;
        };

        std::string GetName() const { return name; };
        void SetName(std::string n) { name = n; };
};