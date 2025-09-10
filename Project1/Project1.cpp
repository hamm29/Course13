
#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsDynamicArray.h"


using namespace std;

int main()
{

    clsDynamicArray <int> MyArray(5);

    MyArray.SetItem(0, 10);
    MyArray.SetItem(1, 20);
    MyArray.SetItem(2, 30);
    MyArray.SetItem(3, 40);
    MyArray.SetItem(4, 50);

   
    cout << "\n\nMy Array: \n"; 
    MyArray.PrintList();
    cout << "Array Size: " << MyArray.Size();

   
    
    MyArray.InsertAtBeginning(400);
    cout << "\n\nArray Size: " << MyArray.Size();
    cout << "\nArray Items after adding 400 at Beginning: \n";
    MyArray.PrintList();

    MyArray.InsertBefore(2, 500);
    cout << "\n\nArray Size: " << MyArray.Size();
    cout << "\nArray Items after insert 500 before index 2: \n";
    MyArray.PrintList();

    MyArray.InsertAfter(2, 600);
    cout << "\n\nArray Size: " << MyArray.Size();
    cout << "\nArray Items after insert 600 after index 2: \n";
    MyArray.PrintList();

    MyArray.InsertAtEnd(800);
    cout << "\n\nArray Size: " << MyArray.Size();
    cout << "\nArray Items after adding 800 at End: \n";
    MyArray.PrintList();


    system("pause>0");
}
