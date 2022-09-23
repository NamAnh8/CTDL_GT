#include <iostream>
#include <math.h>
using namespace std;
void solve(int a[], int n)
{
    if (n > 0)
    {
        cout << "[";
        for (int i = 0; i < n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[n - 1] << "]" << endl;
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i] + a[i + 1];
        }
        solve(a, n - 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1005];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a, n);
    }
}
