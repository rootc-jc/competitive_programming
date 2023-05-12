#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    if (n%4!=0 && (n+1)%4!=0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        if (n%2==0)
        {
            cout<<n/2<<"\n";
            for (int i = 1; i < n; i=i+2)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
            cout<<n/2<<"\n";
            for (int i = 2; i < n; i=i+2)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<n/2<<"\n";
            for (int i = 1; i < n; i=i+2)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
            cout<<n/2 + 1<<"\n";
            for (int i = 2; i < n; i=i+2)
            {
                cout<<i<<" ";
            }
            cout<<n;
            cout<<"\n";
        }
        
    }
    
    
}