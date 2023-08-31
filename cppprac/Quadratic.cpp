#include <math.h>
#include<iostream>
using namespace std;
int main (){
    int a ,b ,c ,d;
    cout<<"Enter the values of a b and c";
    cin >>a>>b>>c;
    d=b*b - 4*a*c;
    if(d==0){
        cout<< "Roots are real and equal";
        cout<< endl<< -b/(2*a);
    }
    else if(d>0){
        cout<< "Roots are real and unequal";
        cout<< endl<< (-b+sqrt(d))/(2*a);
        cout<< endl<< (-b-sqrt(d))/(2*a);
    }
    else{
        cout<<"Imaginary roots";
    }
    return 0;
}
// Completed