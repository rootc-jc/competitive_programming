#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    int iter=0;
    vector<pair<int, int>> lis;
    cin >> t;
    pair<int,int> x;
    int y=0;
    int a=0;
    while (t--)
    {
        cin>>n;
        for (int i = 0; i <n; i++)
        {
            cin>>y;
            x.first=y;
            cin>>y;
            x.second=y;
            lis.push_back(x);
        }
        sort(lis.begin(),lis.end());
        while (iter<n)
        {
            a=1;
        }
        
    }
    return 0;
}