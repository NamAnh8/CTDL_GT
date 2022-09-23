#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
void run_test_case()
{
    vector<int> v;
    int n, m, k;
    cin >> n >> m >> k;
    int a[100005], b[100005], c[100005];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < k; i++)
        cin >> c[i];
    int i = 0, j = 0, x = 0;
    while (i < n && j < m && x < k)
    {
        if (a[i] == b[j] && b[j] == c[x])
        {
            v.push_back(a[i]);
            i++;
            j++;
            x++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < c[x])
            j++;
        else
            x++;
    }
    if (v.empty())
    {
        cout << "NO" << endl;
        return;
    }
    for (auto y : v)
    {
        cout << y << " ";
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
