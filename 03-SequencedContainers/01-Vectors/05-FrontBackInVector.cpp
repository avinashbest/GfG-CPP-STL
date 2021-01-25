#include <iostream>
#include <vector>
using namespace std;
//pop_back(): returns last element
//front(): returns reference to 1st element
//back(): returns reference to last element
int main()
{
    vector<int> v{10, 5, 20, 15};
    v.pop_back();
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << v.front() << " ";
    cout << v.back() << endl;

    return 0;
}