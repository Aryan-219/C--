// Program to find the maximum of entries in an array
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int len,i,max=INT_MIN;
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
        if(x[i]>max){
            max=x[i];
        }
    }

    cout<<endl<<"The maximum of all numbers is : "<< max;
    return 0;
}
// Completed