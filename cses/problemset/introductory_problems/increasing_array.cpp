#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n = 0;
    long long int x = 0;
    long long int ans = 0;
    long long int prev = 0;
    cin >> n;
    // int a[n];
    cin >> x;
    prev = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x < prev)
        {
            ans = ans + prev - x;
        }
        else
        {
            prev = x;
        }
    }
    cout << ans;
}