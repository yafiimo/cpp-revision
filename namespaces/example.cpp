#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// using namespace std;

/* 
    Can use "using namespace std" to include all classes from std namespace, although
    this is generally not considered a good idea.
*/

int main()
{
    cout << "Hello world. This is just a boring example" << endl;
    string example2 = "Hello world. This is another example.";
    cout << example2 << endl;

    return 0;
}

/*
    Avoid "using" statements in header files, as this may cause confusion with other
    people using your header files. Instead fully write out classes with their namespace.
    e.g. std::string
*/