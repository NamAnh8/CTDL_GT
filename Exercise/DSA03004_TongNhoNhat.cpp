#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[105];
    ll x = 0;
    ll y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            x = 10 * x + a[i];
        }
        else
        {
            y = 10 * y + a[i];
        }
    }
    cout << x + y << endl;
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
