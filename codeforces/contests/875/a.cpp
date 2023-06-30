#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n=0;
    int x=0;
    // vector<int> a;
    vector<int> b;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin>>x;
            b.push_back(n+1-x);
        }
        for (int j = 0; j < n; j++)
        {
            cout<<b[j]<<" ";
        }
        cout<<"\n";
        b.clear();
    }
    return 0;
}