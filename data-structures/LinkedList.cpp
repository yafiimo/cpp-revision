#include <iostream>
#include "LinkedList.hpp"

using std::cout;
using std::endl;

int main()
{
    LinkedList<int> list1;
    LinkedList<int> list2;

    cout << "Inserting items to list1" << endl;
    list1.InsertHead(11);
    list1.InsertHead(55);
    list1.InsertHead(33);
    list1.InsertHead(22);
    list1.InsertHead(88);
    list1.InsertHead(77);


    cout << "Current List: " << list1 << endl;
    cout << "Inserting value 99 after 33" << endl;
    auto position1 = list1.Find(33);
    list1.InsertAfter(position1, 99);
    cout << "Current List after inserting 99: " << list1 << endl;
    
    cout << "Removing Head" << endl;
    list1.RemoveHead();
    cout << "Current List after removing head: " << list1 << endl;

    cout << "Removing After 22" << endl;
    auto position2 = list1.Find(22);
    list1.RemoveAfter(position2);
    cout << "Current List after removing value 22 after 22: " << list1 << endl;

    list2.InsertHead(5);
    list2.InsertHead(55);
    list2.InsertHead(555);

    /*
        Cannot insert into position 2 as it is part of list1
        list2.InsertAfter(position2, 5);
    */

    return 0;
}