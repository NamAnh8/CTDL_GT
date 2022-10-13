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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = 1ll * a[i] * a[i];
    }
    sort(a, a + n);
    bool check = false;
    for (int i = n - 1; i >= 2; i--)
    {
        int j = 0, k = i - 1;
        while (j < k)
        {
            if (a[j] + a[k] == a[i])
            {
                check = true;
                break;
            }
            else if (a[j] + a[k] < a[i])
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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