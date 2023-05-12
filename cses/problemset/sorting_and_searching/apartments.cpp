#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    int k = 0;
    int x = 0;
    int x2 = 0;
    int y = 0;
    int ans = 0;
    vector<int> a; // desired size
    vector<int> b; // apartment size
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    x = 0;
    while (x < m && y < n)
    {
        if (b[x] >= a[y] - k && b[x] <= a[y] + k)
        {
            x++;
            x2++;
            y++;
            ans++;
            //cout << b[x - 1] << " " << a[y - 1] << "\n";
        }
        else
        {
            if (x == m-1)
            {
                x = x2;
                y++;
                //cout << b[x] << " " << a[y] << "case2\n";
            }
            else
            {
                x++;
                //cout << b[x] << " " << a[y] << "case3\n";
            }
        }
    }

    cout << ans;
}