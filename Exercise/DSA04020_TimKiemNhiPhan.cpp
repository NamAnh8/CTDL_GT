#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
ll Solve(ll a[], ll l, ll r, ll k)
{
    if (l > r)
        return 0;
    ll m = (l + r) / 2;
    if (a[m] == k)
        return m + 1;
    else if (a[m] > k)
        return Solve(a, l, m - 1, k);
    else
        return Solve(a, m + 1, r, k);
    return 0;
}
void run_test_case()
{
    ll n, k;
    cin >> n >> k;
    ll a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = Solve(a, 0, n - 1, k);
    if (ans == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << ans << endl;
    }
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
