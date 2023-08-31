// WAP to check for prime number
#include <iostream>
using namespace std;
int main()
{
    int x, count = 0;
    cout << "Enter the number to be checked: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {

        if (x % i == 0)
            count++;
    }
    if (count == 2)
        cout << "Prime";
    else
        cout << "not prime";
    return 0;
}
// Completed