#include "Resource.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/* 
    Manual memory management is difficult:
    * pointers created using `new` must eventually be deleted, otherwise can cause memory leaks
    * copies must be handled correctly
    * pointer to something created in the heap can be lost before getting a chance to delete
    * possibility to accidently delete from pointer more than once if it has a copy
*/



int main()
{
    {
        // Local resource destructs once it goes out of scope
        Resource r1("Notes");
        cout << "Resource name is " << r1.GetName() << endl;
    }

    Resource* pResource = new Resource("On the heap");
    // Resource must be deleted before pResource goes out of scope
    cout << "Resource name is " << pResource->GetName() << endl;
    cout << "Resource name is " << (*pResource).GetName() << endl;

    delete pResource;
    pResource = nullptr;

    /*
        * cannot use pResource pointer after it's deleted in memory
        * deleting from memory after already deleting resource will cause an error

            string rName = pResource->GetName();
            delete pResource;
    */

    return 0;
}