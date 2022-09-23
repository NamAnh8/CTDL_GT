#include <iostream>
#include <math.h>
#include <queue>
#include <algorithm>
using namespace std;
void run_test_case()
{
    priority_queue<long long, vector<long long>, greater<long long>> a;
    int n;
    cin >> n;
    long long temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push(temp);
    }
    long long sum = 0;
    while (a.size() > 1)
    {
        long long x = a.top();
        a.pop();
        long long y = a.top();
        a.pop();
        a.push(x + y);
        sum += x + y;
    }
    cout << sum << endl;
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
