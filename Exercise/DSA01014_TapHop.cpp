#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, k, s, check, a[1005];
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
}
bool Check()
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += a[i];
    }
    return sum == s;
}
void run_test_case()
{
    while (1)
    {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
        {
            break;
        }
        else if (n < k)
        {
            cout << "0" << endl;
            continue;
        }
        else
        {

            init();
            check = 1;
            int cnt = 0;
            while (check)
            {
                if (Check())
                {
                    cnt++;
                }
                sinh();
            }
            cout << cnt << endl;
        }
    }
}
int main()
{
    run_test_case();
}