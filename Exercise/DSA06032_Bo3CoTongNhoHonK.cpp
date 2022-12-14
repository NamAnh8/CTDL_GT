#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
ll n, s;
void run_test_case()
{
    vector<ll> v;
    int n, s;
    cin >> n >> s;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] + v[i + 1] >= s)
            break;
        for (int j = i + 1; j < n - 1; j++)
        {
            int pos = lower_bound(v.begin() + j + 1, v.end(), s - v[i] - v[j]) - v.begin();
            sum += pos - (j + 1);
        }
    }
    cout << sum << endl;
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