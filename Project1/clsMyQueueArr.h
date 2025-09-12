#pragma once

#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

template <class T>
class clsMyQueueArr
{
protected:
    clsDynamicArray <T> _MyList;

public:

    void push(T Item)
    {
	   _MyList.InsertAtEnd(Item);
    }

    void pop()
    {
	   _MyList.DeleteItemAt(0);
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





};

