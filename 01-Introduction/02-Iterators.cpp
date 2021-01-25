#include <iostream>
#include <vector>
using namespace std;
// begin() and end()
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator i = v.begin(); //iterator of the data-type vector or we can use "auto i;"

    cout << (*i) << " "; // first element
    i++;
    cout << (*i) << " "; //second element
    i = v.end();         //element after the last element
    i--;
    cout << (*i) << " "; //last element

    cout << endl;
    return 0;
}