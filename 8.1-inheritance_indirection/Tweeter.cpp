#include <string>
#include <iostream>
#include "Tweeter.h"

Tweeter::Tweeter(std::string first, std::string last, int number, 
    std::string handle) : Person(first, last, number), twitterhandle(handle)
{
    std::cout << "Contructing " << twitterhandle << std::endl;
}

Tweeter::~Tweeter()
{
    std::cout << "Destructing " << GetName() << std::endl;
}

std::string Tweeter::GetName() const
{
    // Can't access firstname and lastname from parent unless they 
    // are marked as protected.

    return twitterhandle + ": " + Person::GetName();
}

void Tweeter::Tweet(std::string t) const
{
    std::cout << t << std::endl;
}