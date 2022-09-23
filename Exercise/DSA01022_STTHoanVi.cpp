#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int n, check, a[1000];
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
bool Check(int b[1000])
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == b[i])
        {
            sum++;
        }
    }
    if (sum == n)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        khoiTao();
        int b[1000];
        check = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        int count = 1;
        while (check)
        {
            if (Check(b))
            {
                break;
            }
            else
            {
                count++;
            }
            sinh();
        }
        cout << count << endl;
    }
}
