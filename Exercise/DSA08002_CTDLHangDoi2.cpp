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
    string s;
    int n;
    queue<int> q;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            q.push(n);
        }
        else if (s == "PRINTFRONT")
        {
            if (!q.empty())
                cout << q.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POP")
        {
            if (!q.empty())
                q.pop();
        }
    }
}
int main()
{
    run_test_case();
}