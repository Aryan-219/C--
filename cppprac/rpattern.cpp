#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the value of n";
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        for (int k = n; k > i; k--)
        {
            cout << k;
        }

        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << i;
        }
        for (int l = i + 1; l <= n; l++)
        {
            cout << l;
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << k;
        }
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << i;
        }
        for (int l = i + 1; l <= n; l++)
        {
            cout << l;
        }
        cout << endl;
    }
}