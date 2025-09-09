#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

template <class T>
class clsMyQueue
{
protected:
    clsDblLinkedList<T>_MyList;

public:
    
    void push(T item)
    {
	   _MyList.InsertAtEnd(item);
    }

    void pop()
    {
	   _MyList.DeleteFirstNode();
    }

    void Print()
    {
	   _MyList.PrintList();
    }

    int Size()
    {
	   return _MyList.Size();
    }

    bool IsEmpty()
    {
	   return _MyList.IsEmpty();
    }

    T front()
    {
	   return _MyList.GetItem(0);
    }

    T back()
    {
	   return _MyList.GetItem(Size() - 1);
    }

    T GetItem(int Index)
    {
	   return _MyList.GetItem(Index);
    }

    void Reverse()
    {
	   _MyList.Reverse();
    }

    void UpdateItem(int Index,T newValue)
    {
	   _MyList.UpdateItem(Index, newValue);
    }

    void InsertAfter(int index, T value)
    {
	   _MyList.InsertAfter(index, value);
    }

    void InsertAtFront(T value)
    {
	   _MyList.InsertAtBeginning(value);
    }

    void InsertAtBack(T value)
    {
	   _MyList.InsertAtEnd(value);
    }

    void Clear()
    {
	   _MyList.Clear();
    }
};

