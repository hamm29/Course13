#pragma once

#include <iostream>
#include "clsMyStack.h";
#include <stack>
#include <string>


class clsMyString
{
protected:
    stack <string> _Undo;
    stack <string> _Redo;
    string _Value;

public:

    
    void setValue(string value)
    {
	   _Undo.push(_Value);
	   _Value = value;
    }

    string getValue()
    {
	   return _Value;
    }

    __declspec(property(get = getValue, put = setValue)) string Value;

    void Undo()
    {
	   if (!_Undo.empty())
	   {
		  _Redo.push(_Value);
		  _Value = _Undo.top();
		  _Undo.pop();
	   }
    }

    void Redo()
    {
	   if (!_Redo.empty())
	   {
		  _Undo.push(_Value);
		  _Value = _Redo.top();
		  _Redo.pop();
	   }
    }


};

