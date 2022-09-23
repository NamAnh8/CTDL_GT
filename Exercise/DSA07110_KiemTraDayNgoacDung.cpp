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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        bool check = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            if (s[i] == '}')
            {
                if (st.size() == 0)
                {
                    check = false;
                    break;
                }
                else if (st.top() == '{')
                {
                    st.pop();
                }
            }
            else if (s[i] == ']')
            {
                if (st.size() == 0)
                {
                    check = false;
                    break;
                }
                else if (st.top() == '[')
                {
                    st.pop();
                }
            }
            else if (s[i] == ')')
            {
                if (st.size() == 0)
                {
                    check = false;
                    break;
                }
                else if (st.top() == '(')
                {
                    st.pop();
                }
            }
        }
        if (st.size() > 0)
            check = false;
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    run_test_case();
}