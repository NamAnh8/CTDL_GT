#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int n;
vector<int> v;
vector<int> ans;
void init()
{
    cin >> n;
    v.resize(n + 1, 0);
    ans.resize(n);
}
void output()
{
    for (auto x : ans)
        cout << x;
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!v[j])
        {
            ans[i] = j;
            if (i > 0 && abs(ans[i] - ans[i - 1]) == 1)
                continue;
            v[j] = 1;
            if (i == n - 1)
                output();
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
