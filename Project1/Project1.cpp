
#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"

using namespace std;

int main()
{
    clsMyQueue <int> myQueue;

    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    cout << "\nQueue: \n";
    myQueue.Print();

    cout << "\nQueue Size: " << myQueue.Size();
    cout << "\nQueue front: " << myQueue.front();
    cout << "\nQueue back: " << myQueue.back();

    myQueue.pop();

    cout << "\n\nQueue after pop(): \n";
    myQueue.Print();


    cout << "\nItem(2) : " << myQueue.GetItem(2);

    myQueue.Revers();
    cout << "\n\nQueue After Reverse() : ";
    myQueue.Print();

    myQueue.UpdateItem(2, 600);
    cout << "\nQueue After Udpating Item(2) to 600 : ";
    myQueue.Print();

    myQueue.InsertAfter(2, 800);
    cout << "\nQueue After Inserting 800 after Item(2) : ";
    myQueue.Print();

    myQueue.InsertAtFront(1000);
    cout << "\nQueue After Inserting 1000 at front : ";
    myQueue.Print();

    myQueue.InsertAtBack(2000);
    cout << "\nQueue After Inserting 2000 at Back : ";
    myQueue.Print();

    myQueue.Clear();
    cout << "\nQueue After Clear() : ";
    myQueue.Print();

}
