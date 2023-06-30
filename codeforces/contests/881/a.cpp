#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int n=0;
    vector<int> a;
    int x=0;
    while (t--)
    {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        x=0;
        for (int i = 0; i < n/2; i++)
        {
            x = x + a[n-1-i] - a[i];
        }
        cout<<x<<"\n";
        a.clear();
    }
    return 0;
}