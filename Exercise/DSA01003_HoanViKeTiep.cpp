#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

int n, a[1000], check;
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i != 0)
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
    else
    {
        check = 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        check = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sinh();
        if (check)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
