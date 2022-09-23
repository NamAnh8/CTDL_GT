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
    int t;
    cin >> t;
    int n;
    stack<int> st;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            st.push(n);
        }
        else if (s == "POP")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else if (s == "PRINT")
        {
            if (st.size() == 0)
            {
                cout << "NONE" << endl;
            }
            else
            {
                cout << st.top() << endl;
            }
        }
    }
}
int main()
{
    run_test_case();
}
