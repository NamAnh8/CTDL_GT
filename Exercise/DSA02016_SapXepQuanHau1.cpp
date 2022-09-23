#include <iostream>
#include <math.h>
using namespace std;
int n, a[1005], cot[1005], d1[1005], d2[1005], cnt = 0;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1)
        {
            a[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            if (i == n)
            {
                cnt++;
            }
            else
            {
                Try(i + 1);
            }
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
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
        cnt = 0;
        for (int i = 1; i <= n * n; i++)
        {
            cot[i] = d1[i] = d2[i] = 1;
        }
        Try(1);
        cout << cnt << endl;
    }
}
