#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    long long int n = 0;
    vector<int> a;
    long long int sum;
    long long int count;
    int x = 0;
    while (t--)
    {
        cin >> n;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
            if (x < 0)
                sum = sum - x;
            else
                sum = sum + x;
        }
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                count++;
                while (a[i] <= 0 && i < n)
                {
                    i++;
                }
            }
        }
        cout << sum << " " << count << "\n";
        a.clear();
    }
    return 0;
}