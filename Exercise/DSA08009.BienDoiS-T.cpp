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

void run_test_case()
{
    int s, t;
    cin >> s >> t;
    queue<int> q;
    q.push(s);
    int cnt = 0;
    while (!q.empty())
    {
        int top = q.front();
        q.pop();
        if (top < t)
        {
            cnt++;
            q.push(top * 2);
        }
        else if (top > 0)
        {
            cnt++;
            q.push(top - 1);
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