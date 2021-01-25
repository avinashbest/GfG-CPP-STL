#include <iostream>
#include <vector>
using namespace std;
//insert(): inserts element at any position
int main()
{
    vector<int> v1{10, 5, 20, 15};

    auto it = v1.insert(v1.begin(), 100);
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    v1.insert(v1.begin() + 2, 200);
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    v1.insert(v1.begin(), 2, 300);
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v2;
    v2.insert(v2.begin(), v1.begin(), v1.begin() + 2);
    for (auto x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}