#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    long long int n = 0;
    long long int m = 0;
    vector<long long int> b;
    long long int x = 0;
    long long int m1 = 0;
    long long int m2 = 0;
    while (t--)
    {
        cin >> n;
        cin >> m;
        for (int i = 0; i < m * n; i++)
        {
            cin >> x;
            b.push_back(x);
        }
        sort(b.begin(), b.end());
        // for (int i = 0; i < m * n; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // cout << "\n";
        // sort(b.begin(),b.end());
        m1 = (b[m * n - 1] - b[0]) * (max(m, n)-1) + (b[m * n - 2] - b[0]) * (min(m, n)-1) + 0 + (m * n - m - n + 1) * max((b[m * n - 1] - b[0]), (b[m * n - 2] - b[0]));
        m2 = (b[m * n - 1] - b[0]) * (max(m, n)-1) + (b[m * n - 1] - b[1]) * (min(m, n)-1) + 0 + (m * n - m - n + 1) * max((b[m * n - 1] - b[0]), (b[m * n - 1] - b[1]));
        // cout << m1 << "  m1\n";
        // cout << m2 << "  m2\n";
        cout << max(m1, m2) << "\n";
        b.clear();
    }
    return 0;
}