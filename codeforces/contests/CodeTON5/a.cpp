#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int n=0;
    int m=0;
    long long int tsondu=0;
    long long int tenzing=0;
    int x=0;
    while (t--)
    {
        cin>>n>>m;
        tsondu=0;
        tenzing=0;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            tsondu=tsondu+x;
        }
        for (int i = 0; i < m; i++)
        {
            cin>>x;
            tenzing=tenzing+x;
        }
        if(tsondu>tenzing) cout<<"Tsondu\n";
        else if(tenzing>tsondu) cout<<"Tenzing\n";
        else cout<<"Draw\n";
    }
    return 0;
}