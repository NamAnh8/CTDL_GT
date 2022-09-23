#include <iostream>
#include <math.h>
using namespace std;
int a[100], n, k, check;
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i != 0)
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
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
        cin >> n >> k;
        check = 1;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        sinh();
        if (check != 0)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
