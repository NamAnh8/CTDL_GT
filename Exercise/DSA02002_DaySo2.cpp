#include <iostream>
#include <math.h>
#include <vector>
#include <stack>
#include <sstream>
#include <string>
using namespace std;
int n;
vector<int> v;
stack<string> st;
void init()
{
    cin >> n;
    v.resize(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    while (!st.empty())
    {
        st.pop();
    }
}
void addToStack(int n)
{
    if (n == 0)
        return;
    string s = "[";
    for (int i = 0; i < n - 1; i++)
    {
        s += to_string(v[i]) + " ";
    }
    s += to_string(v[n - 1]) + "]";
    st.push(s);
}
void Try(int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] = v[i] + v[i + 1];
    }
    addToStack(n - 1);
    if (n > 2)
        Try(n - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        addToStack(n);
        Try(n);
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
