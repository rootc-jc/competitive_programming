#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    int a=0;
    int b=0;
    bool verdict = true;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a;
        cin>>b;
        if ((a+b)%3 != 0)
        {
            verdict=false;
        }
        else if (a>2*b)
        {
            verdict=false;
        }
        else if (b>2*a)
        {
            verdict=false;
        }
        
        if (verdict==false)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        
        verdict=true;
    }
    
}