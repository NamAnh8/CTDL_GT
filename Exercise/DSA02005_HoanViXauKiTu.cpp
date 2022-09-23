#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
int a[105], b[105];
string s;
void Try(int i)
{
    for (int j = 0; j < s.length(); j++)
    {
        if (b[j] == 0)
        {
            a[i] = j;
            b[j] = 1;
            if (i == s.length())
            {
                for (int k = 1; k <= s.length(); k++)
                {
                    cout << s[a[k]];
                }
                cout << " ";
            }
            else
            {
                Try(i + 1);
            }
            b[j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        sort(s.begin(), s.end());
        Try(1);
        cout << endl;
    }
}
