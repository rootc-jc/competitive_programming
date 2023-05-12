#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int x = 0;
    cin >> n;
    if (n == 1)
    {
        cout << "1\n";
    }
    else if (n == 2)
    {
        cout << "NO SOLUTION\n";
    }
    else if (n == 3)
    {
        cout << "NO SOLUTION\n";
    }
    else if (n == 4)
    {
        cout << "3 1 4 2\n";
    }
    else
    {
        x = 1;
        while (x <= n)
        {
            cout << x << " ";
            x = x + 2;
        }
        x = 2;
        while (x <= n)
        {
            cout << x << " ";
            x = x + 2;
        }
    }
}