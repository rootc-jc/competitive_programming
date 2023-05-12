#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t=0;
    long long int x=0;
    long long int y=0;
    long long int ans=0;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>x;
        cin>>y;
        if (x>y)
        {
            if (x%2==0)
            {
                ans = x*x - y +1;
            }
            else
            {
                ans = (x-1)*(x-1) + y;
            }
            
        }
        else
        {
            ans = y*y - x +1;
            if (y%2!=0)
            {
                ans = y*y - x + 1;
            }
            else
            {
                ans = (y-1)*(y-1) + x;
            }
            
            
        }
        cout<<ans<<"\n";
    }
    
}