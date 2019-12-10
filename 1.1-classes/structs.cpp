#include <iostream>
#include <string>

/*
    Structs are useful for holding data together. They are very similar to classes,
    except that by default, their members are public, unlike in a class.
*/

struct Person {
    std::string name;
    int age;

    Person(std::string n, int a);
    Person();
};

Person::Person(std::string n, int a) : name(n), age(a)
{

}

Person::Person() : name("John Doe"), age(25)
{

}


int main() {
    Person p1("Jane Doe", 22);
    Person p2;

    // Since struct members are public by default, they can be accessed directly;
    std::cout << "p1s name is " << p1.name << std::endl;
    std::cout << "p2s name is " << p2.name << std::endl;

    return 0;
}