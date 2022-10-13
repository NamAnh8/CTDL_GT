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
int Binary_search(ll a[], ll l, ll r, ll x)
{
    if (l > r)
        return -1;
    ll m = (l + r) / 2;
    if (a[m] == x)
    {
        return m;
    }
    else if (a[m] > x)
    {
        return Binary_search(a, l, m - 1, x);
    }
    else
    {
        return Binary_search(a, m + 1, r, x);
    }
}
void run_test_case()
{
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        ll k = Binary_search(b, 0, n - 1, a[i]);
        if (b[k] == b[k + 1])
        {
            check = true;
            cout << b[k];
            break;
        }
    }
    if (!check)
    {
        cout << "NO";
    }
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