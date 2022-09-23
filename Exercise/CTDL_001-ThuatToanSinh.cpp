#include <iostream>
#include <math.h>
using namespace std;
int a[100], n, check;
void khoiTao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        a[i] = 1;
    }
}
bool Check()
{
    int l = 1;
    int r = n;
    while (l < r)
    {
        if (a[l] != a[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main()
{
    cin >> n;
    khoiTao();
    check = 1;
    while (check)
    {
        if (Check())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
}
