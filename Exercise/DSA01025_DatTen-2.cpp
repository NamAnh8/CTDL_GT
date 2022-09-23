#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n, k;
int a[100];
char s[50];
vector<string> res;
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
        {
            int dem = 0;
            for (int p = 0; p < n; p++)
            {
                if (a[p] == 1)
                {
                    dem++;
                }
            }
            if (dem == k)
            {
                string temp;
                for (int p = 0; p < n; p++)
                {
                    if (a[p] == 1)
                        temp += s[p];
                }
                res.push_back(temp);
            }
        }
        else
        {
            Try(i + 1);
        }
    }
}
void in()
{
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            s[i] = char(int('A') + i);
        }
        res.clear();
        Try(0);
        in();
    }
}
