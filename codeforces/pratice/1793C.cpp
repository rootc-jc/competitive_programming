#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int n=0;    
    int x=0;
    int y=0;
    int z=0;
    int min=0;
    int max=0;
    vector<int> a;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin>>x;
            a.push_back(x);
        }
        min=1;
        max=n;
        y=0;
        z=n-1;
        while (((a[y]==max || a[y]==min)&&y<=n-1)||((a[z]==max || a[z]==min)&&z>=0))
        {
            if (a[y]==max)
            {
                y++;
                max--;
            }
            else if(a[y]==min)
            {
                y++;
                min++;
            }
            if (a[z]==max)
            {
                z--;
                max--;
            }
            else if(a[z]==min)
            {
                z--;
                min++;
            }
        }
        if (z-y >= 3)
        {
            // for (int k = y; k < z; k++)
            // {
            //     cout<<a[k];
            // }
            cout<<y+1<<" "<<z+1;
            cout<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
        a.clear();
    }   
}