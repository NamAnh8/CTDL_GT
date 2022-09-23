#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
int k;
char c;
string s, x;
void init()
{
    cin >> c >> k;
    for (char i = 'A'; i <= c; i++)
    {
        s.push_back(i);
    }
}
void Try(int i, int count)
{
    for (int j = i; j < s.size(); j++)
    {
        x.push_back(s[j]);
        if (count == k - 1)
            cout << x << endl;
        else
            Try(j, count + 1);
        x.pop_back();
    }
}
int main()
{
    init();
    Try(0, 0);
}
