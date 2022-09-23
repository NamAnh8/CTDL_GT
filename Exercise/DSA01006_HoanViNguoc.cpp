#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[100];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            a[i] = n - i;
        }
        do
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i];
            }
            cout << " ";
        } while (prev_permutation(a, a + n));
        cout << endl;
    }
}
