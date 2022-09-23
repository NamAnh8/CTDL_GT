#include <iostream>
#include <math.h>
#include <set>
using namespace std;
void run_test_case()
{
    multiset<int> se;
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    for (auto x : se)
        cout << x << " ";
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
