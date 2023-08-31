// WAP to sort a list in ascending order by selection sorting
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int len, index, c, temp, small_index, small = INT_MAX;
    // Accepting user input
    cout << "Enter the length of array: ";
    cin >> len;
    int x[len];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> x[i];
    }

    // Printing
    cout << "The length of array is: " << len << endl;
    cout << "The enterd array is: " << endl;

    for (int i = 0; i < len; i++)
    {
        cout << x[i] << " ";
    }

    // Sorting
    for (int i = 0; i < len - 1; i++)
    {

        for (int j = i; j < len; j++)
        {

            if (x[j] < small)
            {
                small = x[j];

                small_index = j;
            }
        }
        c = x[i];
        x[i] = x[small_index];
        x[small_index] = c;
        small = INT_MAX;
    }
    cout <<endl<< "The sorted array is: " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}
// Completed