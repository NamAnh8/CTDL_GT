#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

void run_test_case()
{
    ll n, x;
    cin >> n >> x;
    map<ll, ll> mp;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res += mp[x - a[i]];
        if (a[i] * 2 == x)
        {
            res--;
        }
    }
    cout << res / 2 << endl;
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