#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
using namespace std;
void insertion(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int pos = i - 1;
        int x = a[i];
        while (pos >= 0 && x < a[pos])
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
void run_test_case()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insertion(a, n);
}
int main()
{
    run_test_case();
}
