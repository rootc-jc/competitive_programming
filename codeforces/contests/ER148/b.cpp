#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t = 0;
    cin >> t;
    long long int n=0;
    long long int k=0;
    long long int x=0;
    long long int total;
    long long int imm;
    vector<long long int> a;
    vector<long long int> sums;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cin>>k;
        total=0;
        for (int j = 0; j < n; j++)
        {
            cin>>x;
            a.push_back(x);
            total=total+x;
        }
        sort(a.begin(),a.end());
        for (int j = 0; j <= k; j++)
        {
            imm=total;
            for (int l = 0; l < j; l++)
            {
                imm=imm-a[n-1-l];
            }
            for (int l = 0; l < 2*(k-j); l++)
            {
                imm=imm-a[l];
            }
            sums.push_back(imm);
            //cout<<imm<<"\n";
        }
        //sort(sums.begin(),sums.end());
        x=*max_element(sums.begin(),sums.end());
        //x=sums[k];
        cout<<x<<"\n";
        a.clear();
        sums.clear();
    }
}