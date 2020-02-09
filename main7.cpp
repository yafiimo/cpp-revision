#include <string>
#include <iostream>
#include <vector>

struct Person 
{
  std::string first_name;
  std::string surname;
};


class PersonList 
{
  std::vector<Person> people;

  public:
    PersonList()=default;
    PersonList(const std::vector<Person>& p) : people(p) {}
    PersonList(const Person &p)
    {
      people.push_back(p);
    }

    ~PersonList()
    {
      std::cout << std::endl;
    }

    const std::vector<Person>& getPeople() const 
    {
      return people;
    }

    void printStudentNames() const 
    {
      std::cout << "Students: \n";

      for(int i = 0; i < people.size(); i++) 
      {
        std::cout << people[i].first_name + " " + people[i].surname << '\n';
      }

      std::cout << '\n';
    }

};


int main() 
{
  Person p1{"Mo", "Yafii"};
  Person p2{"John", "Doe"};
  Person p3{"Jane", "Doe"};

  std::vector<Person> students{p1, p2};

  PersonList class1{students};
  PersonList class2{p3};

  class1.printStudentNames();
  class2.printStudentNames();

}