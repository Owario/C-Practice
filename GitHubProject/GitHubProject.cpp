#include <iostream>
#include "../Task 3/test_func.h"
#include "../Task 3/prioritystack.h"
#include "../Task 1/unlimitednum.h"
#include "../Task 2/fizzbuzz.h"
using namespace std;

int main()
{
    string mystring = FizzBuzzEnjoyer::FizzBuzzFunc();
    cout<<mystring<<endl;

    mystring = "";
    FizzBuzzEnjoyer::FizzBuzzParamFunc(mystring);
    cout << mystring << endl;

    mystring = "";
    mystring = FizzBuzzEnjoyer::FizzBuzzConstFunc();
    cout << mystring << endl;

    char* my_char = FizzBuzzEnjoyer::FizzBuzzCharFunc();
    int iterator = 0;
    while (my_char[iterator] != '!') 
    {
        cout << my_char[iterator++];
    }
    return 0;
}
