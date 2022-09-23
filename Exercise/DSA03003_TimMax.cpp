#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
void run_test_case()
{
    int n;
    cin >> n;
    int a[10005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * i;
        ans %= mod;
    }
    cout << ans << endl;
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
