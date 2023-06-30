#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    int sum = 0;
    int neg = 0;
    int pos = 0;
    int x = 0;
    int ans = 0;
    while (t--)
    {
        cin >> n;
        sum = 0;
        neg = 0;
        pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;

            if (x == 1)
                pos++;
            else
                neg++;
            sum = sum + x;
        }
        if (sum < 0)
        {
            sum = abs(sum);
            if (sum % 2 == 0)
            {
                ans = sum / 2;
            }
            else
                ans = sum / 2 + 1;
            neg = neg - ans;
            if (neg % 2 != 0)
                ans++;
        }
        else
        {
            ans = 0;
            if (neg % 2 != 0)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}