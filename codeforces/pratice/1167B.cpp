#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q1;
    int q2;
    int q3;
    int q4;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int a6 = 0;
    int a = 4 * 8 * 15 * 16 * 23 * 42;
    cout << "? 1 2\n";
    cin >> q1;
    cout << "? 2 3\n";
    cin >> q2;
    cout << "? 3 4\n";
    cin >> q3;
    cout << "? 4 5\n";
    cin >> q4;
    if (q1 % 23 == 0)
    {
        /* 1 or 2 is 23 */
        if (q2 % 23 == 0)
        {
            /* 2 is 23 */
            a2 = 23;
            a1 = q1 / a2;
            a3 = q2 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
        else
        {

            /*1 is 23*/
            a1 = 23;
            a2 = q1 / a1;
            a3 = q2 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
    }
    else if (q1 % 7 == 0)
    {
        /* 1 or 2 is 42 */
        if (q2 % 7 == 0)
        {
            /* 2 is 42 */
            a2 = 42;
            a1 = q1 / a2;
            a3 = q2 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
        else
        {

            /*1 is 42*/
            a1 = 42;
            a2 = q1 / a1;
            a3 = q2 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
    }
    else if (q1 % 5 == 0)
    {
        /* 1 or 2 is 15 */
        if (q2 % 5 == 0)
        {
            /* 2 is 15 */
            a2 = 15;
            a1 = q1 / a2;
            a3 = q2 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
        else
        {

            /*1 is 15*/
            a1 = 15;
            a2 = q1 / a1;
            a3 = q2 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
    }
    else
    {
        /* q1 is a combination of 4-8 or 8-16 or 4-16 */
        /*we will check others*/
        /*1 and 2 are definetely not 15 or 23 or 42*/
        if (q2 % 23 == 0)
        {
            /* 3 is 23 */
            a3 = 23;
            a2 = q2 / a3;
            a1 = q1 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
        else if (q2 % 5 == 0)
        {
            /* 3 is 15 */
            a3 = 15;
            a2 = q2 / a3;
            a1 = q1 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
        else if (q2 % 7 == 0)
        {
            /* 3 is 42 */
            a3 = 42;
            a2 = q2 / a3;
            a1 = q1 / a2;
            a4 = q3 / a3;
            a5 = q4 / a4;
            a6 = a / (a1 * a2 * a3 * a4 * a5);
        }
        else
        {
            /* 1 2 3 are 4-8-16 */
            if (q3 % 23 == 0)
            {
                /* 4 is 23 */
                a4 = 23;
                a3 = q3 / a4;
                a2 = q2 / a3;
                a1 = q1 / a2;
                a5 = q4 / a4;
                a6 = a / (a1 * a2 * a3 * a4 * a5);
            }
            else if (q3 % 5 == 0)
            {
                /* 4 is 15 */
                a4 = 15;
                a3 = q3 / a4;
                a2 = q2 / a3;
                a1 = q1 / a2;
                a5 = q4 / a4;
                a6 = a / (a1 * a2 * a3 * a4 * a5);
            }
            else if (q3 % 7 == 0)
            {
                /* 4 is 42 */
                a4 = 42;
                a3 = q3 / a4;
                a2 = q2 / a3;
                a1 = q1 / a2;
                a5 = q4 / a4;
                a6 = a / (a1 * a2 * a3 * a4 * a5);
            }
        }
    }
    cout<<"! "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<endl;
    fflush(stdout);
}