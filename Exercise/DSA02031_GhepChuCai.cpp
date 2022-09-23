#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
char c;
string s, ans;
vector<int> v;
int n;
void init()
{
    cin >> c;
    for (char i = 'A'; i <= c; i++)
    {
        s.push_back(i);
    }
    n = s.size();
    ans.resize(n + 1, 0);
    v.resize(n + 1, 0);
}
void output()
{
    for (int i = 2; i < ans.size() - 1; i++)
    {
        if (ans[i] == 'A' || ans[i] == 'E')
        {
            if (ans[i + 1] != 'A' && ans[i + 1] != 'E')
            {
                if (ans[i - 1] != 'A' && ans[i - 1] != 'E')
                {
                    return;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!v[j])
        {
            ans[i] = s[j - 1];
            v[j] = 1;
            if (i == n)
            {
                output();
            }
            else
            {
                Try(i + 1);
            }
            v[j] = 0;
        }
    }
}
int main()
{
    init();
    Try(1);
}
