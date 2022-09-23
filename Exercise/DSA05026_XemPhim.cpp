#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
void run_test_case()
{
    int c, n;
    cin >> c >> n;
    int w[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }
    int dp[n + 5][c + 5];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + w[i]);
            }
        }
    }
    cout << dp[n][c] << endl;
}
int main()
{
    run_test_case();
}
