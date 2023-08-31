#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter value: ";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (i + j == x + 1)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }
        for(int j=2;j<=x;j++){
            if (j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    
    for (int i = 1; i < x; i++)
    {
         for(int j=1;j<=x;j++){
            if (j==i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for (int j = 2; j <= x; j++)
        {
            if (i + j == x )
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }
       
        cout << endl;
    }
    return 0;
}
// Completed