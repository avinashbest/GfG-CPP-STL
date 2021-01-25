#include <iostream>
#include <utility>
using namespace std;
//pair can be used to store 2 item either of same data-type or different.
int main()
{
    pair<int, int> p1(10, 20);

    pair<int, string> p2(10, "GfG");

    pair<int, int> p3;
    p3 = {30, 40};

    pair<int, int> p4;
    p4 = make_pair(50, 60);
    
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;
    cout << p4.first << " " << p4.second << endl;
    return 0;
}