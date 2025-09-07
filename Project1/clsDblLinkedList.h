#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDblLinkedList
{
protected:
    int _Size = 0;
public:

    class Node
    {
    public:
	   T value;
	   Node* prev;
	   Node* next;
    };

    Node* head = NULL;

    void InsertAtBeginning(T value)
    {
	   Node* newNode= new Node();
	   newNode->value = value;
	   newNode->next = head;
	   newNode->prev = NULL;

	   if (head != NULL)
	   {
		  head->prev = newNode;
	   }
	   head = newNode;
	   _Size++;
    }

    void PrintList()
    {
	   Node* current = head;
	   while (current != NULL)
	   {
		  cout << current->value << " ";
		  current = current->next;
	   }
	   cout << "\n";
    }

    Node* Find(T value)
    {
	   if (head == NULL)
		  return NULL;

	   /*if (head != NULL && head->next == NULL)
	   {
		  return head;
	   }*/

	   Node* current = head;
	   while (current != NULL)
	   {
		  if (current->value == value)
			 return current;
		  current = current->next;
	   }
	   return NULL;
    }

    void InsertAfter(Node* current, T value) 
    {
	   Node* newNode = new Node();
	   newNode->value = value;
	   newNode->prev = current;
	   newNode->next = current->next;
	   
	   if (current->next != NULL)
	   {
		  current->next->prev = newNode;
	   }
	   current->next = newNode;
	   _Size++;
    }

    bool InsertAfter(int Index, T value)
    {
	   Node* N1 = GetNode(Index);
	   if (N1 != NULL)
	   {
		  InsertAfter(N1, value);
		  return true;
	   }
	   else
		  return false;
    }

    void InsertAtEnd(T value)
    {
	   Node* newNode = new Node();
	   newNode->value = value;
	   newNode->next = NULL;
	   if (head == NULL)
	   {
		  newNode->prev = NULL;
		  head = newNode;
	   }
	   else
	   {
		  Node* current = head;
		  while (current->next != NULL)
		  {
			 current = current->next;
		  }
		  current->next = newNode;
		  newNode->prev = current;
	   }
	   _Size++;
    }

    void DeleteNode(Node*& NodeToDelete)
    {
	   Node* current = head, * prev = head;

	   if (head == NULL && NodeToDelete == NULL)
		  return;

	   if (head == NodeToDelete) {
		  head = NodeToDelete->next;
	   }
	   if (NodeToDelete->next != NULL)
	   {
		  NodeToDelete->next->prev = NodeToDelete->prev;
	   }
	   if (NodeToDelete->prev != NULL)
	   {
		  NodeToDelete->prev->next = NodeToDelete->next;
	   }
	   delete NodeToDelete;
	   _Size--;
    }                                                                

    void DeleteFirstNode()
    {
	   if (head == NULL)
	   {
		  return;
	   }

	   head = head->next;
	   if (head != NULL)
	   {
		  head->prev = NULL;
	   }
	   _Size--;
    }

    void DeleteLastNode()
    {
	   if (head == NULL)
		  return;

	   if (head->next == NULL)
	   {
		  delete head;
		  head = NULL;
		  return;
	   }

	   Node* current = head;
	   while (current->next->next != NULL)
	   {
		  current = current->next;
	   }
	   Node* temp = current->next;
	   current->next = NULL;
	   delete temp;
	   _Size--;
    }

    int Size()
    {
	   return _Size;
    }

    bool IsEmpty()
    {
	   return (_Size == 0 ? true : false);
    }

    void Clear()
    {
	   while (_Size > 0)
	   {
		  DeleteFirstNode();
	   }
    }

    void Reverse()
    {
	   Node* current = head;
	   Node* temp = nullptr;
	   while (current != nullptr)
	   {
		  temp = current->prev;
		  current->prev = current->next;
		  current->next = temp;
		  current = current->prev;
	   }
	   if (temp != nullptr)
	   {
		  head = temp->prev;
	   }
	   
    }

    Node* GetNode(int Index)
    {
	   if (Index > _Size - 1 || Index < 0)
		  return NULL;

	   Node* current = head;
	   int counter = 0;

	   while (current != NULL && (current->next != NULL))
	   {
		  if (counter == Index)
			 break;

		  counter++;
		  current = current->next;
	   }
	   return current;
    }

    T GetItem(int Index)
    {
	   Node* ItemNode = GetNode(Index);

	   if (ItemNode == NULL)
		  return NULL;
	   else
		  return ItemNode->value;
    }

    bool UpdateItem(int Index, T value)
    {
	   Node* ItemNode = GetNode(Index);
	   if (ItemNode != NULL)
	   {
		  ItemNode->value = value;
		  return true;
	   }
	   else
		  return false;
    }

};

