#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
ll n, h;
void run_test_case()
{
    cin >> n >> h;
    vector<ll> v;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        int pos = lower_bound(v.begin() + i + 1, v.end(), h + v[i]) - v.begin();
        sum += pos - (i + 1);
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