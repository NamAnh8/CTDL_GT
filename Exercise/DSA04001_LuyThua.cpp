#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;

ll Solve(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;
    ll temp = Solve(a, b / 2);
    if (b % 2 == 1)
        return temp * temp % mod * a % mod;
    return temp * temp % mod;
}
void run_test_case()
{
    ll n, k;
    cin >> n >> k;
    cout << Solve(n, k) << endl;
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
