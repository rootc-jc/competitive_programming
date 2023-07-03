#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    int one=0;
    int two=0;
    vector<int> a;
    int m=0;
    int n=0;
    int x=0;
    while (t--)
    {
        cin>>n;
        cin>>m;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            if(x==-1) one++;
            else if(x==-2) two++;
            else a.push_back(x);
        }
        sort(a.begin(),a.end());
    }
    return 0;
}