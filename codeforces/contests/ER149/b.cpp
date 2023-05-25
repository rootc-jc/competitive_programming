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
        x = n;
        a.push_back(x);
        for (int j = 0; j <= n; j++)
        {

            if (s[j] == '<')
            {
                x++;
                a.push_back(x);
            }
            else if(s[j] == '>')
            {
                x--;
                a.push_back(x);
            }
        }
        high = *max_element(a.begin(), a.end());
        low = *min_element(a.begin(), a.end());
        cout << high - low + 1 << "\n";
        a.clear();
        s.clear();
    }
    return 0;
}