#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
void run_test_case()
{
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    int b[1005];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    if (b[k] == 0)
        cout << "-1";
    else
        cout << b[k];
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
