#include <iostream>
#include <math.h>
#include <set>
using namespace std;
int check;
string s;
void sinh()
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '0')
    {
        s[i] = '1';
        i--;
    }
    if (i == -1)
    {
        check = 0;
    }
    else
    {
        s[i] = '0';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        sinh();
        check = 1;
        if (check)
        {
            cout << s;
        }
        cout << endl;
    }
}
