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
    vector<int> drawn;
    vector<int> want;
    int ans = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n - 1; j++)
        {
            cin >> x;
            a.push_back(x);
            cin >> x;
            b.push_back(x);
        }
        ans = 0;
        drawn.push_back(1);

        do
        {
            want.clear();
            for (int j = 0; j < a.size(); j++)
            {
                if (count(drawn.begin(), drawn.end(), a[j]) == 1 && count(drawn.begin(), drawn.end(), b[j]) == 0)
                {
                    drawn.push_back(b[j]);
                    cout<<a[j]<<"--"<<b[j]<<"-at-"<<ans<<"\n";
                }
                else if (count(drawn.begin(), drawn.end(), a[j]) == 1 && count(drawn.begin(), drawn.end(), b[j]) == 1)
                {
                    /* do nothing */
                    cout<<a[j]<<"--"<<b[j]<<" already drawn   "<<ans<<"\n";
                }
                else
                {
                    want.push_back(a[j]);
                }
            }

            ans++;
        } while (want.size() != 0);
        cout << ans << "\n";
        drawn.clear();
        want.clear();
        a.clear();
        b.clear();
    }
    return 0;
}