#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
using namespace std;
void run_test_case()
{
    multiset<int> se;
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        se.insert(a[i]);
    }
    cout << *se.rbegin() << " ";
    for (int i = k; i < n; i++)
    {
        se.erase(se.find(a[i - k]));
        se.insert(a[i]);
        cout << *se.rbegin() << " ";
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