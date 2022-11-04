#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <queue>
#include <cstring>
#define ll long long
using namespace std;

void run_test_case()
{
    priority_queue<int, vector<int>> q;
    string s;
    ll k;
    cin >> k >> s;
    ll cnt[s.length() + 5];
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (cnt[s[i]] > 0)
        {
            q.push(cnt[s[i]]);
            cnt[s[i]] = 0;
        }
    }
    while (q.size() > 0 && k > 0)
    {
        k--;
        ll top = q.top();
        q.pop();
        top--;
        q.push(top);
    }
    ll ans = 0;
    while (q.size() > 0)
    {
        ll top = q.top();
        ans += top * top;
        q.pop();
    }
    cout << ans << endl;
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