#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int n=0;
    while (t--)
    {
        cin>>n;
        if(n%2==0){
            for (int i = n/2; i > 0; i--)
            {
                cout<<i<<" "<<i+n/2<<" ";
            }
            cout<<"\n";
        }
        else
        {
            n--;
            for (int i = n/2; i > 0; i--)
            {
                cout<<i<<" "<<i+n/2<<" ";
            }
            cout<<n+1;
            cout<<"\n";
        }
    }
    return 0;
}