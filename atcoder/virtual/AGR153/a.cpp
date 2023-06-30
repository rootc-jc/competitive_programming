#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int ans = 110000000;
    cin>>n;
    n--;
    ans = ans + 10*(n%10);
    n=n/10;
    ans = ans + 101*(n%10);
    n=n/10;
    ans = ans + 11000*(n%10);
    n=n/10;
    ans = ans + 100000*(n%10);
    n=n/10;
    ans = ans + 1000000*(n%10);
    n=n/10;
    ans = ans + 110000000*(n%10);
    cout<<ans<<"\n";
    
}