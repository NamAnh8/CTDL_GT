#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#define ll long long
using namespace std;
void run_test_case()
{
    ll n, m;
    cin >> n >> m;
    ll a[n + 5], b[m + 5];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    cout << a[n - 1] * b[0] << endl;
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
