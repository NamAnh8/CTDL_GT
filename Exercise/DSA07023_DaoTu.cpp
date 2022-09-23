#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>
#define ll long long
using namespace std;

void run_test_case()
{
    vector<string> v;
    string s;
    getline(cin, s);
    stack<string> st;
    string temp;
    stringstream ss(s);
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        st.push(v[i]);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        run_test_case();
    }
}