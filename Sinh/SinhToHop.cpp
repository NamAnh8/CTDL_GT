#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, a[105], k, check;
void khoiTao()
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
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
void run_test_case()
{
    cin >> n >> k;
    khoiTao();
    check = 1;
    while (check)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
        sinh();
        cout << endl;
    }
}
int main()
{
    run_test_case();
}