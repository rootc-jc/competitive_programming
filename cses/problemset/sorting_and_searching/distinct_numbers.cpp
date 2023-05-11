#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int x=0;
    vector<int> a;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    x=0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i]!=a[i+1])
        {
            x++;
        }
    }
    x++;
    cout<<x;
}