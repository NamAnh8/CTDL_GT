#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>
#include <queue>
#define ll long long
using namespace std;

void run_test_case()
{
    int k;
    string s;
    cin >> k >> s;
    int cnt[1005];
    memset(cnt, 0, sizeof(cnt));
    priority_queue<int, vector<int>> q;
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
    while (k > 0 && q.size() > 0)
    {
        k--;
        int top = q.top();
        q.pop();
        top--;
        q.push(top);
    }
    ll ans = 0;
    while (q.size() > 0)
    {
        int top = q.top();
        q.pop();
        ans += top * top;
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