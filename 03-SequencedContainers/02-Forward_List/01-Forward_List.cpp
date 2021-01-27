#include <iostream>
#include <forward_list>
using namespace std;
//forward_list mainly implement a singly linked list.
//list mainly implement doubly linked list.
int main()
{
    forward_list<int> l = {10, 15, 20};

    l.push_front(5);
    l.push_front(3);
    l.pop_front();

    for (auto &&i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}