#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>
#define ll long long
using namespace std;

void run_test_case()
{
    int n, v;
    cin >> n >> v;
    int a[n + 5], c[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    int dp[n + 5][v + 5];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= a[i])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
            }
        }
    }
    cout << dp[n][v] << endl;
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