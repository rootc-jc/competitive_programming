#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    vector<int> a;
    int k = 0;
    int alt = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> k;
        if (n % k == 0)
        {
            alt = n / k;
        }
        else alt = n / k + 1;
        if (n%k != 1)
        {
            alt++;
        }
        if (k==1)
        {
            alt=n;
        }
        
        cout<<alt<<"\n";
    }
    return 0;
}