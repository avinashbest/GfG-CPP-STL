#include <list>
#include <iostream>
using namespace std;

int main()
{
    list<int> l = {10, 15, 15, 20, 20, 10};
    l.unique();  //removes consecutive duplicate element
    l.sort();    //sort the list
    l.reverse(); //reverse the list

    for (auto &&i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}