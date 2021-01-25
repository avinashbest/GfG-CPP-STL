#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{10, 5, 20, 15};
    v.clear();
    cout << v.size() << endl;

    if (v.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}