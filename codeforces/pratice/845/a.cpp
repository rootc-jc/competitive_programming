#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    int x = 0;
    int ans = 0;
    vector<int> a;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int j = 0; j < n-1; j++)
        {
            if (a[j] % 2 != 0 && a[j + 1] % 2 != 0)
            {
                ans++;
            }
            else if (a[j] % 2 == 0 && a[j + 1] % 2 == 0)
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
        a.clear();
        ans=0;
    }
    return 0;
}