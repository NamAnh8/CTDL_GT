#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <set>
#define ll long long
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    string s;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += to_string(a[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        int temp = s[i] - '0';
        se.insert(temp);
    }
    for (auto x : se)
        cout << x << " ";
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
