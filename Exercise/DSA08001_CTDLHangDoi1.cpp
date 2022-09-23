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
    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        int ans;
        cin >> ans;
        switch (ans)
        {
        case 1:
            cout << q.size() << endl;
            break;
        case 2:
            if (!q.empty())
                cout << "NO";
            else
                cout << "YES";
            cout << endl;
            break;
        case 3:
            int num;
            cin >> num;
            q.push(num);
            break;
        case 4:
            if (!q.empty())
            {
                q.pop();
            }
            break;
        case 5:
            if (!q.empty())
                cout << q.front() << endl;
            else
                cout << "-1" << endl;
            break;
        case 6:
            if (!q.empty())
                cout << q.back() << endl;
            else
                cout << "-1" << endl;
            break;
        default:
            break;
        }
    }
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