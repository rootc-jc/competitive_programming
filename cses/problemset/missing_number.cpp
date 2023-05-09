#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n=0;
    long long int sum=0;
    long long int x=0;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        cin>>x;
        sum=sum+x;
    }
    x = (n*(n+1))/2 - sum;
    cout<<x<<endl;
    return 0;
}