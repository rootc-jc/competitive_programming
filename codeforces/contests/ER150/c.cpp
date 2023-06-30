#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    string s;
    int a = 1;
    int b = 10;
    int c = 100;
    int d = 1000;
    int e = 10000;
    int n = 0;
    int score = 0;
    while (t--)
    {
        cin >> s;
        a = 1;
        b = 10;
        c = 100;
        d = 1000;
        e = 10000;
        score=0;
        n = s.length();
        for (int i = n-1; i >= 0; i--)
        {
            if (s[i]=='A')
            {
                score = score + a;
            }
            else if (s[i]=='B')
            {
                score = score + b;
                a=-1;
            }
            else if (s[i]=='C')
            {
                score = score + c;
                a=-1;
                b=-10;
            }
            else if (s[i]=='D')
            {
                score = score + d;
                a=-1;
                b=-10;
                c=-100;
            }
            else if (s[i]=='E')
            {
                score = score + e;
                a=-1;
                b=-10;
                c=-100;
                d=-1000;
            }
        }
        cout<<score;
    }
    return 0;
}