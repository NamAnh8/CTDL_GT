#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
void run_test_case()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v(s + 1, 0);
    v[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= a[i]; j--)
        {
            if (v[j - a[i]] == 1)
                v[j] = 1;
        }
    }
    if (v[s])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
