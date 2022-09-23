#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int x[10005];
bool check(int a, int b)
{
    if (x[a] != x[b])
        return x[a] > x[b];
    else
        return a < b;
}
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    memset(x, 0, sizeof(x));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x[a[i]]++;
    }
    sort(a, a + n, check);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        run_test_case();
    }
}
