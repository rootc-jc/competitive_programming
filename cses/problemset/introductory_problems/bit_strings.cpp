#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int ans = 1;
    cin>>n;
    int M = 1000000007;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * 2)%M;
    }
    cout<< ans;
}