#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[105], b[105];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int check = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[i] != b[n - i - 1])
        {
            check = 0;
            break;
        }
    }
    if (check)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
