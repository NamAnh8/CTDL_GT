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
int n, m, u, v;
vector<int> adj[1005];
bool check[1005];
int parent[1005];
void in()
{
    adj[1005].clear();
    cin >> n >> m >> u >> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(check, false, sizeof(check));
    memset(parent, 0, sizeof(parent));
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    check[u] = true;
    while (!q.empty())
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
        cout << "-1";
    }
    else
    {
        vector<int> path;
        while (v != u)
        {
            path.push_back(v);
            v = parent[v];
        }
        path.push_back(u);
        reverse(path.begin(), path.end());
        for (int x : path)
        {
            cout << x << " ";
        }
    }
}
void run_test_case()
{
    in();
    Path(u, v);
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