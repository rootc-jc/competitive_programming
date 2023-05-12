#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int x=0;
    int z=0;
    int ans=0;
    cin>>n>>x;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {
        cin>>z;
        p.push_back(z);
    }
    sort(p.begin(),p.end());
    int p1;
    int p2;
    p1=0;
    p2=p.size();
    p2--;
    while (p1<p2)
    {
        if (p[p1]+p[p2]>x)
        {
            p2--;
            ans++;
        }
        else if(p[p1]+p[p2]<=x){
            p2--;
            p1++;
            ans++;
        }
    }
    if (p1==p2)
    {
        ans++;
    }
    
    cout<<ans;
}