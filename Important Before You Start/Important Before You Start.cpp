
#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
private:
    T _Number1, _Number2;

public:

    Calculator(T Num1, T Num2)
    {
	   _Number1 = Num1;
	   _Number2 = Num2;
    }

    void PrintResults()
    {
	   cout << "Numbers: " << _Number1 << " and " << _Number2 << "." << endl;
	   cout << _Number1 << " + " << _Number2 << " = " << Add() << endl;
	   cout << _Number1 << " - " << _Number2 << " = " << Subtract() << endl;
	   cout << _Number1 << " * " << _Number2 << " = " << Multiply() << endl;
	   cout << _Number1 << " / " << _Number2 << " = " << Divide() << endl;

    }

    T Add()
    {
	   return _Number1 + _Number2;
    }

    T Subtract()
    {
	   return _Number1 - _Number2;
    }

    T Multiply()
    {
	   return _Number1 * _Number2;
    }

    T Divide()
    {
	   return _Number1 / _Number2;
    }
};

template <typename T> T myMax(T Number1, T Number2)
{
    return (Number1 > Number2 ? Number1 : Number2);
}

int main()
{
    /*cout << myMax<int>(3, 9) << endl;

    cout << myMax<double>(32.9, 9.3) << endl;

    cout << myMax<char>('d', 'a') << endl;*/

    Calculator<int> intCal(5, 3);

    Calculator<float> floatCalc(2.3, 1.2);

    cout << "\nint Calculator:\n";
    intCal.PrintResults();

    cout << "\nFloat Calculator:\n";
    floatCalc.PrintResults();

    //system("pause>0");
    return 0;
}
