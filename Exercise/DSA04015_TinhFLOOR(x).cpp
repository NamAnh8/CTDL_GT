#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#define ll long long
using namespace std;
void run_test_case()
{
    ll n, k;
    cin >> n >> k;
    ll a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = 1e18;
    if (a[0] > k)
        cout << "-1" << endl;
    else
    {
        int ans = lower_bound(a, a + n, k) - a;
        if (a[ans] != k)
            ans--;
        cout << ans + 1 << endl;
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
