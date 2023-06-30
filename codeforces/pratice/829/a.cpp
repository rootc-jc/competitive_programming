#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    string dialog;
    int q = 0;
    int a = 0;
    while (t--)
    {
        cin >> n;
        cin >> dialog;
        q = 0;
        a = 0;
        for (int i = 0; i < n; i++)
        {
            if (dialog[i] == 'Q')
            {
                q++;
            }
            if (dialog[i] == 'A')
            {
                if (q > 0)
                {
                    q--;
                }
            }
        }
        if(q>0) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}