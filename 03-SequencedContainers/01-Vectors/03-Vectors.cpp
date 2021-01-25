#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 3, x = 10;
    vector<int> v(n, x); //Create a vector of size 3 with all the element value be 10

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    return 0;
}