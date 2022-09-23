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

void khoiTao()
{
    queue<string> q;
    v.push_back("1");
    q.push("1");
    while (v.size() < 10000)
    {
        string res = q.front();
        q.pop();
        v.push_back(res + "0");
        v.push_back(res + "1");
        q.push(res + "0");
        q.push(res + "1");
    }
}
void run_test_case()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    khoiTao();
    while (t--)
    {
        run_test_case();
    }
}