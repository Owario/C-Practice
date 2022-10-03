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
    a.PushBackNode(10);
    a.PushBackNode(5);
    a.PushFrontNode(15);
    a.PushFrontNode(11);
    a.PushFrontNode(12);
    a.PushFrontNode(13);

    for (int i = 0; i < a.GetSize(); ++i) 
    {
        cout << a[i] << endl;
    }

    return 0;
}
