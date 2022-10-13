#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <utility>
#define ll long long
using namespace std;

void run_test_case()
{
    ll n, x;
    cin >> n >> x;
    ll a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if (a[i] + a[j] + a[k] < x)
            {
                j++;
                cnt++;
            }
            else if (x + a[j] + a[k] + a[i] >= x)
            {
                k--;
            }
        }
    }
    cout << cnt << endl;
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