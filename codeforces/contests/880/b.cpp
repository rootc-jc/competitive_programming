#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t = 0;
    cin >> t;
    long long int n = 0;
    long long int k = 0;
    long long int g = 0;
    long long int tot = 0;
    long long int limit = 0;
    long long int orig = 0;
    long long int dupe = 0;
    long long int i = 0;
    while (t--)
    {
        cin >> n;
        cin >> k;
        cin >> g;
        tot = k * g;
        if (g % 2 != 0)
        {
            limit = g / 2 + 1;
        }
        else
            limit = g / 2;
        orig = tot - (n - 1) * (limit - 1);
        orig = tot;
        i = 0;
        while (orig >= limit && i < n - 1)
        {
            orig = orig - limit + 1;
            i++;
        }
        

        dupe = orig;
        if (orig % g >= limit)
        {
            orig = orig + g - orig % g;
        }
        else
        {
            orig = orig - orig % g;
        }
        dupe = dupe - orig;
        cout << dupe + (i) * (limit - 1) << "\n";
    }
    return 0;
}