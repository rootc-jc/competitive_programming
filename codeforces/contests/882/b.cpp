#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    vector<int> a;
    // vector<int> b;
    long long int x = 0;
    long long int ans = 0;
    long long int maxi = 0;
    while (t--)
    {
        cin >> n;
        maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
            maxi = maxi + x;
        }
        x = a[0];
        for (int i = 0; i < n; i++)
        {
            x = x & a[i];
        }
        ans = 0;
        if (x > 0)
            ans = 1;
        x = maxi;
        for (int i = 0; i < n; i++)
        {
            x = x & a[i];
            if (x == 0)
            {
                ans++;
                x = maxi;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     if (x & a[i] == 0)
        //     {
        //         ans = ans + n - 1;
        //         break;
        //     }
        //     if (a[i] <= x)
        //     {
        //         x = a[i];
        //         ans++;
        //     }
        //     else
        //     {
        //         x = x & a[i];
        //     }
        // }
        cout << ans << "\n";
        a.clear();
    }
    return 0;
}