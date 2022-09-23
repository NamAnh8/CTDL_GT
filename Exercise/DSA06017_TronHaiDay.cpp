#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <set>
#define ll long long
using namespace std;
void run_test_case()
{
    multiset<ll> se;
    ll n, m;
    cin >> n >> m;
    ll a[n + 5], b[m + 5];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
        se.insert(b[i]);
    }
    for (auto x : se)
        cout << x << " ";
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
