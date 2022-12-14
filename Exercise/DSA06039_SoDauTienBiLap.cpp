#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] > 1)
        {
            cout << a[i];
            check = 1;
            break;
        }
    }
    if (!check)
    {
        cout << "NO";
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