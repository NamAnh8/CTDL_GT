#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void Try(int i, char a, char b, char c)
{
    if (i == 1)
    {
        cout << a << " -> " << c << endl;
        return;
    }
    Try(i - 1, a, c, b);
    Try(1, a, b, c);
    Try(i - 1, b, a, c);
}
void run_test_case()
{
    int n;
    cin >> n;
    Try(n, 'A', 'B', 'C');
}
int main()
{
    run_test_case();
}
