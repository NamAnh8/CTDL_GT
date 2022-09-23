#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
void run_test_case()
{
    vector<int> v;
    multiset<int> se1;
    multiset<int> se2;
    set<int> se3;
    int n, m;
    cin >> n >> m;
    int a[n + 5], b[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se1.insert(a[i]);
        se3.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        se2.insert(b[i]);
        se3.insert(b[i]);
    }
    for (auto x : se1)
    {
        if (se2.find(x) != se2.end())
        {
            v.push_back(x);
        }
    }
    for (auto x : se3)
        cout << x << " ";
    cout << endl;
    for (auto x : v)
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
