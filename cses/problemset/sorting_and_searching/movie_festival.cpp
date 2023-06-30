#include <bits/stdc++.h>
using namespace std;

int lis(vector<pair<int, int>> &a, vector<int> &storage)
{
    int n = a.size();
    /*lis(n) = 1 + max{lis(k)|k<n,a[k].second<a[n].first}*/
    if (n == 0)
    {
        return 0;
    }
    storage[0]=1;
    for (size_t i = 1; i < n; i++)
    {
        if (a[i].)
        {
            /* code */
        }
        
    }
    
}

int main()
{
    int n = 0;
    cin >> n;
    pair<int, int> x;
    vector<pair<int, int>> a;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x.first;
        cin >> x.second;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    vector<int> storage;
    for (int j = 0; j < n; j++)
    {
        storage.push_back(-1);
    }
    ans = lis(a,storage);
    cout << ans;
}