#include <iostream>
#include "../Task 3/test_func.h"
#include "../Task 3/prioritystack.h"
#include "../Task 1/unlimitednum.h"
#include "../Task 2/fizzbuzz.h"
#include "../Task 4/containers.h"
#include <list>
using namespace std;

int main()
{
    MyList<int> a = MyList<int>();
    //try 
    //{
    //    a.PopFrontNode();
    //}
    //catch (const char* msg) 
    //{
    //    cout << msg << endl;
    //}

    a.PushBackNode(10);
    a.PushBackNode(5);
    a.PushFrontNode(15);
    int b = a.PopFrontNode();
    cout << b << endl;
    /// <summary>
    /// 15 10 5
    /// </summary>
    /// <returns></returns>
    return 0;
}
