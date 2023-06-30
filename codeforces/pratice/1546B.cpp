#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    int m = 0;
    vector<char> before;
    char x;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>x;
                before.push_back(x);
            }
        }
        
    }
    return 0;
}