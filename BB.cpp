// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int calcDist(int i, int j, int n);
int main()
{
    int n = 3;
    int x = 2 * n - 1;
    int a = 1;
    int d;
    // ****************************

    // ****************************
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            d = calcDist(i, j, n);
            cout << a + d;
        }
        cout << endl;
    }
}
int calcDist(int i, int j, int n)
{
    int distance;
    if (i >= n || j >= n)
    {
        if (i > j)
        {
            distance = i - n + 1;
        }
        else
        {
            distance = j - n + 1;
        }
    }
    else
    {

        if (i < j)
        {

            distance = n - i;
        }
        else
        {
            distance = n - j;
        }
    }
    return distance;
}