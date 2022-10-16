#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, k, check, a[1005], cnt;
set<int> se;
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        if (se.find(a[i]) == se.end())
        {
            cnt++;
        }
    }
}
void run_test_case()
{
    cin >> n >> k;
    check = 1;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    sinh();
    if (check == 0)
    {
        cout << k << endl;
    }
    else
    {
        cout << cnt << endl;
    }
    cnt = 0;
    se.clear();
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