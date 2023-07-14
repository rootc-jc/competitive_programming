#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    long long int x;
    long long int count;
    while (t--)
    {
        cin >> x;
        if (x == 1)
            cout << "3\n";
        else
        {
            if(x == (x&-x)) cout<<x+1<<"\n";
            else cout<<(x&-x)<<"\n";
        }
    }
    return 0;
}