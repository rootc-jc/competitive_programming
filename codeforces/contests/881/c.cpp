#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    long long int n=0;
    long long int ans=0;
    while (t--)
    {
        cin>>n;
        ans=0;
        while (n!=0)
        {
            ans = ans + n;
            n=n/2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}