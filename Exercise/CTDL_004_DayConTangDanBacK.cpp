#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, k, a[1005], b[1005], ok, cnt;
void init()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
void Check()
{
    bool check = true;
    for (int i = 1; i < k; i++)
    {
        if (b[a[i]] >= b[a[i + 1]])
        {
            check = false;
            break;
        }
    }
    if (check)
        cnt++;
}
void run_test_case()
{
    cin >> n >> k;
    init();
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    ok = 1;
    cnt = 0;
    while (ok)
    {
        Check();
        sinh();
    }
    cout << cnt;
}
int main()
{
    run_test_case();
}