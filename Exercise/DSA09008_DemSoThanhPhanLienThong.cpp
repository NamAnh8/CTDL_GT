#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>
#define ll long long
using namespace std;
int n, m;
vector<int> adj[1005];
bool check[1005];
void init()
{
    cin >> n >> m;
    for (int i = 0; i < 1005; i++)
    {
        adj[i].clear();
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(check, false, sizeof(check));
}
void dfs(int u)
{
    check[u] = true;
    for (auto x : adj[u])
    {
        if (!check[x])
        {
            dfs(x);
        }
    }
}
void run_test_case()
{
    init();
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << endl;
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