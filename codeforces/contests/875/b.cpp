#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    vector<int> a;
    vector<int> b;

    int n = 0;
    int x = 0;
    int ans = 0;
    int counter = 0;
    int max = 0;
    int element = 0;

    vector<int> ab;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int j = 0; j < n; j++)
        {
            counter = count(a.begin(),a.end(),a[j]);
            j=j+counter-1;
            max = count(b.begin(),b.end(),a[j]);
            max = max + counter;
            ab.push_back(max);
        }
        for (int j = 0; j < n; j++)
        {
            counter = count(b.begin(),b.end(),b[j]);
            j=j+counter-1;
            max = count(a.begin(),a.end(),b[j]);
            max = max + counter;
            ab.push_back(max);
        }
        ans = *max_element(ab.begin(),ab.end());
        cout<<ans<<"\n";
        a.clear();
        b.clear();
        ab.clear();
    }
    return 0;
}