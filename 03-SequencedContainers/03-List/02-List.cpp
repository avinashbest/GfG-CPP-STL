#include <iostream>
#include <list>
using namespace std;
//pop_back()
//pop_front()
int main()
{
    list<int> l = {10, 2, 5, 20};
    l.pop_front(); //removes the front element
    l.pop_back();  //removes the last element

    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    return 0;
}