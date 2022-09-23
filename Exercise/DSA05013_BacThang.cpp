#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
void run_test_case()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 5, 0);
    v[0] = v[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(i, k); j++)
        {
            v[i] += v[i - j];
            v[i] %= mod;
        }
    }
    cout << v[n] << endl;
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
