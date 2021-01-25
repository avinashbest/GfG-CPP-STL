#include <iostream>
#include <vector>
using namespace std;
// advance()
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    auto i = v.begin();

    advance(i, 3);
    cout << (*i) << " ";

    cout << endl;
    return 0;
}