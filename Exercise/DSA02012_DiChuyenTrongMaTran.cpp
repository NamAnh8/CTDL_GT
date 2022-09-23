#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[1005][1005];
int n, m;
int sum, check;
void init()
{
    sum = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Try(int i, int j)
{
    if (i == n && j == m)
    {
        sum++;
        check = 1;
        return;
    }
    if (i < n)
    {
        Try(i + 1, j);
    }
    if (j < m)
    {
        Try(i, j + 1);
    }
    if (i > n && j > m)
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
        init();
        check = 0;
        Try(1, 1);
        if (!check)
        {
            cout << -1;
        }
        else
        {
            cout << sum;
        }
        cout << endl;
    }
}
