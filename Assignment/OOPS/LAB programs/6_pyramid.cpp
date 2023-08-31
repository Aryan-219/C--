// WAP to perform pyramid pattern
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the rows of pyramid: ";
    cin>>x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (i + j >= x+1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (int j = 2; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
// Completed