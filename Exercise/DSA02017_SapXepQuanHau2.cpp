#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int hang[11], cot[11], d1[22], d2[22];
int val[10][10];
int a[11];
int n, res;
void init()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> val[i][j];
        }
    }
    n = 8;
    for (int i = 1; i <= 11; i++)
    {
        hang[i] = cot[i] = 1;
    }
    for (int i = 1; i <= 22; i++)
    {
        d1[i] = d2[i] = 1;
    }
    res = 0;
}
void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (hang[j] == 1 && cot[j] == 1 && d1[i + j - 1] == 1 && d2[i - j + n] == 1)
        {
            a[i] = j;
            hang[j] = cot[j] = d1[i + j - 1] = d2[i - j + n] = 0;
            if (i == n)
            {
                int ans = 0;
                for (int l = 1; l <= 8; l++)
                {
                    ans += val[l][a[l]];
                }
                res = max(res, ans);
            }
            else
            {
                Try(i + 1);
            }
            hang[j] = cot[j] = d1[i + j - 1] = d2[i - j + n] = 1;
        }
    }
}
void run_test_case()
{
    init();
    Try(1);
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