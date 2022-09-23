#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
using namespace std;
void run_test_case()
{
    vector<vector<int>> ans;
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min_pos] > a[j])
                min_pos = j;
        }
        swap(a[i], a[min_pos]);
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(a[j]);
        }
        ans.push_back(v);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Buoc " << ans.size() - i << ": ";
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
