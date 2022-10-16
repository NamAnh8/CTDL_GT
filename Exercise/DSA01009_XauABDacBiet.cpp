#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, k, check, a[1005];
void init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        a[i] = 1;
    }
}
bool test()
{
    int cnt = 0, res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if (cnt > k)
        {
            return false;
        }
        if (cnt == k)
            res++;
    }
    return res == 1;
}
void run_test_case()
{
    cin >> n >> k;
    init();
    check = 1;
    int sum = 0;
    vector<string> v;
    while (check)
    {
        if (test())
        {
            sum++;
            string s;
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 0)
                    s += "A";
                else
                    s += "B";
            }
            v.push_back(s);
        }
        sinh();
    }
    cout << sum << endl;
    for (auto x : v)
    {
        cout << x << endl;
    }
}
int main()
{
    run_test_case();
}