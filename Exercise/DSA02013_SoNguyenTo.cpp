#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, p, s, a[1005], idx, sum;
vector<int> v;
vector<vector<int>> ans;
vector<int> tmp;
bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
void init()
{
    idx = 0;
    sum = 0;
    ans.clear();
    tmp.clear();
    cin >> n >> p >> s;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= p)
        {
            idx = i;
            break;
        }
    }
}
void Try(int i)
{
    for (int j = i + 1; j < v.size(); j++)
    {
        sum += v[j];
        tmp.push_back(v[j]);
        if (sum == s && tmp.size() == n)
            ans.push_back(tmp);
        else if (sum < s)
            Try(j);
        sum -= v[j];
        tmp.pop_back();
    }
}
void run_test_case()
{
    init();
    Try(idx);
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (auto x : ans)
    {
        for (auto i : x)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main()
{
    for (int i = 2; i <= 300; i++)
    {
        if (snt(i))
        {
            v.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        run_test_case();
    }
}