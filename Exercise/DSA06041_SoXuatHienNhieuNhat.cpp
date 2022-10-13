#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>
#include <map>
#include <climits>
#define ll long long
using namespace std;

void run_test_case()
{
    ll n;
    cin >> n;
    ll a[n + 5];
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int res = INT_MIN;
    int ans = INT_MIN;
    for (auto x : mp)
    {
        if (res < x.second)
        {
            res = x.second;
            ans = x.first;
        }
    }
    if (res > n / 2)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "NO" << endl;
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