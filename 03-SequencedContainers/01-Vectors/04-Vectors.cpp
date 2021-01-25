#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v(arr, arr + n);
    //Printing the vector in reverse order
    for (auto it = v.rbegin(); it < v.rend(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    return 0;
}