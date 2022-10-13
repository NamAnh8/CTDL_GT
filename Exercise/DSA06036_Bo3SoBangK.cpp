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
    int n, sol;
    cin >> n >> sol;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    bool check = false;
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        int k = n - 1;
        int x = a[i];
        while (j < k)
        {
            if (x + a[j] + a[k] == sol)
            {
                check = true;
                break;
            }
            else if (x + a[j] + a[k] < sol)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    if (check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
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