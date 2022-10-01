#include <iostream>
#include "../Task 3/prioritystack.h"
#include "../Task 1/unlimitednum.h"
using namespace std;

int main()
{/*
    UnlimitedNumber* FirstNumber;
    string input_value = "";
    cin >> input_value;
    FirstNumber = new UnlimitedNumber(input_value);
    cout << FirstNumber->getBaseValue() << endl;*/

    //PriorityStack<int> MyPriorStack = PriorityStack<int>();
    //string inputString = "";
    //int valuePrior = 0;
    ///*while (inputString != "s")
    //{
    //    cout << "Insert value, or write 's' to stop programm" << endl;
    //    cin >> inputString;
    //    if (inputString == "s") break;
    //    cout << "Insert priority of value" << endl;
    //    cin >> valuePrior;
    //    MyPriorStack.Push(valuePrior, stoi(inputString));
    //}
    //while (!MyPriorStack.IsEmpty()) 
    //{
    //    cout << MyPriorStack.Pop() << endl;
    //}*/


    UnlimitedNumber number1 = UnlimitedNumber("1234000000000000000000000000000000");
    UnlimitedNumber number2 = UnlimitedNumber("1888007797987987987987987989879879879879877987000");
    UnlimitedNumber number3 = number1 + number2;
    cout << number3.getBaseValue() << endl;

}
