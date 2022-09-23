#include <iostream>
#include <math.h>
#include <string>
using namespace std;
string a;
void sinh()
{
    int i = a.length() - 1;
    while (i >= 0 && a[i] == '1')
    {
        a[i] = '0';
        i--;
    }
    if (i != -1)
    {
        a[i] = '1';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a;
        sinh();
        cout << a;
        cout << endl;
    }
}
