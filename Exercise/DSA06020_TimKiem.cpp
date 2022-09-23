#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int solve(int a[1005], int l, int r, int k)
{
    if (l > r)
        return 0;
    int m = (l + r) / 2;
    if (a[m] == k)
        return 1;
    else if (a[m] < k)
        return solve(a, m + 1, r, k);
    else
        return solve(a, l, m - 1, k);
    return 0;
}
void run_test_case()
{
    int n, k;
    cin >> n >> k;
    int a[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (solve(a, 0, n - 1, k))
        cout << "1" << endl;
    else
        cout << "-1" << endl;
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
