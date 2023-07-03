#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int k=0;
    int n=0;
    while (t--)
    {
        cin>>n;
        cin>>k;
        for (int i = 1; i < n/2 + 1; i++)
        {
            cout<<n-i+1<<" "<<i<<" ";
        }
        if (n%2!=0)
        {
            cout<<n/2+1<<" ";
        }
        
        cout<<"\n";
    }
    return 0;
}