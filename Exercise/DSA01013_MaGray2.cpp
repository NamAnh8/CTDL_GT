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
    string s, bin = "";
    cin >> s;
    bin = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        int n = bin.size() - 1;
        if (bin[n] != s[i])
            bin += "1";
        else
            bin += "0";
    }
    cout << bin << endl;
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