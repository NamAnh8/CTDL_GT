#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
int n, k;
vector<vector<int>> v;
int a[1005];
int b[1005];
void init()
{
    v.clear();
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == n)
        {
            int sum = 0;
            for (int l = 1; l <= n; l++)
            {
                if (b[l])
                    sum += a[l];
            }
            if (sum == k)
            {
                vector<int> x;
                for (int l = 1; l <= n; l++)
                {
                    if (b[l])
                        x.push_back(a[l]);
                }
                v.push_back(x);
            }
        }
        else
        {
            Try(i + 1);
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
        Try(1);
        if (v.size() == 0)
            cout << -1 << endl;
        else
        {
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++)
            {
                cout << "[";
                for (int j = 0; j < v[i].size() - 1; j++)
                {
                    cout << v[i][j] << " ";
                }
                cout << v[i][v[i].size() - 1] << "]";
                cout << " ";
            }
            cout << endl;
        }
    }
}
