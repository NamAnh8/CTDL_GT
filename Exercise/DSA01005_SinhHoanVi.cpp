#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int n, a[100], check;
void khoiTao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        int l = i + 1;
        int r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        khoiTao();
        check = 1;
        while (check)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}
