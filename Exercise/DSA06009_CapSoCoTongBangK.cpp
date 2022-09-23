#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void run_test_case()
{
    map<int, int> mp;
    int n, s;
    cin >> n >> s;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += mp[s - a[i]];
        if (a[i] * 2 == s)
        {
            ans--;
        }
    }
    cout << ans / 2 << endl;
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
