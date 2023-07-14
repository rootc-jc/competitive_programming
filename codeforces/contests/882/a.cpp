#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    int k = 0;
    vector<int> a;
    vector<int> b;
    int x = 0;
    int ans = 0;
    while (t--)
    {
        cin >> n;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            x = abs(a[i + 1] - a[i]);
            b.push_back(x);
            ans = ans + b[i];
        }
        sort(b.begin(), b.end());
        for (int i = 1; i < k; i++)
        {
            ans = ans - b[n - 1 - i];
        }
        cout << ans << "\n";
        a.clear();
        b.clear();
    }
    return 0;
    // not working
}