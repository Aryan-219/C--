// WAP to print diamond pattern
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"This is a program for printing a diamond after accepting user input for height of pyramid \n";
    cout << "Enter the value of n:";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j<=x; j++)
        {
            if (i+j >= x+1)
            {
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j >= i)
            {
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=x-1;j>=i;j--){
            cout<<"*";
        }
    cout<<endl;
    }
    return 0;
}
// Completed