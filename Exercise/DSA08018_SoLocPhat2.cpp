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
vector<string> v;
vector<string> res;

void init()
{
    v.clear();
    res.clear();
    int n;
    cin >> n;
    queue<string> q;
    v.push_back("6");
    v.push_back("8");
    q.push("6");
    q.push("8");
    while (1)
    {
        string res = q.front();
        q.pop();
        if (res.size() >= n)
        {
            break;
        }
        v.push_back(res + "6");
        v.push_back(res + "8");
        q.push(res + "6");
        q.push(res + "8");
    }
}
void run_test_case()
{
    init();
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        res.push_back(v[i]);
        count++;
    }
    cout << count << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
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