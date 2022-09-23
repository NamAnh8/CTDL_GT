#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;
ll n, k;
ll a[105];
void solve(int n)
{
    int p = a[n] / 2 + 1;
    // int p = (int)pow(2, n - 1);
    if (k == p)
    {
        cout << (char)('A' + n - 1) << endl;
        return;
    }
    if (k > p)
        k -= p;
    solve(n - 1);
}
void run_test_case()
{
    cin >> n >> k;
    a[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        a[i + 1] = a[i] * 2 + 1;
    }
    solve(n);
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
