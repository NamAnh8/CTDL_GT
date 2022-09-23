#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
void run_test_case()
{
    int n, k;
    cin >> n >> k;
    int a[105];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    int tong = 0;
    int ans = min(k, n - k);
    sort(a, a + n);
    for (int i = 0; i < ans; i++)
    {
        sum += a[i];
    }
    for (int i = ans; i < n; i++)
    {
        tong += a[i];
    }
    cout << tong - sum << endl;
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
