#include <iostream>
using namespace std;
int main()
{
    int r1, r2, c1, c2;
    cout << "enter row1 ";
    cin >> r1;
    cout << "enter column1 ";
    cin >> c1;
    cout << "enter row2 ";
    cin >> r2;
    cout << "enter column2 ";
    cin >> c2;
    int a[r1][c1];
    int b[r2][c2];
    if (r2 == c1)
    {
        int c[r1][c2];
        int sum = 0;
        // Accepting user input
        cout << "Enter elements of first matrix:" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter elements of second matrix:" << endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> b[i][j];
            }
        }

        // Multiplication code
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
            sum = 0;
                for (int k = 0; k < r2; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
        // Printing elements
        cout << "Elements of first matrix are:" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << a[i][j] << "    ";
            }
            cout << endl;
        }
        cout << "Elements of second matrix are:" << endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << b[i][j] << "    ";
            }
            cout << endl;
        }
        cout << "Multiplied array is: " << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << c[i][j] << "    ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication is not possible" << endl;
    }

    return 0;
}