#include <bits/stdc++.h>
using namespace std;
//yet to be solved
int main()
{
    int n = 0;
    int m = 0;
    int k = 0;
    int x = 0;
    int x2 = 0;
    int y = 0;
    int ans = 0;
    vector<int> desired; // desired size
    vector<int> apartment; // apartment size
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        desired.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        apartment.push_back(x);
    }
    sort(desired.begin(), desired.end());
    sort(apartment.begin(), apartment.end());

    cout << ans;
}