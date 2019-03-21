#pragma once
#include <string>
#include "Person.h"

class Tweeter : public Person
{


    public:
      std::string twitterhandle;

      Tweeter(std::string first, std::string last,
              int number, std::string handle);

      /*
            If a Tweeter is object is made by reference to a Person pointer on the heap
            and the destructor isn't marked as virtual, this destructor may not run. A
            good rule is to always have the destructor as virtual if you already have
            other virtual functions.
       */

      ~Tweeter();
      std::string GetName() const;

      void Tweet(std::string t) const;
};
