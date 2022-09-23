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
    int n;
    cin >> n;
    int a[n];
    int res[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= a[i])
        {
            st.pop();
        }
        if (!st.empty())
            res[i] = st.top();
        else
            res[i] = -1;
        st.push(a[i]);
    }
    for (auto x : res)
        cout << x << " ";
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