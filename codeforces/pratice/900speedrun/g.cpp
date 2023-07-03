#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    long long int k = 0;
    long long int n = 0;
    string s;
    long long int x = 0;
    vector<long long int> a;
    char old;
    while (t--)
    {
        cin >> n;
        cin >> k;
        cin >> s;

        x = 0;
        for (int j = 0; j < k; j++)
        {
            if (s[j] == 'B')
            {
                x++;
            }
        }
        a.push_back(x);
        old = s[0];
        for (int i = 1; i <= n - k; i++)
        {
            if (old == s[i + k - 1])
            {
                a.push_back(x);
                old = s[i];
            }
            else if (old == 'B')
            {
                x--;
                a.push_back(x);
                old = s[i];
            }
            else
            {
                x++;
                a.push_back(x);
                old = s[i];
            }
        }
        x = *max_element(a.begin(), a.end());
        cout << k - x << "\n";
        a.clear();
    }
    return 0;
}