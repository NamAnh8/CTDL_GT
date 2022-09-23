#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int n, k, check, a[1000];
void khoiTao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
bool Check(int b[1000])
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        if (a[i] == b[i])
        {
            sum++;
        }
    }
    if (sum == k)
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
        cin >> n >> k;
        khoiTao();
        int b[1000];
        check = 1;
        for (int i = 1; i <= k; i++)
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
