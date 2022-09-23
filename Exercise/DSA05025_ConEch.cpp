#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    ll a[105] = {0};
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for (int i = 4; i <= 100; i++)
    {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    cout << a[n] << endl;
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
