#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void run_test_case()
{
    vector<int> v;
    int n, m, k;
    cin >> n >> m >> k;
    int a[n + 5];
    int b[m + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(b[j]);
            j++;
        }
    }
    while (i < n)
    {
        v.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        v.push_back(b[i]);
        j++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i + 1 == k)
        {
            cout << v[i] << endl;
            break;
        }
    }
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
