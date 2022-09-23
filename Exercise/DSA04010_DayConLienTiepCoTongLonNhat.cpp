#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    bool dem = true;
    int Max;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            dem = false;
        if (i == 0)
            Max = a[0];
        else
            Max = max(Max, a[i]);
    }
    if (dem)
    {
        cout << Max << endl;
    }
    else
    {
        int sum = 0;
        int tong = a[0];
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            tong = max(tong, sum);
            if (sum < 0)
                sum = 0;
        }
        cout << tong << endl;
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
