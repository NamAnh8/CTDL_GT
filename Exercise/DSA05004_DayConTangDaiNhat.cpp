#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                v[i] = max(v[i], v[j] + 1);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v[v.size() - 1] << endl;
}
int main()
{
    run_test_case();
}
