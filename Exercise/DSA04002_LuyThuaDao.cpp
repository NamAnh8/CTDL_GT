#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
ll Pow(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;
    ll temp = Pow(a, b / 2);
    if (b % 2 == 1)
        return temp * temp % mod * a % mod;
    return temp * temp % mod;
}
void run_test_case()
{
    ll n;
    cin >> n;
    ll temp = n;
    ll r = 0;
    while (temp > 0)
    {
        r = r * 10 + temp % 10;
        temp /= 10;
    }
    cout << Pow(n, r) << endl;
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
