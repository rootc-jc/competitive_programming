#include <bits/stdc++.h>
using namespace std;

void move(int n, int from, int to, int spare){
    if (n==1)
    {
        cout<<from<<" "<<to<<"\n";
        return;
    }
    
    move(n-1,from,spare,to);
    cout<<from<<" "<<to<<"\n";
    move(n-1,spare,to,from);
}

int main(){
    int n=0;
    cin>>n;
    cout<<pow(2,n)-1<<"\n";
    move(n,1,3,2);
}