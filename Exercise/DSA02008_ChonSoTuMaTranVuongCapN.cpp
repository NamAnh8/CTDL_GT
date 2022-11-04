#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, k, check, a[50], mt[50][50];
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
void run_test_case()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mt[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    vector<vector<int>> v;
    check = 1;
    while (check)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += mt[i][a[i]];
        }
        if (sum == k)
        {
            vector<int> temp;
            for (int i = 1; i <= n; i++)
            {
                temp.push_back(a[i]);
            }
            v.push_back(temp);
        }
        sinh();
    }
    cout << v.size() << endl;
    for (vector<int> it : v)
    {
        for (int x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
int main()
{
    run_test_case();
}