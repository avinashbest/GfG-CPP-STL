#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{10, 5, 20, 15};
    v.erase(v.begin());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.erase(v.begin(), v.end() - 1);
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}