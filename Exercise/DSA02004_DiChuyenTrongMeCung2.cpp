#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
vector<string> v;
int n, a[105][105];
bool ok[105][105];
void Try(int i, int j, string s)
{
    if (i == 1 && j == 1 && a[i][j] == 0)
    {
        return;
    }
    if (i == n && j == n && a[i][j] == 0)
    {
        return;
    }
    if (i == n && j == n && a[i][j] == 1)
    {
        v.push_back(s);
    }
    if (i < n && a[i + 1][j] == 1 && !ok[i + 1][j])
    {
        ok[i][j] = true;
        Try(i + 1, j, s + "D");
        ok[i][j] = false;
    }
    if (j < n && a[i][j + 1] == 1 && !ok[i][j + 1])
    {
        ok[i][j] = true;
        Try(i, j + 1, s + "R");
        ok[i][j] = false;
    }
    if (j > 1 && a[i][j - 1] == 1 && !ok[i][j - 1])
    {
        ok[i][j] = true;
        Try(i, j - 1, s + "L");
        ok[i][j] = false;
    }
    if (i > 1 && a[i - 1][j] == 1 && !ok[i - 1][j])
    {
        ok[i][j] = true;
        Try(i - 1, j, s + "U");
        ok[i][j] = false;
    }
}
void run_test_case()
{
    v.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            ok[i][j] = false;
        }
    }
    Try(1, 1, "");
    if (v.size() == 0)
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        run_test_case();
    }
}