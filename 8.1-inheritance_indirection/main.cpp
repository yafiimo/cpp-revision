#include <iostream>
#include <string>
#include <memory>
#include "Person.h"
#include "Tweeter.h"

using std::cout;
using std::endl;
using std::string;
using std::shared_ptr;
using std::make_shared;

void TakePerson(Person const& p)
{
    /*
        If a Tweeter is passed into this function, since the function
        takes a Person reference, unless members functions are marked
        as virtual, base class functions will be used.

        Also slicing occurs when copying an inherited class into,
        a base class object, meaning that members from the Tweeter object
        will be lost, including function implementations like GetName(),
        unless the object is passed in as a pointer or reference.
    */
    cout << "Hi, I am " << p.GetName() << endl;
}

int main()
{
    TakePerson(Tweeter("hussein", "yafii", 25, "@huss"));

    Tweeter Mo("Mo", "Yafii", 25, "@yafiimo");
    Tweeter& rTweeterMo = Mo;
    Tweeter* pTweeterMo = &Mo;
    Person& rPersonMo = Mo;
    Person* pPersonMo = &Mo;
    Person copyMo = Mo;

    /*
        When GetName() is marked as virtual it will call the Tweeter version
        of GetName() for all calls below, otherwise it will only call
        the Tweeter version with pointers/references instantiated with a Tweeter,
        instead calling the base class (Person) version.
    */

    cout << "Mo's name is " << Mo.GetName() << endl;
    cout << "Mo's name is " << rTweeterMo.GetName() << endl;
    cout << "Mo's name is " << pTweeterMo->GetName() << endl;
    cout << "Mo's name is " << rPersonMo.GetName() << endl;
    cout << "Mo's name is " << pPersonMo->GetName() << endl;

    // The copy will get the base class GetName() due to slicing
    cout << "Mo's name is " << copyMo.GetName() << endl;

    /*
        Deleting an object of polymorphic class type 'Person' which has a
        non-virtual destructor, will cause the inherited class destructor
        not to run, which may cause a memory leak.
    */

    Person *pJohn = new Tweeter("John", "Doe", 25, "@johndoe");
    cout << "John Doe's name is " << pJohn->GetName() << endl;
    delete pJohn;

    // Again, unless GetName() is marked as virtual, base class function
    // will run for objects initialised with the base class
    shared_ptr<Person> pAlu = make_shared<Tweeter>("Alu", "Yafii", 23, "@aluyafii");
    cout << "Alu's name is " << pAlu->GetName() << endl;

    // Can't copy base class object into an inherited class
    Person Jane("Jane", "Doe", 32);
    // Mo = Jane;

    // But can copy inherited class object into base class, though
    // slicing will occur
    Jane = Mo;


    return 0;
}
