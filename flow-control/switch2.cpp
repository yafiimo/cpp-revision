#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum class OS
{
    MACOS = 1,
    LINUX = 2,
    WINDOWS = 3,
    OTHER = 4
};

class Person
{
    private:
        OS myOS;

    public:
        Person();
        OS getOS();
};

Person::Person()
{   
    int x;
    cout << "Which OS do you use? Enter 1 for MacOS, 2 for Linux, 3 for Windows, or 4 for anything else." << endl;
    cin >> x;

    if(x==1)
    {
        myOS = OS::MACOS;
    }
    else if(x==2)
    {
        myOS = OS::LINUX;
    }
    else if(x==3)
    {
        myOS = OS::WINDOWS;
    }
    else
    {
        myOS = OS::OTHER;
    }
}

OS Person::getOS()
{
    return myOS;
}

int main()
{
    /*
        In some cases, you may want the switch expression only available within the
        scope of the switch statement. In this case, with C++17 you can include an 
        initialiser before the switch expression, separated by a semicolon.
    */
    switch(Person Mo; Mo.getOS())
    {
        case OS::MACOS:
            cout << "You use MacOS?! Congratulations!" << endl;
            break;
        case OS::LINUX:
            cout << "You use Linux?! The best!" << endl;
            break;
        case OS::WINDOWS:
            cout << "You use Windows?! Sorry to hear that!." << endl;
            break;
        default:
            cout << "I'm sorry, I didn't quite get that." << endl;
    }

    return 0;
}