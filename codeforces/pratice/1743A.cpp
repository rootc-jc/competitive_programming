#include <bits/stdc++.h>
using namespace std;

int selection(int a)
{
    return a * (a - 1) / 2;
}

int main()
{
    int t = 0;
    int n = 0;
    int x = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
        }
        cout<<6*selection(10-n)<<"\n";
    }
}