#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

void run_test_case()
{
    int n;
    cin >> n;
    int a[n];
    int tong = 0;
    int sum = 0;
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }
    tong -= a[0];
    for (int i = 1; i < n; i++)
    {
        sum += a[i - 1];
        tong -= a[i];
        if (tong == sum)
        {
            cout << i + 1 << endl;
            check = true;
            break;
        }
    }
    if (!check)
    {
        cout << "-1" << endl;
    }
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