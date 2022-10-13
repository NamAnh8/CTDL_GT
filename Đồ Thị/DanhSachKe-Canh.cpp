#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>
#include <utility>
#define ll long long
using namespace std;

void run_test_case()
{
    vector<pair<int, int>> edge;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string temp;
        while (ss >> temp)
        {
            if (stoi(temp) > i)
            {
                edge.push_back({i, stoi(temp)});
            }
        }
    }
    for (auto x : edge)
    {
        cout << x.first << " " << x.second << endl;
    }
}
int main()
{
    run_test_case();
}