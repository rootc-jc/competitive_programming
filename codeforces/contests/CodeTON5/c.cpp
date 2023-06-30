#include <bits/stdc++.h>
using namespace std;

int longest(vector<int> &a, int start, int end)
{
    if (start == end)
        return 0;
    int i = start;
    int j = end;
    bool verdict = false;
    for (i = start; i < end; i++)
    {
        for (int j = end; j > start; j--)
        {
            if (a[i] == a[j])
            {
                verdict = true;
                break;
            }
        }
        if (a[i] == a[j])
        {
            verdict = true;
            break;
        }
    }
    if (verdict)
        return (j - i + 1 + longest(a, start, i - 1) + longest(a, j + 1, end));
    else
        return 0;
}

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    vector<int> a;
    int x = 0;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        x = longest(a, 0, n - 1);
        cout << x << "\n";
        a.clear();
    }
    return 0;
}