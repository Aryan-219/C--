#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the value: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int a = 1; a < x; a++)
        {
            cout << "*";
        }
        for (int j = 1; j <= x; j++)
        {
            if (i + j == x + 1)
            {
                for (int k = 1; k <= i * 2 - 1; k++)
                {
                    if (k % 2 == 0)
                    {
                        cout << "*";
                    }
                    else
                        cout << i;
                }
            }
            else
            {
                cout << "*";
            }
        }
        for (int k = x * 2 - 2 * i; k >= 1; k--)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
// Completed
// Output
// Enter the value: 5
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****