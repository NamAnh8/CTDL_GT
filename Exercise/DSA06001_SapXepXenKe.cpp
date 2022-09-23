#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int i = 0;
    int j = n - 1;
    while (i < n / 2 && j >= n / 2)
    {
        cout << a[j] << " " << a[i] << " ";
        i++;
        j--;
    }
    if (n % 2 == 1)
        cout << a[n / 2];
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
