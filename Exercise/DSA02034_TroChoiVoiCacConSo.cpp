#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<int> v;
vector<int> a;
void init()
{
    cin >> n;
    v.resize(n + 1, 0);
    a.resize(n);
}
void Solve()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!v[j])
        {
            a[i] = j;
            if (i > 0 && abs(a[i] - a[i - 1]) == 1)
                continue;
            v[j] = 1;
            if (i == n - 1)
            {
                Solve();
            }
            else
            {
                Try(i + 1);
            }
            v[j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        Try(0);
    }
}
