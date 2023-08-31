// WAP to sort a list in ascending order by selection sorting
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int len, index, c, temp, small_index, small = INT_MAX;
    int x[] = {23, 8, 99, 101, 2, 3,78,65,34,2342, 54};

    // Sorting
    len = sizeof(x) / sizeof(x[0]);
    cout << "The length of array is: " << len << endl;
    for (int i = 0; i < len - 1; i++)
    {
      
        for (int j = i; j < len; j++)
        {
            
            if (x[j] < small)
            {
                small=x[j];
               
                small_index = j;
              
            }
        }
        c = x[i];
        x[i] = x[small_index];
        x[small_index] = c;
        small = INT_MAX;
    }
    cout << "The sorted array is: " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}
// Completed