#include <bits/stdc++.h>
using namespace std;

//wrong logic
//to be updated

int flip(int start, int end, vector<int> a)
{
    int count = 0;
    int temp=0;
    if (end - start == 1)
    {
        if (a[end] > a[start])
        {
            return count;
        }
        else
        {
            temp = a[end - 1];
            a[end] = a[start];
            a[start] = temp;
            cout << "once\n";
            count++;
            return count;
        }
    }
    else
    {
        cout << "entering\n";
        count = count + flip(start, end / 2, a);
        count = count + flip((end / 2) + 1, end, a);
        return count;
    }
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
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            p.push_back(x);
            //n = n * 2;
        }
        x = flip(0, m-1, p);
        cout << x << "\n";
        p.clear();
    }
}