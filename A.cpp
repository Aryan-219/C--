#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i + j > n)
            {
                cout << n;
            }
            else
            {
                cout << i + j - 1;
            }
        }
        for (int j = 2; j <= n; j++)
        {
            if (i + j > n)
            {
                cout << n;
            }
            else
            {
                cout << i + j - 1;
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i + j > n)
            {
                cout << n;
            }
            else
            {
                cout << i + j - 1;
            }
        }
        for (int j = 2; j <= n; j++)
        {
            if (i + j > n)
            {
                cout << n;
            }
            else
            {

                cout << i + j - 1;
            }
        }
        cout << endl;
    }
}