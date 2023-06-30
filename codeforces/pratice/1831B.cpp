#include <bits/stdc++.h>
using namespace std;

int longest(int n, vector<int> &a)
{
    int iter = 0;
    int max = 0;
    int temp = 0;
    for (int i = 0; i < a.size(); i++)
    {
        while (iter < a.size())
        {
            while (a[iter] != n && iter < a.size())
            {
                iter++;
            }
            temp = 0;
            while (a[iter] == a[iter + 1] && iter < a.size())
            {
                temp++;
                iter++;
            }
            // temp++;
            if (temp > max)
            {
                max = temp;
            }
            iter++;
        }
    }
    return max;
}

int main()
{
    int t = 0;
    int n = 0;
    vector<int> a;
    vector<int> b;
    vector<int> ab;
    int x = 0;
    int counter = 0;
    int valid = 0;
    int iter = 0;
    int ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            b.push_back(x);
        }

        x = 0;
        while (x < n)
        {

            counter = 0;
            while (a[x] == a[x + 1] && x < n - 1)
            {
                counter++;
                x++;
            }
            counter++;

            iter = longest(a[x], b);
            x++;

            ab.push_back(counter + iter);
        }
        x = 0;
        while (x < n)
        {

            counter = 0;
            while (b[x] == b[x + 1] && x < n - 1)
            {
                counter++;
                x++;
            }
            counter++;

            iter = longest(b[x], a);
            x++;

            ab.push_back(counter + iter);
        }
        ans = *max_element(ab.begin(), ab.end());
        cout << ans << "\n";
        a.clear();
        b.clear();
        ab.clear();
    }
}