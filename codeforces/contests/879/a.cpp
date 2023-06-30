#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    string L;
    string R;
    string dupe;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        cin >> L;
        cin >> R;
        ans = 0;
        // if (L.size() < R.size())
        // {
        //     for (int i = 0; i < R.size() - L.size(); i++)
        //     {
        //         dupe += '0';
        //     }
        //     dupe += L;
        //     L = dupe;
        // }
        for (int i = L.size() - 1; i > 0; i--)
        {
            R[i]=0;
            L[i]=9;
        }
    }
    return 0;
}