#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
struct ToaDo
{
    int fi, se;
};
bool compare(ToaDo x1, ToaDo x2)
{
    return x1.se < x2.se;
}
void run_test_case()
{
    ToaDo a[100005];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a, a + n, compare);
    int count = 1;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j].fi >= a[i].se)
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