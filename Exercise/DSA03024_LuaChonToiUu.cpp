#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
struct data
{
    int fi, se;
};
data h[100005];

bool compare(data a, data b)
{
    return a.se < b.se;
}
void run_test_case()
{
    int n;
    cin >> n;
    // int a[1005], b[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i].fi >> h[i].se;
    }
    sort(h, h + n, compare);
    int count = 1;
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (h[j].fi >= h[i].se)
        {
            count++;
            i = j;
        }
    }

    cout << count << endl;
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