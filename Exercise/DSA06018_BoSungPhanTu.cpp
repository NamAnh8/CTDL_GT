#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
using namespace std;
void run_test_case()
{
    int b[100005];
    memset(b, 0, sizeof(b));
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    sort(a, a + n);
    int l = a[0];
    int r = a[n - 1];
    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        if (b[i] == 0)
            ans++;
    }
    cout << ans << endl;
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