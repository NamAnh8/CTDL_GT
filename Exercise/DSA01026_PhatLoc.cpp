#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int n, check;
int a[1000];
void khoiTao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 6;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 8)
    {
        a[i] = 6;
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        a[i] = 8;
    }
}
bool solve1()
{
    if ((a[1] == 6 && a[n] == 8) || (a[1] == 6 && a[n] == 6) || (a[1] == 8 && a[n] == 8))
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool solve2()
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 8 && a[i + 1] == 8)
        {
            sum++;
        }
    }
    if (sum > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool solve3()
{
    int sum = 0;
    for (int i = 1; i < n - 2; i++)
    {
        if (a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6)
        {
            sum++;
        }
    }
    if (sum > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int t = 1;
    while (t--)
    {
        cin >> n;
        khoiTao();
        check = 1;
        if (n >= 6)
        {
            while (check)
            {
                if (solve1() == true && solve2() == true && solve3() == true)
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
        else
        {
            return 0;
        }
    }
}
