#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    int x = 0;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    int y = 0;
    int ans = 0;
    int dupe = 0;
    int temp = 0;
    bool match = 1;
    while (t--)
    {
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            a.push_back(y);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            b.push_back(y);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            c.push_back(y);
        }
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > x)
                break;
            temp = a[i];
            dupe = x;
            match = 1;
            while (temp > 0 && x > 0)
            {
                if ((temp & 1) == 1 && (dupe & 1) == 0)
                {
                    match = 0;
                    break;
                }
                temp = temp >> 1;
                dupe = dupe >> 1;
            }
            if (match == 1)
                ans = ans | a[i];
            else
                break;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] > x)
                break;
            temp = b[i];
            dupe = x;
            match = 1;
            while (temp > 0 && x > 0)
            {
                if ((temp & 1) == 1 && (dupe & 1) == 0)
                {
                    match = 0;
                    break;
                }
                temp = temp >> 1;
                dupe = dupe >> 1;
            }
            if (match == 1)
                ans = ans | b[i];
            else
                break;
        }
        for (int i = 0; i < n; i++)
        {
            if (c[i] > x)
                break;
            temp = c[i];
            dupe = x;
            match = 1;
            while (temp > 0 && x > 0)
            {
                if ((temp & 1) == 1 && (dupe & 1) == 0)
                {
                    match = 0;
                    break;
                }
                temp = temp >> 1;
                dupe = dupe >> 1;
            }
            if (match == 1)
                ans = ans | c[i];
            else
                break;
        }
        if (ans==x)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        a.clear();
        b.clear();
        c.clear();
    }
    return 0;
}