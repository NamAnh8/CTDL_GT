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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        bool check;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
            {
                check = true;
                char ans = st.top();
                st.pop();
                while (ans != '(')
                {
                    if (ans == '+' || ans == '-' || ans == '*' || ans == '/' || ans == '%' || ans == '^')
                    {
                        check = false;
                    }
                    ans = st.top();
                    st.pop();
                }
                if (check == true)
                    break;
            }
            else
                st.push(s[i]);
        }
        if (check)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}
int main()
{
    run_test_case();
}