#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <set>
#define ll long long
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = a[0] + a[1];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[i] + a[j]) < abs(sum))
                sum = a[i] + a[j];
        }
    }
    cout << sum << endl;
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
