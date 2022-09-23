#include <iostream>
#include <math.h>
#include <string>
#include <set>
#include <vector>
using namespace std;
int n, k;
set<string> se;
vector<string> v;
vector<int> ve;
void solve()
{
    cin >> n >> k;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        se.insert(temp);
    }
    for (auto x : se)
    {
        v.push_back(x);
    }
    ve.resize(k + 1, 0);
    for (int i = 1; i <= k; i++)
    {
        ve[i] = i;
    }
    n = v.size();
}
void Try(int i)
{
    for (int j = ve[i - 1] + 1; j <= n - k + i; j++)
    {
        ve[i] = j;
        if (i == k)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << v[ve[i] - 1] << " ";
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
