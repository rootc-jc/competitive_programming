#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    string s;
    int i = 0;
    while (t--)
    {
        cin >> s;
        i=0;
        while (i < s.size() - 1)
        {
            if (s[i] == s[i + 1])
                i++;
            else
                break;
        }
        if (i != s.size() - 1)
        {
            if (s.size() == 3 && s[0] != s[1])
                cout << "2\n";
            else
                cout << s.size() - 1 << "\n";
        }
        else
            cout << "-1\n";
    }
    return 0;
}