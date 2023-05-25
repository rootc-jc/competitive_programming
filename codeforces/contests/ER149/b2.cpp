#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    string s;
    vector<int> a;
    int x = 0;
    int high = 0;
    int low = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        x = 0;
        high=0;
        low=0;
        for (int j = 0; j <= n; j++)
        {

            if (s[j] == '<')
            {
                high++;
            }
            else
            {
                low++;
            }
        }
        x=min(high,low);
        cout << n + 1 - x << "\n";
        a.clear();
    }
    return 0;
}