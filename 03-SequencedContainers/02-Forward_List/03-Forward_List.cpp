#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.assign(5, 10); //Initializes 5 elements as 10
    for (auto &&i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}