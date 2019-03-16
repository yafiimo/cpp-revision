#include <iostream>
#include <string>
#include <memory>
#include "SmartPerson.h"
#include "Resource.h"

using std::cout;
using std::endl;
using std::string;

/*
    Smart pointers eliminate the need to write complicated classes for manually
    managing your memory, with the use of shared_ptr and unique_ptr. They either:

    * prevent copying of pointer members (unique_ptr)
    * or shallow copy with reference count:
        * copy increments
        * destructor decrements
        * delete at 0
    
    They clean up memory after themselves, and also overload * and -> operators
    so that the template object can be used similarly to a regular pointer.

    A weak_ptr lets you look at the memory for a shared_ptr and copy it without
    incrementing the count, however it must be managed manually.

    Unique_ptr cannot be copied (use std::move)
    Last destructor related to a shared_ptr clears up the memory
*/

void printPersonAge(SmartPerson p)
{
    cout << p.GetName() << "'s age is " << p.GetAge() << endl;
    return;
}

int main()
{
    // Run through debugger to evaluate shared_ptr managing itself
    std::weak_ptr<Resource> weakpResource;

    {
        SmartPerson Mo("Mo", "Yafii", 25);
        Mo.AddResource();
        Mo.AddResource();

        SmartPerson p2 = Mo;
        SmartPerson p3(Mo);

        p3 = p3;
        p3 = p2;

        // creates a weak pointer to pResource: does not increment
        weakpResource = Mo.GetResourcePointer();

        /* 
            Following line would delete referenced object (Resource) which would 
            cause ACCESS VIOLATION if object is accessed later in program.

            weakpResorce.reset();
        */

        /* 
            Following ensures the pointer hasn't expired and creates a shared_ptr out of 
            weakpResource. Alternatively, can check using weakpResource.expired() then assign
            with weakpResource.lock(), though this could cause problems in multithreaded 
            programs if the weak_ptr expires between the time it is checked for expiration 
            and when the lock is acquired on it.
        */
        if (auto sp = weakpResource.lock())
        {
            cout << "No of refs: " << weakpResource.use_count() << endl;

            // A weak pointer can't access the referenced object without
            // converting it to a strong pointer using `.lock()`
            cout << "Referenced object is " << sp->GetName() << endl;
        }

        printPersonAge(Mo);
        p2.AddResource();
    }

    cout << "Shared pointer should have expired now. Count = " << weakpResource.use_count() << endl;
    cout << "Has it expired then ? " << weakpResource.expired() << endl;

    return 0;
}
