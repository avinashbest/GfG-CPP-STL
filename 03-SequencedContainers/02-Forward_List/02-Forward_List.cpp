#include <iostream>
#include <forward_list>
using namespace std;
//assign(): It is used to assign new set of values to a forward_list
//remove(): It is used to remove all instances of the values.
int main()
{
    forward_list<int> l1 = {10, 15, 20};

    l1.push_front(5);
    l1.push_front(3);

    forward_list<int> l2;
    l2.assign(l1.begin(), l1.end()); //assigning list l1 to list l2

    for (auto &&i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}