#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, a[1005], check, cnt;
void init()
{
    cnt = 1;
    a[1] = n;
}
void sinh()
{
    int i = cnt;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if (q)
        {
            for (int j = 1; j <= q; j++)
            {
                cnt++;
                a[cnt] = a[i];
            }
        }
        if (r)
        {
            ++cnt;
            a[cnt] = r;
        }
    }
}
void run_test_case()
{
    cin >> n;
    init();
    check = 1;
    while (check)
    {
        cout << "(";
        for (int i = 1; i < cnt; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[cnt] << ")";
        cout << " ";
        sinh();
    }
    cout << endl;
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