#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

bool binary_search(int a[], int l, int r, int x)
{
    if (l > r)
        return false;
    int m = (l + r) / 2;
    if (a[m] == x)
        return true;
    else if (a[m] < x)
        return binary_search(a, m + 1, r, x);
    else
        return binary_search(a, l, m - 1, x);
}
void run_test_case()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (binary_search(a, 0, n - 1, x))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
int main()
{
    run_test_case();
}