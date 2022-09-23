#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
using namespace std;
bool cmp(vector<int> a, vector<int> b)
{
    return a.size() > b.size();
}
void run_test_case()
{
    vector<vector<int>> ans;
    vector<int> v;
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    v.push_back(a[0]);
    ans.push_back(v);
    v.clear();
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1, x = a[i];
        while (pos >= 0 && x < a[pos])
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
        for (int j = 0; j <= i; j++)
        {
            v.push_back(a[j]);
        }
        ans.push_back(v);
        v.clear();
    }
    sort(ans.begin(), ans.end(), cmp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Buoc " << ans.size() - i - 1 << ": ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    run_test_case();
}
