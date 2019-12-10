#include <iostream>
#include <string>

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int age;

    public:
        Person(std::string first, std::string last, int number);
        Person()=default;
        std::string getName();
        int getAge();
};

Person::Person(std::string first, std::string last, int number) :
    firstname(first), lastname(last), age(number)
{

}

std::string Person::getName()
{
    return firstname + " " + lastname;
}

int Person::getAge()
{
    return age;
}

int main()
{
    Person p1("Mo", "Yafii", 25);
    Person p2("Hussein", "Yafii", 20);
    Person p3;

    std::cout << "p1:" <<std::endl << "Name:\t" << p1.getName() << std::endl << "Age:\t" << p1.getAge() << std::endl;
    std::cout << "p2:" <<std::endl << "Name:\t" << p2.getName() << std::endl << "Age:\t" << p2.getAge() << std::endl;
    std::cout << "p3:" <<std::endl << "Name:\t" << p3.getName() << std::endl << "Age:\t" << p3.getAge() << std::endl;
    return 0;
}