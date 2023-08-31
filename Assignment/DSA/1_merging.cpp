#include <iostream>
using namespace std;
int main()
{
    int s1, s2, mS, k = 0, i = 0, j = 0;

    cout << "Enter Size Of First Array: ";
    cin >> s1;
    int arr1[s1];

    cout << "Enter Elements Of First Array" << endl;
    for (int m = 0; m < s1; m++)
    {
        cin >> arr1[m];
    }
    cout << "Enter Size Of Second Array: ";
    cin >> s2;

    int arr2[s2];
    cout << "Enter Elements Of Second Array" << endl;
    for (int m = 0; m < s2; m++)
    {
        cin >> arr2[m];
    }
    mS = s1 + s2;

    int mArr[mS];

    while (i <= s1 && j <= s2)
    {
        if (arr1[i] < arr2[j])
        {

            mArr[k] = arr1[i];
            i++;

            k++;
        }
        else
        {

            mArr[k] = arr2[j];
            j++;

            k++;
        }
    }
    while (i < s1)
    {
        mArr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < s1)
    {
        mArr[k] = arr1[j];
        k++;
        j++;
    }

    cout << "The Merged Array Is:" << endl;
    for (int m = 0; m < mS; m++)
    {
        cout << mArr[m] << endl;
    }

    return 0;
}