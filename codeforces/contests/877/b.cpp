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

        for (int i = 0; i < n; i++)
        {
            iter[p[i] - 1] = i;
        }
        mini = n;
        maxi = 0;
        for (int i = 0; i < n - 1; i++)
        {
            mini = min(mini, iter[i]);
            maxi = max(maxi, iter[i]);
            if (maxi - mini == i)
            {
                longest = i;
            }
        }
        // cout<<longest;
        mini = n;
        maxi = 0;
        for (int i = 0; i <= longest; i++)
        {
            mini = min(mini, iter[i]);
            maxi = max(maxi, iter[i]);
        }
        // cout<<mini<<" "<<maxi;
        if (longest == 0)
        {
            cout << x + 1 << " " << x + 1 << "\n";
        }
        else
        {
            if (mini > 1)
            {
                // swap pos(1) with 0
                cout << x + 1 << " " << 1 << "\n";
            }
            else if (maxi < n - 2)
            {
                // swap pos(1) with n-1
                cout << x + 1 << " " << n << "\n";
            }
            else
            {
                // impossible
                // no we can still disturb
                cout << y + 1 << " " << n << "\n";
            }
        }
        p.clear();
        iter.clear();
    }
    return 0;
}