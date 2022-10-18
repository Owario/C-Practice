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
    a.PushBackNode(50);
    a.PushBackNode(25);
    a.PushBackNode(35);
    a.PushBackNode(45);

    for (int i = 0; i < a.GetSize(); ++i) 
    {
        cout << a[i] << endl;
    }
    cout << a.PopBackNode() << endl;
    //string b = string(a.PopBackNode());
    //cout<<b<<endl;
    //string c = string(a.PopBackNode());
    //cout << b << endl;
    //cout << c << endl;

    return 0;
}
