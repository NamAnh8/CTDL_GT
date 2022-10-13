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
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    int res = -1;
    int fi = a[0].first;
    int se = a[0].second;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first > fi)
        {
            res = max(res, a[i].second - se);
        }
        if (a[i].second < se)
        {
            se = a[i].second;
            fi = a[i].first;
        }
    }
    cout << res << endl;
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