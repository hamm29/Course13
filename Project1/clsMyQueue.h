#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

template <class T>
class clsMyQueue
{
private:
    clsDblLinkedList<T>myList;

public:
    
    void push(T item)
    {
	   myList.InsertAtEnd(item);
    }

    void pop()
    {
	   myList.DeleteFirstNode();
    }

    void Print()
    {
	   myList.PrintList();
    }

    int Size()
    {
	   return myList.Size();
    }

    bool IsEmpty()
    {
	   return myList.IsEmpty();
    }

    T front()
    {
	   return myList.GetItem(0);
    }

    T back()
    {
	   return myList.GetItem(Size() - 1);
    }

    T GetItem(int Index)
    {
	   return myList.GetItem(Index);
    }

    void Revers()
    {
	   myList.Reverse();
    }

    void UpdateItem(int Index,T newValue)
    {
	   myList.UpdateItem(Index, newValue);
    }

    void InsertAfter(int index, T value)
    {
	   myList.InsertAfter(index, value);
    }

    void InsertAtFront(T value)
    {
	   myList.InsertAtBeginning(value);
    }

    void InsertAtBack(T value)
    {
	   myList.InsertAtEnd(value);
    }

    void Clear()
    {
	   myList.Clear();
    }
};

