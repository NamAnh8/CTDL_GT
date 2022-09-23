#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
void run_test_case()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 5, 0);
    a[0] = a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(i, k); j++)
        {
            a[i] += a[i - j];
            a[i] %= mod;
        }
    }
    cout << a[n] << endl;
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
