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
        stack<int> st;
        int ans = 0;
        st.push(-1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if (st.size() > 0)
                {
                    ans = max(ans, i - st.top());
                }
                if (st.size() == 0)
                    st.push(i);
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    run_test_case();
}