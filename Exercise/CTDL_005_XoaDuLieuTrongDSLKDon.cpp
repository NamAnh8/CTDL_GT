#include <iostream>
#include <math.h>
#include <list>
using namespace std;
list<int> a;
int n, k;
void run_test_case()
{
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    cin >> k;
    a.remove(k);
    for (auto i : a)
    {
        cout << i << " ";
    }
}
int main()
{
    run_test_case();
}
