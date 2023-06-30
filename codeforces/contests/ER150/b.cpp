#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    vector<int> a;
    int x = 0;
    int prev = 0;
    int once = 0;
    int start = 0;
    while (t--)
    {
        cin >> n;
        cin >> x;
        cout << "1";
        prev = x;
        start = x;
        for (int i = 1; i < n; i++)
        {
            cin >> x;
            if (once == 0)
            {
                if (x >= prev)
                {
                    cout << "1";
                    prev = x;
                }
                else if (once == 0)
                {
                    if(x<=start){
                    cout << "1";
                    once = 1;
                    prev = x;
                    }
                    else
                    {
                        cout<<"0";
                    }
                    
                }
                else
                {
                    cout << "0";
                }
            }
            else
            {
                if (x >= prev && x <= start)
                {
                    cout << "1";
                    prev = x;
                }
                else
                {
                    cout << "0";
                }
            }
        }
        cout << "\n";
        once = 0;
    }
    return 0;
}