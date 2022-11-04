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
    int n;
    cin >> n;
    int a[n + 5];
    vector<int> odd;
    vector<int> even;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());
    int i = 0, j = 0;
    while (i < odd.size() && j < even.size())
    {
        cout << odd[i] << " " << even[j] << " ";
        i++;
        j++;
    }
    while (i < odd.size())
    {
        cout << odd[i] << " ";
        i++;
    }
    while (j < even.size())
    {
        cout << even[i] << " ";
        i++;
    }
    cout << endl;
}
int main()
{
    run_test_case();
}