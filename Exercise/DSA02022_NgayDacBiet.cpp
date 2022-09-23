#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
string day[] = {"02", "20", "22"};
string month = "02";
vector<string> year;
vector<string> ans(3);

void getYear(int pos, string s)
{
    if (pos == 0)
    {
        year.push_back(s);
    }
    else
    {
        getYear(pos - 1, s + "0");
        getYear(pos - 1, s + "2");
    }
}
void solve()
{
    ans[1] = month;
    for (auto i : day)
    {
        ans[0] = i;
        for (auto j : year)
        {
            ans[2] = j;
            cout << ans[0] << "/" << ans[1] << "/" << ans[2] << endl;
        }
    }
}
int main()
{
    getYear(3, "2");
    solve();
}
