#include <iostream>
#include "../Task 3/prioritystack.h"
#include "../Task 1/unlimitednum.h"
using namespace std;

int main()
{

    PriorityStack<UnlimitedNumber> mypriorstack = PriorityStack<UnlimitedNumber>();
    string inputstring = "";
    int valueprior = 0;
    while (inputstring != "s")
    {
        cout << "insert value, or write 's' to stop programm" << endl;
        cin >> inputstring;
        if (inputstring == "s") break;
        cout << "insert priority of value" << endl;
        cin >> valueprior;
        mypriorstack.Push(valueprior, inputstring);
    }
    UnlimitedNumber a = UnlimitedNumber("123");
    while (!mypriorstack.IsEmpty()) 
    {
        cout << mypriorstack.Pop() << endl;
    }


    return 0;
}
