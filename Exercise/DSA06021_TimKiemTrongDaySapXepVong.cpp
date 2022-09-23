#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
using namespace std;
void run_test_case()
{
    int n, x, val;
    cin >> n >> x;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val == x)
        {
            idx = i;
        }
    }
    cout << idx + 1 << endl;
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
