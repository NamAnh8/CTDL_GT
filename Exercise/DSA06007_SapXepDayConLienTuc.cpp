#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    int b[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            r = i;
            break;
        }
    }
    cout << l + 1 << " " << r + 1;
    cout << endl;
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
