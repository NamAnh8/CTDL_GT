#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[n];
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    if (se.size() == 1)
        cout << "-1";
    else
    {
        sort(a, a + n);
        cout << a[0] << " " << a[1];
    }
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
