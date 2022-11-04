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
    int s, d;
    cin >> s >> d;
    stack<int> st;
    while (s > 0)
    {
        d--;
        if (s > 9)
        {
            st.push(9);
            s -= 9;
        }
        else
        {
            st.push(s);
            break;
        }
    }
    if (d < 0)
    {
        cout << -1;
    }
    else
    {
        if (d > 0)
        {
            int res = st.top();
            st.pop();
            st.push(res - 1);
            while (d > 1)
            {
                st.push(0);
                d--;
            }
            st.push(1);
        }
        while (st.size() > 0)
        {
            cout << st.top();
            st.pop();
        }
    }
    cout << endl;
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