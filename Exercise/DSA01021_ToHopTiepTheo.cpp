#include <iostream>
#include <math.h>
#include <set>

using namespace std;
int n, k, check, a[1000], b[1000];
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
            b[i] = a[i];
        }
        sinh();
        int sum = 0;
        if (check)
        {
            for (int i = 1; i <= k; i++)
            {
                int count = 0;
                for (int j = 1; j <= k; j++)
                {
                    if (a[j] != b[i])
                    {
                        count++;
                    }
                }
                if (count == k)
                {
                    sum++;
                }
            }
            cout << sum << endl;
        }
        else
        {
            cout << k << endl;
        }
    }
}
