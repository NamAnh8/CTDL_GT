#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
ll a[1005][1005];
void solve()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
                a[i][j] = 1;
            else
            {
                a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % mod;
            }
        }
    }
}
void run_test_case()
{
    ll n, k;
    cin >> n >> k;
    cout << a[n][k] << endl;
}
int main()
{
    int t;
    cin >> t;
    solve();
    while (t--)
    {
        run_test_case();
    }
}
