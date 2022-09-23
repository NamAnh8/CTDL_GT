#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
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
        bool check = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                check = true;
            }
        }
        if (check)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++)
            {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    run_test_case();
}
