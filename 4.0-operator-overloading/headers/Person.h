#include <string>

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int age;

        // friend int operator+(int number, Person const& p);

    public:
        Person(std::string first, std::string last, int arbitrarynumber);
        ~Person();

        std::string getName() const;
        int getAge() const { return age; };

        int operator+(int number) const;
        int operator+(Person const& p) const;
};

int operator+(int number, Person const& p);