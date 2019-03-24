#include <array>
#include <iostream>
#include <memory>
#include "Stack.hpp"

using std::cout;
using std::endl;

int main()
{
    try {

        Stack<int> MyStack(10);
        MyStack.Push(5);

        cout << "Maximum Stack Size: " << MyStack.MaxSize() << endl;
        cout << "Current Stack Size: " << MyStack.Size() << endl;
        MyStack.Pop();
        cout << "Current Stack Size: " << MyStack.Size() << endl;
        cout << MyStack << endl;

        for(int i = 0; i < 30; i++)
        {
            if(MyStack.IsFull()) break;
            MyStack.Push(i * 5);
        }
        cout << "Repopulated Stack." << endl;

        cout << MyStack << endl;
        
        for(int i = MyStack.Size() - 1 ; i >= 0; i--)
        {
            int topElement = MyStack.Pop();
            cout << "Top Element --> " << topElement << endl;
        }
        cout << MyStack << endl;

        for(int i = 0; i < 30; i++)
        {
            if(MyStack.IsFull()) break;
            MyStack.Push(i * 3);
        }

        cout << "Repopulated Stack." << endl;

        cout << "Top Element --> " << MyStack.Top() << endl;
        cout << MyStack << endl;

        // Bind a read-only version of Top()
        int topElement = MyStack.Top();
        topElement = 100;
        cout << "Top Element: " << topElement << "; MyStack.Top(): " << MyStack.Top() << endl;

        // // Bind a read-and-write version of Top()
        int& topElementModifiable = MyStack.Top();
        topElementModifiable = 100;
        cout << "Top Element: " << topElementModifiable << "; MyStack.Top(): " << MyStack.Top() << endl;

        cout << "Clearing Stack..." << endl;
        MyStack.Clear();
        cout << MyStack << endl;
    }
        catch(StackException &e)
    {
        cout << "\n *** ERROR: StackException \n" << endl;
    }

    return 0;
}