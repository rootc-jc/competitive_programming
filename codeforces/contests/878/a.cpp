#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    string s;
    vector<char> a;
    char x;
    int i = 0;
    int n = 0;
    while (t--)
    {
        cin >> n;
        cin >> s;
        x = s[0];
        i = 1;
        while (i < n)
        {
            while (s[i] != x && i < n)
            {
                i++;
            }
            a.push_back(x);
            i++;
            x=s[i];
        }
        i = 0;
        while (i < a.size())
        {
            cout << a[i];
        }
        cout << "\n";
        a.clear();
        s.clear();
    }
    return 0;
}