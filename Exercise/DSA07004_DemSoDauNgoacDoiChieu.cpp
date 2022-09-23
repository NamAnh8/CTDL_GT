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
        int count = 0;
        if (s[0] == ')')
            count++, s[0] = '(';
        if (s[s.size() - 1] == '(')
            count++, s[s.size() - 1] = ')';
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            else
            {
                if (st.empty())
                {
                    count++;
                    st.push('(');
                }
                else
                {
                    if (st.top() == '(')
                        st.pop();
                    else if (st.top() == ')')
                    {
                        st.pop();
                        count++;
                    }
                }
            }
        }
        if (!st.empty())
            count += st.size() / 2;
        cout << count << endl;
    }
}
int main()
{
    run_test_case();
}