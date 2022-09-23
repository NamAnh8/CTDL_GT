#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans1 = a[0] * a[1];
    int ans2 = a[n - 1] * a[n - 2];
    int ans3 = a[n - 1] * a[n - 2] * a[n - 3];
    int ans4 = a[0] * a[1] * a[n - 1];
    int max1 = max(ans1, ans2);
    int max2 = max(ans3, ans4);
    int max3 = max(max1, max2);
    cout << max3 << endl;
}
int main()
{
    run_test_case();
}
