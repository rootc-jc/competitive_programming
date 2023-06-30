#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    vector<int> a(100, 0);
    int x = 0;
    int j = 0;
    int verdict = 0;
    while (t--)
    {
        cin >> n;
        verdict = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (int i = 1; i < 100; i++)
        {
            if (a[i] > a[i - 1])
            {
                verdict = 1;
            }
        }
        if (verdict == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }

        for (int i = 0; i < 100; i++)
        {
            a[i] = 0;
        }
    }
    return 0;
}