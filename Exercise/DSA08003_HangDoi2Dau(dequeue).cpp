#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <deque>
#define ll long long
using namespace std;

void run_test_case()
{
    string s;
    int n;
    deque<int> de;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "PUSHFRONT")
        {
            int n;
            cin >> n;
            de.push_front(n);
        }
        else if (s == "PRINTFRONT")
        {
            if (!de.empty())
                cout << de.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPFRONT")
        {
            if (!de.empty())
                de.pop_front();
        }
        else if (s == "PUSHBACK")
        {
            int n;
            cin >> n;
            de.push_back(n);
        }
        else if (s == "PRINTBACK")
        {
            if (!de.empty())
                cout << de.back() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPBACK")
        {
            if (!de.empty())
                de.pop_back();
        }
    }
}
int main()
{
    run_test_case();
}