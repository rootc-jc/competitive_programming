#include <bits/stdc++.h>
using namespace std;

// wrong logic
// to be updated

void flip(vector<int> a, int start, int end)
{
    int temp[(end - start) / 2];
    for (int i = 0; i < (end - start) / 2; i++)
    {
        temp[i] = a[(end - start) / 2 + i];
    }
    for (int i = 0; i < end / 2; i++)
    {
        a[(end - start) / 2 + i] = a[start + i];
    }
    for (int i = 0; i < end / 2; i++)
    {
        a[start + i] = temp[i];
    }
}

int arrange(int start, int end, vector<int> a)
{
    int count=0;
    count = count + arrange(start,end/2,a);
    count = count + arrange(end/2+1,end,a);

    if (a[(end - start) / 2]!=a[(end - start) / 2 - 1])
    {
        flip(a,start,end);
        count++;
    }
    return count;
}

int main()
{
    int t = 0;
    cin >> t;
    int m = 0;
    int n = 1;
    int x = 0;
    vector<int> p;
    for (int i = 0; i < t; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            p.push_back(x);
        }
        arrange(0, m, p);
        for (int j = 0; j < m; j++)
        {
            cout << p[j] << " ";
        }
        p.clear();
    }
}