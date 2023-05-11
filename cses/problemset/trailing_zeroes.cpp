#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int ans=0;
    cin>>n;
    while (n>=5)
    {
        n = n/5;
        ans=ans+n;
    }
    
    cout<<ans;
}