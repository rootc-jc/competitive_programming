#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int n=0;
    int m=0;
    int k=0;
    int x=0;
    int y=0;
    vector<pair<int,int>> liss;
    pair<int,int> pos;
    int l=0;
    while (t--)
    {
        cin>>n;
        cin>>m;
        cin>>k;
        cin>>x;
        cin>>y;
        for (int i = 0; i < k; i++)
        {
            cin>>l;
            pos.first = l;
            cin>>l;
            pos.second = l;
            liss.push_back(pos);
        }
        
    }
    return 0;
}