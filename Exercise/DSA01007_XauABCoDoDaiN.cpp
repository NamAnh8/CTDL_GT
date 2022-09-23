#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int n, a[100], check;
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        khoiTao();
        check = 1;
        while (check)
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 0)
                {
                    cout << "A";
                }
                else
                {
                    cout << "B";
                }
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}
