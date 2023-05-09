#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    int w = 0;
    int half = 0;
    int x = 0;
    vector<int> a;
    vector<int> ans;
    bool found = false;
    long long int sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> w;
        half = w / 2 + w % 2;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            a.push_back(x);
            sum = sum + x;
        }
        if (sum <= w)
        {
            if (sum>=half)
            {
            
            cout << n << "\n";
            for (int j = 0; j < n; j++)
            {
                cout << j + 1 << " ";
            }
            cout << "\n";
            }
            else
            {
                cout<<"-1\n";
            }    
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] >= half && a[j] <= w)
                {
                    found = true;
                    x = j + 1;
                    break;
                }
            }

            if (found == true)
            {
                found = false;
                cout << "1\n";
                cout << x << "\n";
            }

            else
            {
                sum = 0;
                for (int j = 0; j < n; j++)
                {
                    if (sum+a[j] <= w)
                    {
                        sum = sum + a[j];
                        ans.push_back(j + 1);
                    }
                }
                if (sum >= half)
                {
                    cout << ans.size() << "\n";
                    for (int j = 0; j < ans.size(); j++)
                    {
                        cout << ans[j] << " ";
                    }
                    cout << "\n";
                }
                else
                {
                    cout << "-1\n";
                }
            }
        }
        a.clear();
        ans.clear();
        sum = 0;
    }
}