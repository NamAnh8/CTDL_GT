#include <iostream>
#include <math.h>
#include <map>
#include <list>
using namespace std;
void run_test_case()
{
    int n;
    list<int> a;
    cin >> n;
    int temp;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
        mp[temp]++;
        if (mp[temp] == 1)
        {
            cout << temp << " ";
        }
    }
}
int main()
{
    run_test_case();
}
