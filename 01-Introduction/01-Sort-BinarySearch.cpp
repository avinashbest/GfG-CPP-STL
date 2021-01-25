#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 15, 8, 20};
    //Sort function
    sort(arr, arr + 4);
    //Printing the sorted array
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //Binary Search using STL -> It returns boolean value for element present or not i.e, true / false
    if (binary_search(arr, arr + 4, 8))
    {
        cout << "PRESENT" << endl;
    }
    else
    {
        cout << "NOT PRESENT" << endl;
    }

    return 0;
}