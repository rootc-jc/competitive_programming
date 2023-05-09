#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int highest=0;
    string s;
    char past;
    cin>>s;
    past = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i]==past)
        {
            n++;
            if (n>=highest)
            {
                highest=n;
            }    
        }
        else
        {
            n=0;
        }
        past=s[i];
    }
    highest++;
    cout<<highest<<endl;
}