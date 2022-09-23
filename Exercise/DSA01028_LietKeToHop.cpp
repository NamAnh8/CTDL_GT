#include <iostream>
#include <math.h>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
int n, k, check;
int a[1005];
set<int> se;
vector<int> v;
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        se.insert(temp);
    }
    for (auto x : se)
    {
        v.push_back(x);
    }
    n = v.size();
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << v[a[i] - 1] << " ";
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
