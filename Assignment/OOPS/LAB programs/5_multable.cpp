// WAP to find multiplication table of any input
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number whose multiplication table you want: ";
    cin>>x;
    for(int i=1;i<=10;i++){
        cout<< x <<" x "<< i << " = "<< x*i <<endl;
    }
    return 0;
}
// Completed