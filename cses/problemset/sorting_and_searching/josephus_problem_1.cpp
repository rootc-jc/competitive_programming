#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int iter = -1;
    int counter = 0;
    // int increment = 2;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        a.push_back(i + 1);
        b.push_back(1);
    }

    while (counter != n)
    {
        counter++;
        // while (b[iter] != 1)
            do
            {
                iter = (iter + 1) % n;
            } while (b[iter] != 1);
        do
        {
            iter = (iter + 1) % n;
        } while (b[iter] != 1);
        cout << a[iter] << " ";
        b[iter] = 0;
    }
}