#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#define ll long long
ll n, k;
ll fib[95];
using namespace std;
void solve()
{
    if (n == 1)
        cout << "0" << endl;
    else if (n == 2)
        cout << "1" << endl;
    else
    {
        if (k > fib[n - 2])
        {
            k -= fib[n - 2];
            n--;
        }
        else
        {
            n -= 2;
        }
        solve();
    }
}
void run_test_case()
{
    cin >> n >> k;
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i < 93; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    solve();
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
