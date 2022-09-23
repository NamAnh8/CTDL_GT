#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
const ll mod = 123456789;
ll Solve(ll n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    ll p = Solve(n / 2);
    if (n % 2 == 0)
        return (p % mod * p % mod) % mod;
    return 2 * (p * p % mod) % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << Solve(n - 1) << endl;
    }
}
