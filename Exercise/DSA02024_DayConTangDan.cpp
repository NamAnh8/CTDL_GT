#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<string> v;
int a[1005] = {0};
void Try(int i, string s, int count)
{
    for (int j = i + 1; j <= n; j++)
    {
        if (a[i] < a[j])
        {
            if (count > 0)
            {
                v.push_back(s + to_string(a[j]) + " ");
            }
            Try(j, s + to_string(a[j]) + " ", count + 1);
        }
    }
}
void run_test_case()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(0, "", 0);
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << endl;
}
int main()
{
    run_test_case();
}
