#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsDynamicArray 
{
protected:
    int _Size = 0;

public:
    T* OriginalArray;

    clsDynamicArray(int size = 0)
    {
	   if (size < 0)
		  size = 0;

	   _Size = size;
	   OriginalArray = new T[_Size];
    }

    bool SetItem(int Index, T Item)
    {
	   if (_Size<0 || Index>_Size)
	   {
		  return false;
	   }
	   OriginalArray[Index] = Item;
	   return true;
    }

    int Size()
    {
	   return _Size;
    }

    bool IsEmpty()
    {
	   return (_Size == 0 ? true : false);
    }

    void PrintList()
    {
	   for (int i = 0 ; i <= _Size - 1; i++)
	   {
		  cout << OriginalArray[i] << " ";
	   }
	   cout << "\n";
    }

    void Resize(int newSize)
    {
	   if (newSize < 0)
	   {
		  newSize = 0;
	   }

	   T* TempArray = new T[newSize];

	   if (newSize < _Size)
	   {
		  _Size = newSize;
	   }

	   for (int i = 0; i <= (_Size - 1); i++)
	   {
		  TempArray[i] = OriginalArray[i];
	   }

	   _Size = newSize;

	   delete[] OriginalArray;
	   OriginalArray = TempArray;

    }

    T GetItem(int Index)
    {
	   return OriginalArray[Index];
    }

    void Reverse()
    {
	  
	   T* TempArr = new T[_Size];
	   int counter = 0;
	   for (int i = (_Size - 1); i >= 0; i--)
	   {
		  TempArr[counter] = OriginalArray[i];
		  counter++;
	   }
	   delete[] OriginalArray;
	   OriginalArray = TempArr;
    }

    void Clear()
    {
	   _Size = 0;
	   T* TempArr = new T[0];
	   delete[] OriginalArray;
	   OriginalArray = TempArr;
    }

    bool DeleteItemAt(int Index)
    {
	   if (Index > _Size || Index < 0)
	   {
		  return false;
	   }

	   _Size--;

	   T* TempArray = new T[_Size];

	   for (int i = 0; i < Index; i++)
	   {
		  TempArray[i] = OriginalArray[i];
	   }

	   for (int i = Index + 1; i < _Size + 1; i++)
	   {
		  TempArray[i - 1] = OriginalArray[i];
	   }

	   delete[] OriginalArray;
	   OriginalArray = TempArray;
	   return true;
    }

    void DeleteLastItem()
    {
	   DeleteItemAt(0);
    }

    void DeleteFirstItem()
    {
	   DeleteItemAt(_Size - 1);
    }

    T Find(T Item)
    {
	   for (int i = 0; i <= _Size - 1; i++)
	   {
		  if (OriginalArray[i] == Item)
			 return i;
	   }
	   return -1;
    }

    bool DeleteItem(T Item)
    {
	   int Index = Find(Item);

	   if (Index == -1)
	   {
		  return false;
	   }
	   DeleteItemAt(Index);
	   return true;
    }

    bool InsertAt(int Index, T Item)
    {
	   if (Index > _Size || Index < 0)
		  return false;


	   _Size++;
	   T* TempArray = new T[_Size];

	   for (int i = 0; i < Index; i++)
	   {
		  TempArray[i] = OriginalArray[i];
	   }
	   TempArray[Index] = Item;

	   for (int i = Index + 1; i < _Size; i++)
	   {
		  TempArray[i] = OriginalArray[i - 1];
	   }
	   delete[] OriginalArray;
	   OriginalArray = TempArray;
	   return true;
    }

    void InsertAtBeginning(T Item)
    {
	   InsertAt(0, Item);
    }

    void InsertAtEnd(T Item)
    {
	   InsertAt(_Size, Item);
    }

    bool InsertBefore(int Index, T Item)
    {
	   if (Index < 1)
		  return InsertAt(0, Item);
	   else
		  return InsertAt(Index - 1, Item);
    }

    bool InsertAfter(int Index, T Item)
    {
	   if (Index >= _Size)
		  return InsertAt(_Size - 1, Item);
	   else
		  return InsertAt(Index + 1, Item);
    }

};

                 