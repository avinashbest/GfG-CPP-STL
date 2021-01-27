#include <iostream>
#include <list>
using namespace std;
//A list is implemented as doubly linked list where we have forward pointers and backward pointers.
//push_back()
//push_front()
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    for (auto &&i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}