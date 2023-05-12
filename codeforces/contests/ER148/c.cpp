#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t = 0;
    cin >> t;
    int start=0;
    int end=0;
    long long int n=0;
    long long int k=0;
    long long int x=0;
    long long int prev;
    long long int contrast;
    vector<long long int> a;
    vector<long long int> b;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cin>>x;
        contrast=0;
        a.push_back(x);
        prev=x;
        for (int j = 1; j < n; j++)
        {
            cin>>x;
            a.push_back(x);
            contrast=contrast+abs(x-prev);
        }
        sort(a.begin(),a.end());
        start =0;
        end=n-1;
        k=0;
        while (k!=contrast)
        {
            
        }
        
        
    }
}