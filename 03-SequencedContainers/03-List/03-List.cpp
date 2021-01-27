#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};
    auto it = l.begin();   //iterator pointing to 10
    it++;                  //iterator pointing to 20
    it = l.insert(it, 15); //insert 15 before 20 return iterator pointing to 15
    l.insert(it, 2, 7);    //insert 2 times 7 before 15

    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    //front(): gives reference of 1st element
    //back(): gives reference of last element
    cout << l.front() << " " << l.back() << " Size = " << l.size() << endl;

    return 0;
}