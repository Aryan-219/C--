// WAP to find the factorial of a given number
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number";
    cin>>x;
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    cout<<"Factorial is "<< fact;

    return 0;
}
// Completed