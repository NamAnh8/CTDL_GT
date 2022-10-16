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
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
            cout << s[i];
        else
        {
            if (s[i] != s[i - 1])
                cout << 1;
            else
                cout << 0;
        }
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