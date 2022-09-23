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
vector<int> v;
void init()
{
    queue<string> q;
    q.push("9");
    v.push_back(9);
    while (1)
    {
        string res = q.front();
        q.pop();
        if (res.length() == 10)
            break;
        q.push(res + "0");
        q.push(res + "9");
        v.push_back(stoll(res + "0"));
        v.push_back(stoll(res + "9"));
    }
}
void run_test_case()
{
    int n;
    cin >> n;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % n == 0)
        {
            cout << v[i] << " ";
            break;
        }
    }
    cout << endl;
}
int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        run_test_case();
    }
}