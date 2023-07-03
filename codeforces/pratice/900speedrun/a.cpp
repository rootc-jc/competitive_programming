#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    int m = 0;
    vector<long long int> a;
    vector<long long int> b;
    long long int x = 0;
    int j = 0;
    while (t--)
    {
        cin >> n;
        cin >> m;
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
        for (int i = 0; i < m; i++)
        {
            a[0] = b[i];
            j = 1;
            while (a[j] < a[0] && j < n)
            {
                j++;
            }
            // swap(a[j-1], a[0]);
            x=a[0];
            for (int k = 0; k < j; k++)
            {
                a[k] = a[k + 1];
            }
            a[j-1]=x;
        }
        x = 0;
        for (int i = 0; i < n; i++)
        {
            x = x + a[i];
            // cout << a[i] << "\n";
        }
        cout << x << "\n";
        a.clear();
        b.clear();
    }
    return 0;
}