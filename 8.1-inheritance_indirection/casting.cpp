#include <iostream>
#include <string>
#include <memory>
#include "Person.h"
#include "Tweeter.h"
#include "Resource.h"

using std::cout;
using std::cin;
using std::endl;
using std::make_shared;
using std::shared_ptr;
using std::string;

/*
    Casting pointers may be useful in a situation where you want to 
    use a member function from an inherited class that isn't inherited
    from the parent, but the pointer is of the base class (for use of
    polymorphism).
*/

int main()
{
    Tweeter Mo("Mo", "Yafii", 25, "@yafiimo");
    Person* pMo = &Mo;

    /*
        Should not use C style cast
        Tweeter* ptMo = (Tweeter*)pMo;
    */
    
    // Below line will not work as pMo is of type Person*, which does not include Tweet()
    // pMo->Tweet(myTweet);

    // Use static cast when you can be sure of the type pMo is pointing to
    Tweeter* ptMo = static_cast<Tweeter*>(pMo);

    // static cast will warn you about invalid conversion at compile time
    // Resource Book1("Understanding C++ Volume 1");
    // Tweeter *ptMo = static_cast<Tweeter *>(&Book1);

    string myTweet;
    cout << "What's on your mind?" << endl;
    getline(cin, myTweet);

    // Now, Tweet() can be used
    ptMo->Tweet(myTweet);

    Resource Book("Understanding C++ Volume 2");
    Person p2("Jane", "Doe", 25);
    Tweeter* pt2;

    string answer;
    cout << "Use resource or tweeter? Enter r for resource" << endl;
    getline(cin, answer);

    /*
        Dynamic casts are figured out at run time. If they are successful
        they return the pointer, else will return the nullptr. Can only cast
        polymorphic class types. Compiler will recognise any class with
        virtual functions as polymorphic.
    */

    if(answer == "r")
    {
        pt2 = dynamic_cast<Tweeter*>(&Book);
        cout << "Casting &Book to Tweeter*" << endl;
    }
    else
    {
        pt2 = dynamic_cast<Tweeter*>(ptMo);
        cout << "Casting ptMo to Tweeter*" << endl;
    }

    if(pt2)
    {
        cout << "Successfully casted pMo to Tweeter*" << endl;
        ptMo->Tweet(myTweet);
    }
    else
    {
        cout << "casting Book of type Resource* to Tweeter* not successful" << endl;
    }

    return 0;
}