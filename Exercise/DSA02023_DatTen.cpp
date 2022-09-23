#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <set>
using namespace std;
int n, k;
set<string> se;
vector<string> v;
vector<int> ans;
void solve()
{
    string temp;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        se.insert(temp);
    }
    for (auto x : se)
    {
        v.push_back(x);
    }
    ans.resize(k + 1, 0);
    for (int i = 1; i <= k; i++)
    {
        ans[i] = i;
    }
    n = v.size();
}
void Try(int i)
{
    for (int j = ans[i - 1] + 1; j <= n - k + i; j++)
    {
        ans[i] = j;
        if (i == k)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << v[ans[i] - 1] << " ";
            }
            cout << endl;
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    solve();
    Try(1);
}
