#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

void printSortedByMarks(int roll[], int marks[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({marks[i], roll[i]});
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());

    for (int i = 0; i < n; i++)
    {
        cout << v[i].second << " " << v[i].first << endl;
    }
}

int main()
{
    int roll[] = {101, 108, 103, 105};
    int marks[] = {70, 80, 40, 90};
    printSortedByMarks(roll, marks, 4);
    return 0;
}