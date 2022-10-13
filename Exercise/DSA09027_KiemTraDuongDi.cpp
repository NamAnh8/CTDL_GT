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
int n, m, u, v;
vector<int> adj[1005];
bool check[1005];
int parent[1005];
void in()
{
    for (int i = 0; i < 1005; i++)
    {
        adj[i].clear();
    }
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(check, false, sizeof(check));
    memset(parent, 0, sizeof(parent));
}
void dfs(int u)
{
    check[u] = true;
    for (auto x : adj[u])
    {
        if (!check[x])
        {
            parent[x] = u;
            dfs(x);
        }
    }
}
void Path(int u, int v)
{
    dfs(u);
    if (!check[v])
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
void run_test_case()
{
    in();
    int pos;
    cin >> pos;
    while (pos--)
    {
        cin >> u >> v;
        Path(u, v);
        cout << endl;
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