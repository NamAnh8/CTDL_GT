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
    cin >> s;
    stack<long long> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%')
        {
            long long s1 = st.top();
            st.pop();
            long long s2 = st.top();
            st.pop();
            long long temp;
            if (s[i] == '+')
                temp = s2 + s1;
            else if (s[i] == '-')
                temp = s1 - s2;
            else if (s[i] == '*')
                temp = s1 * s2;
            else if (s[i] == '/')
                temp = s1 / s2;
            else if (s[i] == '%')
                temp = s1 % s2;
            st.push(temp);
        }
        else
        {
            st.push((long long)(s[i] - '0'));
        }
    }
    cout << st.top() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        run_test_case();
    }
}