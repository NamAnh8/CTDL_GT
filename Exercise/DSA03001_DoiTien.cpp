#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            count += n / a[i];
            n %= a[i];
        }
        cout << count << endl;
    }
}
