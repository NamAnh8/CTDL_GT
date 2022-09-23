#include <iostream>
#include <math.h>
#include <string>
using namespace std;
string a, b;
string Sum()
{
    while (a.size() > b.size())
        b = '0' + b;
    while (b.size() > a.size())
        a = '0' + a;
    int len = a.size();
    string res = "";
    int du = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int so = int(a[i] - '0') + int(b[i] - '0') + du;
        res = char(so % 10 + '0') + res;
        du = so / 10;
    }
    if (du > 0)
        return char(du + '0') + res;
    return res;
}
void run_test_case()
{
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '6')
            a[i] = '5';
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '6')
            b[i] = '5';
    }
    cout << Sum() << " ";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '5')
            b[i] = '6';
    }
    cout << Sum() << endl;
}
int main()
{
    run_test_case();
}
