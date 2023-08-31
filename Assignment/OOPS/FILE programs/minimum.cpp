// Program to find the minimum of entries in an array
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int len,i,min=INT_MAX;
    cout<< "Enter the length of array: ";
    cin>>len;
    int x[len];
    cout << "Enter the elements of array: "<<endl;
    for(i=0;i<len;i++){
        cin>>x[i];
    }
     for(i=0;i<len;i++){
        cout<<x[i]<<" ";
    }
    for(int i=0;i<len;i++){
        if(x[i]<min){
            min=x[i];
        }
    }

    cout<<endl<<"The minimum of all numbers is : "<< min;
    return 0;
}
// Completed