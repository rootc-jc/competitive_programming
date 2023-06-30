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
        
        a.clear();
    }
    return 0;
}