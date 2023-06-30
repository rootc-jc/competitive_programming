#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int ans = 0;
    while (t--)
    {
        cin >> a1 >> a2 >> a3 >> a4;
        if (a1 != 0)
        {
            // ans = a1;
            // if (a2 < a3)
            // {
            //     ans = ans + 2*a2;
            //     a2 = 0;
            //     a3 = a3 - a2;
            //     a4=a4+a3;
            // }
            // else
            // {
            //     ans = ans + 2*a3;
            //     a3 = 0;
            //     a2 = a2 - a3;
            //     a4=a4+a2;
            // }
            // ans = ans + min(a1+1,a4);
            ans = a1 + min(a2, a3) * 2 + min(a1 + 1, abs(a2 - a3) + a4);
        }
        else
        {
            ans = 1;
        }
        cout << ans << "\n";
    }
    return 0;
}