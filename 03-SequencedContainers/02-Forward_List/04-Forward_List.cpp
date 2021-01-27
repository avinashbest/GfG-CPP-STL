#include <iostream>
#include <forward_list>
using namespace std;
//insert_after()
//emplace_after()
//erase_after()
int main()
{
    forward_list<int> l1 = {15, 20, 30};
    auto it = l1.insert_after(l1.begin(), 10); //insert 10 after 15
    it = l1.insert_after(it, {2, 3, 5});       //insert {2,3,5} after 10
    it = l1.emplace_after(it, 40);             //insert 40 after 5
    it = l1.erase_after(it);                   //erase element after 40 and returns iterator to the next element
    it = l1.erase_after(it, l1.end());         //remove all the elements after 30 and returns iterator pointing to the l1.end()

    for (auto &&i : l1)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}