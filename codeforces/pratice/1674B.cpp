#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    char first;
    char second;
    int ifirst;
    int isecond;
    int ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> first;
        cin >> second;
        ifirst = first;
        isecond = second;
        ans = (ifirst - 97) * 25;
        if (isecond > ifirst)
        {
            ans = ans + isecond - 97;
        }
        else
        {
            ans = ans + 1 + isecond - 97;
        }
        cout << ans << "\n";
    }
}