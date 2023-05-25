#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int x = 0;
    int k=0;
    for (int i = 0; i < t; i++)
    {
        cin>>x;
        cin>>k;
        if (x%k!=0)
        {
            cout<<"1\n";
            cout<<x<<"\n";
        }
        else
        {
            cout<<"2\n";
            cout<<x-1<<" "<<"1\n";
        }
    }
    return 0;
}