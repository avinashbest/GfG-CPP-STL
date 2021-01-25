#include <iostream>
using namespace std;
//Function Template for finding maximum element in an array of any data-type
template <typename T>
T arrMax(T arr[], int n)
{
    T res = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > res)
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{
    int IntegerArray[] = {10, 40, 3};
    cout << arrMax<int>(IntegerArray, 3) << endl;

    float FloatArray[] = {10.5, 3.5, 1.5, 30.5};
    cout << arrMax<float>(FloatArray, 4) << endl;

    return 0;
}