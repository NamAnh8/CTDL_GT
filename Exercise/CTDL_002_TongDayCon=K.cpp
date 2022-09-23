#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int check;
void sinh(int a[1000], int n)
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
bool Check(int a[1000], int b[1000], int n, int k)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
        {
            sum += a[i];
        }
    }
    if (sum == k)
        return true;
    return false;
}
int main()
{
    int n, k;
    cin >> n >> k;
    check = 1;
    int a[1000];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int b[1000] = {0};
    int count = 0;
    while (check)
    {
        if (Check(a, b, n, k))
        {
            for (int i = 1; i <= n; i++)
            {
                if (b[i] == 1)
                {
                    cout << a[i] << " ";
                }
            }
            cout << endl;
            count++;
        }
        sinh(b, n);
    }
    cout << count << endl;
}
