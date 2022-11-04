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
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (st.size() > 0 && a[i] >= a[st.top()])
        {
            st.pop();
        }
        if (st.size() > 0)
        {
            cout << i - st.top() << " ";
        }
        else
        {
            cout << i + 1 << " ";
        }
        st.push(i);
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