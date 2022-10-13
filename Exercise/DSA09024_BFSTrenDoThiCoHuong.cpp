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
int n, m, k;
vector<int> adj[1005];
bool check[1005];
void in()
{
    for (int i = 0; i < 1005; i++)
    {
        adj[i].clear();
    }
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(check, false, sizeof(check));
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
        cout << v << " ";
        for (auto x : adj[v])
        {
            if (!check[x])
            {
                check[x] = true;
                q.push(x);
            }
        }
    }
}
void run_test_case()
{
    in();
    bfs(k);
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