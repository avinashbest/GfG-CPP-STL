#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Declaring and Initializing Vector
    vector<int> v{10, 20, 30, 40};
    //Traversal
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}