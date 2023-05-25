#include <bits/stdc++.h>
using namespace std;

#define M 1000000007

int main()
{
    int t = 0;
    cin >> t;
    long long int n = 0;
    long long int ans = 0;
    long long int m = 1000000007;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        // ans = factorial(n);
        ans = 1;
        for (int j = 1; j < n + 1; j++)
        {
            ans = (ans * j);
            ans = ans % m;
        }
        ans = n * ans % m;
        ans = (n-1) * ans % m;
        ans = ans % m;
        cout << ans << "\n";
    }
    return 0;
}