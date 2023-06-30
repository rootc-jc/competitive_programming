#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    vector<int> a;
    int x = 0;
    int j = 0;
    int verdict = 0;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        x = count(a.begin(), a.end(), 0);
        j = 1;

        if (x == 0)
        {
            verdict = 1;
        }
        else
        {
            while (j < n)
            {
                if (count(a.begin(), a.end(), j) <= x)
                {
                    x = count(a.begin(), a.end(), j);
                    j++;
                }
                else
                {
                    verdict = 1;
                    break;
                }
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
        a.clear();
        verdict = 0;
    }
    return 0;
}