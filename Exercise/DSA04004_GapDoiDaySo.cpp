#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
ll Mul(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    ll p = Mul(n / 2);
    if (n % 2 == 0)
        return p * p;
    return 2 * p * p;
}
void run_test_case()
{
    int n;
    ll k;
    cin >> n >> k;
    ll len = Mul(n) / 2;
    while (1)
    {
        if (n == 1)
        {
            cout << "1" << endl;
            break;
        }
        if (len == k)
        {
            cout << n << endl;
            break;
        }
        if (k > len)
        {
            k = len - (k - len);
        }
        n--;
        len /= 2;
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
