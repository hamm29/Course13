
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
	   cout << "\nYes, list is empty.\n";
    else
	   cout << "\nNo, List is not Empty.\n";


    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    
    clsDblLinkedList <int>::Node* N1;

    N1 = MydblLinkedList.GetNode(2);

    if (N1 != NULL)
    {
	   cout << "\nNode Value is: " << N1->value;
    }
    else
	   cout << "\nNode was not found.\n";

    cout << "\nItem(2) Value is: " << MydblLinkedList.GetItem(2);


}
