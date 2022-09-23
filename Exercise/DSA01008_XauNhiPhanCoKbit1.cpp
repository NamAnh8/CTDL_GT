#include <iostream>
#include <math.h>
using namespace std;
int n, check, a[100];
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
bool Check(int k)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
    }
    if (sum == k)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> n >> k;
        check = 1;
        khoiTao();
        while (check)
        {
            if (Check(k))
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
        }
    }
}
