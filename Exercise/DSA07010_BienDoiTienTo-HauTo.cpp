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
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%')
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string temp = s1 + s2 + s[i];
            st.push(temp);
        }
        else
        {
            st.push(string(1, s[i]));
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