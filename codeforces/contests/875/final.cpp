#include <bits/stdc++.h>
using namespace std;

int predeser(int pos, vector<int> &a, vector<int> &b)
{
    int ans = 0;
    int i = 0;
    if (a[pos] == 1)
    {
        return 0;
    }

    for (i = 0; i < a.size(); i++)
    {
        if (b[i] == a[pos])
        {
            break;
        }
    }

    ans = predeser(i, a, b) + 1;
    return ans;
}

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    int x = 0;
    vector<int> a;
    vector<int> b;
    vector<int> ab;
    int ans = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n - 1; j++)
        {
            cin >> x;
            a.push_back(x);
            cin >> x;
            b.push_back(x);
        }
        ans = 0;
        for (int j = 0; j < a.size(); j++)
        {
            ab.push_back(predeser(i, a, b));
        }
        ans = *max_element(ab.begin(), ab.end());
        cout << ans << "\n";
        ab.clear();
        a.clear();
        b.clear();
    }
    return 0;
}