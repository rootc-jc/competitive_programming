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
        if (k * g - (((g + 1) / 2) - 1) * n < 0)
        {
            cout << k * g << "\n";
        }
        else
        {
            cout << k * g - ((((k * g - (((g + 1) / 2) - 1) * n + g - 1) / g) * g)) << "\n";
        }
    }
    return 0;
}