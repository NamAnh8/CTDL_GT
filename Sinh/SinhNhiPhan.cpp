#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, a[100], check;
void khoiTao()
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
void run_test_case()
{
    cin >> n;
    khoiTao();
    check = 1;
    while (check)
    {
        for (int i = 1; i <= n; i++)
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