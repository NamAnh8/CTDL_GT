#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, a[105], used[105];
void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0)
        {
            a[i] = j;
            used[j] = 1;
            if (i == n)
            {
                in();
            }
            else
            {
                Try(i + 1);
            }
            used[j] = 0;
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
}