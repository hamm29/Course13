
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(1);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(5);
    
    MydblLinkedList.PrintList();

    clsDblLinkedList <int>::Node* N1 = MydblLinkedList.Find(3);

    if (N1 != NULL)
	   cout << "\nNode is Found :-)\n";
    else
	   cout << "\nNose was not Found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nList after adding 500 after 3: \n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(6);
    cout << "\nList after adding 6 at end: \n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteNode(N1);
    cout << "\nList after deleting Node 3: \n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();

}
