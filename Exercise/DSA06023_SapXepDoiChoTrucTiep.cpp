#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    run_test_case();
}