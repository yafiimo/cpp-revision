#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() 
{
    /*
        Old style Enums declared using just the enum keyword must have unique names,
        e.g. in the examples below, NotFound could only be used in one of the Enums.
        Old style enums also don't use the scope resolution operator to access, 
        rather, just the enum value.
    */

    enum class NetworkError 
    {
        Ok = 200,
        NotFound = 404,
        Unauthorised = 401,
        Forbidden = 403,
        InternalServerError = 500,
    };

    enum class AnotherError 
    {
        NotFound,
        Found
    };

    /*
        Enums will automatically be given values by the compiler if not specified,
        usually ascending from 0
    */

    NetworkError e1 = NetworkError::NotFound;
    AnotherError e2 = AnotherError::NotFound;

    if(e2 == AnotherError::NotFound) 
    {
        cout << "e2 is NotFound" << endl;
    } else 
    {
        cout << "e2 is Found" << endl;
    }

    return 0;
}