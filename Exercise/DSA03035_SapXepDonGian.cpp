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
    vector<ll> v(n + 5, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x] = v[x - 1] + 1;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout << n - v[0] << endl;
}
int main()
{
    run_test_case();
}