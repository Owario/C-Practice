#include "prioritystack.h"
#include <iostream>
using namespace std;

void PriorityStackTestFunction() 
{
    PriorityStack<int> mypriorstack = PriorityStack<int>();

    mypriorstack.Push(2, 10);
    mypriorstack.Push(2, 15);

    mypriorstack.Push(3, 9);
    mypriorstack.Push(3, 20);
    mypriorstack.Push(3, 2);

    mypriorstack.Push(1, 5);

    mypriorstack.Push(20000, 444);
    mypriorstack.Push(2000, 999);


    while (!mypriorstack.IsEmpty())
    {
        cout << mypriorstack.Pop() << endl;
    }

}

void PriorityStackTestCustomInput() 
{
    PriorityStack<int> mypriorstack = PriorityStack<int>();
    string inputstring = "";
    int valueprior = 0;
    while (inputstring != "s")
    {
        cout << "insert value, or write 's' to stop programm" << endl;
        cin >> inputstring;
        if (inputstring == "s") break;
        try 
        {
            int i = stoi(inputstring);
        }
        catch(exception e) 
        {
            cout << "Incorrect input, try again" << endl;
            continue;

        }
        cout << "insert priority of value" << endl;
        cin >> valueprior;
        mypriorstack.Push(valueprior, stoi(inputstring));
    }

    while (!mypriorstack.IsEmpty())
    {
        cout << mypriorstack.Pop() << endl;
    }
}
