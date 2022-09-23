#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;
void run_test_case()
{
    map<char, int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    int max = 0;
    for (auto x : mp)
    {
        if (x.second > max)
            max = x.second;
    }
    if (s.size() - max >= max - 1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
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
