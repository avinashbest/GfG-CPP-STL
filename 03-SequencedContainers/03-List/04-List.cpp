#include <iostream>
#include <list>
using namespace std;
//merge(): It is used to merge to sorted list.
int main()
{
    list<int> l1 = {10, 20, 30};
    list<int> l2 = {5, 15, 25};

    l1.merge(l2);

    for (auto &&i : l1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}