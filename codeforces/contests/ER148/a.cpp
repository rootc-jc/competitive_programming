#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    string s;
    bool verdict=false;
    char prev;
    char now;
    for (int i = 0; i < t; i++)
    {
        cin>>s;
        verdict=false;
        prev=s[0];
        //cout<<s.length()/2;
        for (int j = 1; j <= (s.length())/2-1; j++)
        {
            //cout<<s[j];
            if (prev!=s[j])
            {
                verdict=true;
                break;
            }
            prev=s[j];
        }
        if (verdict==true)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
        
    }
}