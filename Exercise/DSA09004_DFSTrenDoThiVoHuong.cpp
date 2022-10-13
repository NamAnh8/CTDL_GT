#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <cstring>
#include <algorithm>
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
        adj[y].push_back(x);
    }
    memset(check, false, sizeof(check));
}
void dfs(int k)
{
    cout << k << " ";
    check[k] = true;
    for (int x : adj[k])
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