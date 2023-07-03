#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    string s;
    int i = 0;
    char prev;
    while (t--)
    {
        cin >> s;
        n = s.size();
        i = 0;
        while (s[i] == '?' && i < n)
        {
            s[i] = '0';
            i++;
        }
        prev = s[i];
        while (i < n)
        {
            while (s[i] != '?' && i < n)
            {
                i++;
            }
            prev = s[i - 1];
            if (prev == '1')
            {
                while (s[i] == '?' && i < n)
                {
                    s[i] = '1';
                    i++;
                }
            }
            else
            {
                while (s[i] == '?' && i < n)
                {
                    s[i] = '0';
                    i++;
                }
            }
            i++;
        }

        cout << s << "\n";
    }
    return 0;
}