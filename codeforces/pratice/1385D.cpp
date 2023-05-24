#include <bits/stdc++.h>
using namespace std;

int good(string &s, char x, int start, int size)
{
    int first_half = 0;
    int second_half = 0;
    int ansf = 0;
    int anss = 0;
    if (size == 1)
    {
        if (x == s[start])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    // for (int i = start; i < start + size / 2; i++)
    // {
    //     if (s[i] == x)
    //     {
    //         first_half++;
    //     }
    // }
    // for (int i = start + size / 2; i < start + size; i++)
    // {
    //     if (s[i] == x)
    //     {
    //         second_half++;
    //     }
    // }

    // ansf = ansf + size / 2 - first_half;
    ansf = ansf + size / 2 - count(s.begin()+start,s.begin()+start+size/2,x);
    ansf = ansf + good(s, x + 1, start + size / 2, size / 2);

    // anss = anss + size / 2 - second_half;
    anss = anss + size / 2 - count(s.begin()+start+size/2,s.begin()+start+size,x);
    anss = anss + good(s, x + 1, start, size / 2);

    return min(ansf, anss);
}

int main()
{
    int t = 0;
    int n = 0;
    string s;
    int ans = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        ans = good(s, 'a', 0, n);
        cout << ans << "\n";
    }
    return 0;
}