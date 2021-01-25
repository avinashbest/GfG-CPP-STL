#include <iostream>
using namespace std;

template <typename T>
struct Pair
{
    T x, y;
    //Constructor
    Pair(T i, T j)
    {
        x = i;
        y = j;
    }
    //Getters
    T getFirst() { return x; }
    T getSecond() { return y; }
};

int main()
{
    Pair<int> p1(10, 20);
    cout << p1.getFirst() << " " << p1.getSecond() << endl;
    return 0;
}