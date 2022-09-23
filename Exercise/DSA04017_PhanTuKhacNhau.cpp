#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
void run_test_case()
{
    ll n;
    cin >> n;
    ll a[n + 5];
    ll b[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    a[n] = 1e18;
    b[n] = 1e18;
    ll i = 0, j = 0;
    ll ans = 0;
    while (i < n && j < n - 1)
    {
        if (a[i] != b[j])
        {
            ans = i + 1;
            break;
        }
        else
        {
            i++;
            j++;
        }
    }
    if (i == n)
    {
        ans = n;
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
