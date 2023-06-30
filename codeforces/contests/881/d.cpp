#include <bits/stdc++.h>
using namespace std;

int number(int a, vector<int> &u, vector<int> &v, int b)
{
    int count = 0;
    int init = 0;
    int max = u.size();
    while ((u[init] != a || v[init] == b) && init < max)
    {
        init++;
    }
    if (u[init] != a)
    {
        max = v.size();
        init = 0;
        while ((v[init] != a || u[init] == b) && init < max)
        {
            init++;
        }
        if (v[init] != 0)
        {
            return 0;
        }
        else
        {
            return 1 + number(u[init], u, v, a);
        }
    }
    else return 1 + number(v[init],u,v,a);

    return 0;
}

int main()
{
    int t = 0;
    cin >> t;
    long long int n = 0;
    vector<int> u;
    vector<int> v;
    int x = 0;
    int q = 0;
    int a = 0;
    int b = 0;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            u.push_back(x);
            cin >> x;
            v.push_back(x);
        }
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> a;
            cin >> b;
            cout<<number(a,u,v,a)*number(a,u,v,a)<<"\n";
        }
    }
    return 0;
}