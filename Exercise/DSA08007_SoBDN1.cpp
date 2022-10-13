#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;
vector<ll> v;

void khoiTao()
{
    ll n;
    cin >> n;
    queue<ll> q;
    q.push(1);
    int cnt = 0;
    while (q.front() <= n)
    {
        ll res = q.front();
        cnt++;
        q.pop();
        q.push(res * 10);
        q.push(res * 10 + 1);
    }
    cout << cnt << endl;
}
void run_test_case()
{
    khoiTao();
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