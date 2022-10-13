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
int n, m, k;
vector<int> adj[1005];
bool check[1005];
void in()
{
    cin >> n >> m >> k;
    for (int i = 0; i < 1005; i++)
    {
        adj[i].clear();
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(check, false, sizeof(check));
}
void dfs(int u)
{
    cout << u << " ";
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
    in();
    dfs(k);
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