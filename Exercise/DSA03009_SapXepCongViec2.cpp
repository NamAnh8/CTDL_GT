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
struct data
{
    int deadline, profit;
};
bool cmp(data a, data b)
{
    return a.profit > b.profit;
}
void run_test_case()
{
    int n;
    cin >> n;
    data h[n + 5];
    for (int i = 0; i < n; i++)
    {
        int stt;
        cin >> stt >> h[i].deadline >> h[i].profit;
    }
    sort(h, h + n, cmp);
    int cnt = 0, res = 0;
    int check[1005];
    memset(check, 0, sizeof(check));
    for (int i = 0; i < n; i++)
    {
        while (check[h[i].deadline] && h[i].deadline > 0)
            h[i].deadline--;
        if (!check[h[i].deadline] && h[i].deadline > 0)
        {
            check[h[i].deadline] = 1;
            res += h[i].profit;
            cnt++;
        }
    }
    cout << cnt << " " << res << endl;
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