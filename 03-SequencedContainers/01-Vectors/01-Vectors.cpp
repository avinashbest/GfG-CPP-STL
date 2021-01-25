#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; //Vector Declaration
    //Initialization
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //Traversal
    for (auto i = 0; i < v.size(); i++)
    {
        // cout << v.[i] << " ";   //No out of index bound checking
        cout << v.at(i) << " "; //Index bound checking available like java, it throws error
    }
    cout << endl;

    return 0;
}