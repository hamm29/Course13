
#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsDynamicArray.h"
#include "clsMyQueueArr.h"
#include "clsMyStackArr.h"
#include "clsMyString.h"

using namespace std;

int main()
{
    clsMyString S1;

    cout << "\n\n\t\tUndo/Redo Project\n\n";

    cout << "\nS1 = " << S1.Value << "\n";

    S1.Value = "Hammad";

    cout << "\nS1 = " << S1.Value << "\n";
    
    S1.Value = "Hammad2";

    cout << "\nS1 = " << S1.Value << "\n";

    S1.Value = "Hammad3";

    cout << "\nS1 = " << S1.Value << "\n";

    S1.Undo();
    cout << "\n\n\nS1 = " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1 = " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1 = " << S1.Value << "\n";


    S1.Redo();
    cout << "\n\n\nS1 = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 = " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 = " << S1.Value << "\n";


    system("pause>0");
}
