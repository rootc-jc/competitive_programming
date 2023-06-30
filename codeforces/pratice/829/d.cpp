#include <bits/stdc++.h>
using namespace std;

template <typename T>
void pop_front(std::vector<T> &vec, int temp)
{
    assert(!vec.empty());
    vec.erase(vec.begin(), vec.begin() + temp);
}

int main()
{
    int n = 0;
    int x = 0;
    vector<int> a;
    int y = 0;
    cin >> n;
    cin >> x;
    int change = 0;
    int counter = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        a.push_back(y);
    }
    sort(a.begin(), a.end());
    while (a[0] < x)
    {
        change = 0;
        counter = count(a.begin(), a.end(), a[0]);
        if (counter > a[0])
        {
            /* code */
            change = 1;
            temp = a[0] + 1;
            if (counter % temp != 0)
            {
                break;
            }

            for (int i = 0; i < counter / temp; i++)
            {
                pop_front(a, temp);
            }
            for (int i = 0; i < counter / temp; i++)
            {
                // a.push_back(temp);
                a.insert(a.begin(), temp);
            }
            // sort(a.begin(), a.end());
        }
        if (change == 0)
        {
            break;
        }
    }
    if (a[0] >= x)
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
    a.clear();
    return 0;
}