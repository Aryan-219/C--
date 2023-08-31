#include <iostream>
using namespace std;
int main()
{
    int x, a, b;
    cout << "Choose any of the following options: " << endl
         << "1.Addition" << endl
         << "2.Substraction\n"
         << "3. Multiplication \n 4. Division ";
    cin >> x;
    if (x >= 5)
    {
        cout << "Invalid choice";
    }
    else
    {
        cout << "Enter the two numbers: ";
        cin >> a >> b;
        switch (x)
        {
        case 1:
            cout << a + b;
            break;

        case 2:
            cout << a - b;
            break;

        case 3:
            cout << a * b;
            break;

        case 4:
            cout << a / b;
            break;
        }
    }
    return 0;
}
// Completed