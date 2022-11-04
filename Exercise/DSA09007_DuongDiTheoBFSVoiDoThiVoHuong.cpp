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
int n, m, u, v;
bool check[1005];
vector<int> adj[1005];
int parent[1005];
void init()
{
    for (int i = 0; i < 1005; i++)
    {
        adj[i].clear();
    }
    cin >> n >> m >> u >> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(check, false, sizeof(check));
    memset(parent, 0, sizeof(parent));
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u] = true;
    while (q.size() > 0)
    {
        int v = q.front();
        q.pop();
        for (auto x : adj[v])
        {
            if (!check[x])
            {
                check[x] = true;
                q.push(x);
                parent[x] = v;
            }
        }
    }
}
void Path(int u, int v)
{
    bfs(u);
    if (!check[v])
    {
        cout << -1;
    }
    else
    {
        vector<int> path;
        while (u != v)
        {
            path.push_back(v);
            v = parent[v];
        }
        path.push_back(u);
        reverse(path.begin(), path.end());
        for (auto x : path)
        {
            cout << x << " ";
        }
    }
    cout << endl;
}
void run_test_case()
{
    init();
    Path(u, v);
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