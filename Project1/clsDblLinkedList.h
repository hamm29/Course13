#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDblLinkedList
{
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
    }

    void PrintList()
    {
	   Node* current = head;
	   while (current != NULL)
	   {
		  cout << current->value << " ";
		  current = current->next;
	   }
	   cout << "\n" << endl;
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
    }

};

