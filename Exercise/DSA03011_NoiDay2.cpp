#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;

const ll mod = 1e9 + 7;
void run_test_case()
{
    priority_queue<ll, vector<ll>, greater<ll>> a;
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        a.push(tmp);
    }
    ll res = 0;
    while (a.size() > 1)
    {
        ll x = a.top();
        a.pop();
        ll y = a.top();
        a.pop();
        res += (x + y) % mod;
        a.push((x + y) % mod);
        res %= mod;
    }
    cout << res << endl;
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