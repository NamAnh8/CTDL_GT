#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
void run_test_case()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int b = n - i;
        if (prime(i) && prime(b))
        {
            count = 1;
            cout << i << " " << b;
            break;
        }
    }
    if (count == 0)
        cout << "-1";
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
