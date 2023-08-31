#include <iostream>
using namespace std ;
int main (){
    int x,y,z;
    cout<< " Enter the amount ";
    cin >> x;
    if (x>=5000){
        y = 0.2 *x;
        z=x-y;
    }
    else if (x<5000&& x>=2000){
        y = 0.1 *x;
        z=x-y;
    }
    else {
        y = 0.05 *x;
        z=x-y;
    }
    cout<< "The bill amounts to " << z;
    return 0;
}
// Completed