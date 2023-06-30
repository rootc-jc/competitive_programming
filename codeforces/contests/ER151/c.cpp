#include <bits/stdc++.h>
using namespace std;

bool issubsequence(string &s1, string &s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }

    return i == n;
}
int main()
{
    int t = 0;
    cin >> t;
    string s;
    int m = 0;
    string l;
    string r;
    string ans;
    int z = 0;
    while (t--)
    {
        cin >> s;
        cin >> m;
        cin >> l;
        cin >> r;
        while (true)
        {
            ans = "";
            for (int i = 0; i < m; i++)
            {
                ans += min(l[i], r[i]);
                // cout<<ans;
                // cout<<min(l[i],r[i]);
            }
            // cout << ans << "\n";
            if (issubsequence(ans, s))
            {
                z = m - 1;
                while (z > 0 && l[z] == r[z])
                {
                    z--;
                }
                if (z == 0 && l[z] == r[z])
                {
                    cout << "NO\n";
                    break;
                }

                if (l[z] > r[z])
                {
                    r[z]++;
                }
                else
                {
                    l[z]++;
                }
            }
            else
            {
                cout << "YES\n";
                break;
            }
        }
    }
    return 0;
}