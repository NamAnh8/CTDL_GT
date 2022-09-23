#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    vector<int> v(sum / 2 + 1, 0);
    if (sum % 2 == 1)
        cout << "NO" << endl;
    else
    {
        v[0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = sum / 2; j >= a[i]; j--)
            {
                if (v[j - a[i]] == 1)
                    v[j] = 1;
            }
        }
        if (v[sum / 2] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
