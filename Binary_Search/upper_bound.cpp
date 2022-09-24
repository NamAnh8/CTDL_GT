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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    auto it = upper_bound(a.begin(), a.end(), x);
    // tim phan tu dau tien > x
    cout << *it << endl;
    cout << it - a.begin() << endl;
}
int main()
{
    run_test_case();
}