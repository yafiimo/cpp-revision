#include <iostream>
#include <string>

class Person
{
  private:
    std::string firstname;
    std::string lastname;
    int id;

  public:
    Person(std::string first, std::string last, int number);
    Person();
    ~Person();
    int getId();
    std::string getName();
};

Person::Person(std::string first, std::string last, int number)
    : firstname(first), lastname(last), id(number)
{
    std::cout << "Constructing " << getName() << std::endl;
}

Person::Person() : id(12502)
{
    std::cout << "Constructing no name..." << getId() << std::endl;
    std::cout << "My id is " << getId() << std::endl;
}

Person::~Person()
{
    std::cout << "Destructing " << getId() <<std::endl;
}

std::string Person::getName()
{
    return firstname + " " + lastname;
}

int Person::getId()
{
    return id;
}


int main()
{
    Person p1("Mo", "Yafii", 190990);
    Person p2("Hussein", "Yafii", 9769);

    {
        Person p3;
    }

    std::cout << "After innermost block" << std::endl;

    return 0;
}