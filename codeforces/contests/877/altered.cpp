#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    vector<int> p;
    vector<int> iter;
    int x = 0;
    int y = 0;
    int z = 0;
    int mini = 0;
    int maxi = 0;
    int longest = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            p.push_back(x);
            iter.push_back(0);
        }
        x = 0;
        while (p[x] != 1)
        {
            x++;
        }
        y = 0;
        while (p[y] != 2)
        {
            y++;
        }
        z = 0;
        while (p[z] != n)
        {
            z++;
        }
        if (x < z && y < z)
        {
            if (x > y)
            {
                cout << x + 1 << " " << z + 1 << "\n";
            }
            else
            {
                cout << y + 1 << " " << z + 1 << "\n";
            }
        }
        else if (x > z && y > z)
        {
            if (x > y)
            {
                cout << y + 1 << " " << z + 1 << "\n";
            }
            else
            {
                cout << x + 1 << " " << z + 1 << "\n";
            }
        }
        else
        {
            cout << z + 1 << " " << z + 1 << "\n";
        }

        p.clear();
        iter.clear();
    }
    return 0;
}