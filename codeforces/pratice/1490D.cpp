#include <bits/stdc++.h>
using namespace std;

void tree(int start, int end, vector<int> a, int level, int b[])
{
    if (end - start == 0)
    {
        return;
    }
    else
    {
        vector<int>::iterator x = max_element(a.begin() + start, a.begin() + end);
        // root.val=a.at(x-a.begin());
        //cout << a.at(x - a.begin()) << " - " << level << "\n";
        level++;
        b[x - a.begin()]=level-1;
        tree(start, x - a.begin(), a, level,b);
        // cout << a.at(x - a.begin()) << "\n";
        tree(x - a.begin() + 1, end, a, level,b);
        // cout << a.at(x - a.begin()) << "\n";
    }
}

int main()
{
    int t = 0;
    cin >> t;
    int n = 0;
    vector<int> a;
    int b[200];
    int x = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            a.push_back(x);
        }
        tree(0, n, a, 0,b);
        for (int j = 0; j < n; j++)
        {
            cout<<b[j]<<" ";
        }
        cout<<"\n";
        a.clear();
    }
}