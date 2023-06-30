#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    int x = 0;
    int k = 0;
    int sum = 0;
    while (t--)
    {
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << "1 ";
            }
            cout << "\n";
        }
        else if (x == 1)
        {
            if (n == 1)
                cout << "NO\n";
            else if (n % 2 == 0 && k>=2)
            {
                cout << "YES\n";
                cout << n / 2 << "\n";
                for (int i = 0; i < n / 2; i++)
                {
                    cout << "2 ";
                }
                cout << "\n";
            }
            else if (n % 2 != 0 && k >= 3)
            {
                cout << "YES\n";
                cout << (n - 3) / 2 + 1 << "\n";
                for (int i = 0; i < (n - 3) / 2; i++)
                {
                    cout << "2 ";
                }
                cout << "3 ";
                cout << "\n";
            }
            else cout<<"NO\n";
        }
    }
    return 0;
}