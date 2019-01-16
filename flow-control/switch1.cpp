#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number, 0 or negative to quit." << endl;
    cin >> x;

    while(x>0)
    {
        switch(x)
        {
            // Each case must either be a number, or an enum;

            case 1:
                cout << "You entered 1." << endl;
                break;
            case 2:
            case 3:
                cout << "You entered 2 or 3." << endl;
                break;
            case 4:
                cout << "You entered 4." << endl;
                break;
            case 5:
                cout << "You entered 5." << endl;
                break;
            default:
                cout << "You entered a number larger than 5." << endl;
        }

        cout << "Enter a number, 0 or negative to quit." << endl;
        cin >> x;
    }

    return 0;
}