#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
ll n, k;
ll solve(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;
    ll temp = solve(a, b / 2);
    if (b % 2 == 1)
        return temp * temp % mod * a % mod;
    return temp * temp % mod;
}
void run_test_case()
{
    while (1)
    {
        cin >> n >> k;
        if (n == 0 && k == 0)
            break;
        cout << solve(n, k) << endl;
    }
}
int main()
{
    run_test_case();
}
