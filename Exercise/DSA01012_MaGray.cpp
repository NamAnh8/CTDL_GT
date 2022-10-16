#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

void run_test_case()
{
    int n;
    cin >> n;
    int range = 2;
    for (int i = 1; i <= n; i++)
    {
        range *= 2;
    }
    string s[10005];
    s[1] = "0";
    s[2] = "1";
    if (n > 1)
    {
        int vt = 2;
        for (int i = 2; i <= n; i++)
        {
            int k = pow(2, i);
            for (int j = 1; j <= vt; j++)
            {
                s[k - j + 1] = "1" + s[j];
                s[j] = "0" + s[j];
            }
            vt = k;
        }
        for (int i = 2; i <= range; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
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