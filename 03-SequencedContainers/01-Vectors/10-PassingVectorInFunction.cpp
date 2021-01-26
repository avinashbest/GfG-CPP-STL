#include <iostream>
#include <vector>
using namespace std;
//Passing vector to a function
void fun(vector<int> &v)
{
    v.push_back(10);
    v.push_back(20);
}

void printVector(const vector<int> &v)
{
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v{5, 7, 8};
    fun(v);
    printVector(v);
    return 0;
}