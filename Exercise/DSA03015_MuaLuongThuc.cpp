#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
void run_test_case()
{
    int n, s, m;
    cin >> n >> s >> m;
    if ((n < m) || (s * m > (s - s / 7) * n))
    {
        cout << "-1" << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= s - s / 7; i++)
        {
            if (n * i >= s * m)
            {
                cout << i;
                break;
            }
        }
        cout << endl;
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
