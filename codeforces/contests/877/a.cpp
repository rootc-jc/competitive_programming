#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int n=0;
    int x=0;
    int ans=0;
    vector<int> a;
    while (t--)
    {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        if (a[0]<0)
        {
            ans=a[0];
        }
        else
        {
            ans=a[n-1];
        }
        cout<<ans<<"\n";
        a.clear();
    }
    return 0;
}