#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

void run_test_case()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    auto it = lower_bound(a, a + n, x);
    // tim vi tri dau tien cua phan tu >= x
    cout << *it << endl;
    cout << it - a << endl;
}
int main()
{
    run_test_case();
}