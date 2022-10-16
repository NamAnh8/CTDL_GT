#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int num, a[1005], n;
int check;
ll res = 1e18;
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == num)
        {
            ll s = 0;
            for (int l = 1; l <= num; l++)
            {
                s = 10 * s + a[l];
            }
            s *= 9;
            if (s % n == 0 && s >= n)
            {
                res = min(res, s);
                check = 0;
            }
        }
        else
            Try(i + 1);
    }
}
void run_test_case()
{
    res = 1e18;
    cin >> n;
    num = 1;
    check = 1;
    while (check && num <= 17)
    {
        Try(1);
        num += 1;
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