#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

void run_test_case()
{
    string s;
    stack<int> st;
    int n;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> n;
            st.push(n);
        }
        else if (s == "pop")
        {
            st.pop();
        }
        else if (s == "show")
        {
            vector<int> v;
            if (st.size() == 0)
            {
                cout << "empty" << endl;
                continue;
            }
            while (st.size() > 0)
            {
                v.push_back(st.top());
                st.pop();
            }
            reverse(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
                st.push(v[i]);
            }
            cout << endl;
        }
    }
}
int main()
{
    run_test_case();
}