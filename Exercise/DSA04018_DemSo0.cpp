#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = lower_bound(a, a + n, 1) - a;
        cout << ans << endl;
    }
}
