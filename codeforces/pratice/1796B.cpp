#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    string a;
    string b;
    bool one_letter = false;
    bool two_letter = false;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        cin >> b;

        for (int j = 0; j < a.length() - 1; j++)
        {
            for (int k = 0; k < b.length() - 1; k++)
            {
                if (a[j] == b[k] && a[j + 1] == b[k + 1])
                {
                    two_letter = true;
                    cout << "YES\n";
                    cout << "*" << a[j] << a[j + 1] << "*\n";
                    break;
                }
            }
            if (two_letter == true)
            {
                break;
            }
        }
        if (two_letter == false)
        {
            if (a[0] == b[0])
            {
                one_letter = true;
                cout << "YES\n";
                cout << a[0] << "*\n";
            }
            else if (a[a.length() - 1] == b[b.length() - 1])
            {
                one_letter = true;
                cout << "YES\n";
                cout << "*" << a[a.length() - 1] << "\n";
            }
        }

        if (one_letter == false && two_letter == false)
        {
            cout << "NO\n";
        }
        two_letter = false;
        one_letter = false;
    }
}