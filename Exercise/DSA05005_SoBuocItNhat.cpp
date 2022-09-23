#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
void run_test_case()
{
    int ans = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] >= a[j])
            {
                v[i] = max(v[i], v[j] + 1);
            }
        }
        ans = max(ans, v[i]);
    }
    cout << n - ans << endl;
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
