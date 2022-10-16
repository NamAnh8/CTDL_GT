#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;
int n, check;
string s;
void sinh()
{
    int i = s.length() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
    {
        i--;
    }
    if (i == -1)
    {
        check = 0;
    }
    else
    {
        int j = s.length() - 1;
        while (s[i] >= s[j])
        {
            j--;
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}
void run_test_case()
{
    cin >> n >> s;
    check = 1;
    sinh();
    cout << n << " ";
    if (check)
    {
        cout << s << endl;
    }
    else
    {
        cout << "BIGGEST" << endl;
    }
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