#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int xa = 0;
    int xb = 0;
    int xc = 0;
    int ya = 0;
    int yb = 0;
    int yc = 0;
    int hab = 0;
    int hac = 0;
    int vab = 0;
    int vac = 0;
    int ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> xa;
        cin >> ya;
        cin >> xb;
        cin >> yb;
        cin >> xc;
        cin >> yc;
        vab = yb - ya;
        vac = yc - ya;
        hab = xb - xa;
        hac = xc - xa;
        ans = 0;
        // cout<<xa<<" "<<ya<<"\n";
        // cout<<xb<<" "<<yb<<"\n";
        // cout<<xc<<" "<<yc<<"\n";
        if (vac > 0 && vab > 0)
        {
            ans = ans + min(vac, vab);
            // cout << "bro";
        }
        else if (vac < 0 && vab < 0)
        {
            ans = ans + min(abs(vac), abs(vab));
        }
        if (hac > 0 && hab > 0)
        {
            ans = ans + min(hac, hab);
            // cout << "bro";
        }
        else if (hac < 0 && hab < 0)
        {
            ans = ans + min(abs(hac), abs(hab));
        }
        ans++;
        cout << ans << "\n";
    }
    return 0;
}