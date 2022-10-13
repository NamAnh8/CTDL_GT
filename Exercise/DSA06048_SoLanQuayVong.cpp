#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

void run_test_case()
{
    ll n;
    cin >> n;
    ll a[n + 5];
    ll b[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int j = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[j] == b[i])
        {
            ans = i - j;
        }
    }
    cout << ans << endl;
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