#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int check;
vector<string> v;
int n, a[105][105];
void solve(int i, int j, string s)
{
    if (i == 1 && j == 1 && a[i][j] == 0)
    {
        check = 0;
        return;
    }
    if (i == n && j == n && a[i][j] == 1)
    {
        v.push_back(s);
        check = 1;
        return;
    }
    if (i < n && a[i + 1][j] == 1)
    {
        solve(i + 1, j, s + "D");
    }
    if (j < n && a[i][j + 1] == 1)
    {
        solve(i, j + 1, s + "R");
    }
    if (i > n || j > n || (i > n && j > n && a[i + 1][j] == 0 && a[i][j + 1] == 0))
    {
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        check = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        v.clear();
        solve(1, 1, "");
        if (!check)
        {
            cout << -1;
        }
        else
        {
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
}
