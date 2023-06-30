#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int n=0;
    int x=0;
    int ans=0;
    vector<int> a;
    while(t--){
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int j=i+1;
            while (j<n)
            {
                if (a[j]<=a[i])
                {
                    ans++;
                }
                j++;
            }
            
        }
        a.clear();
        cout<<ans<<"\n";
        ans=0;
    }
}