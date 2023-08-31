// Origninal Question: WAP to generate n terms of a sequence
// This is a program to sort an  array of integers by bubble sorting
#include <iostream>
using namespace std;
int main(){
    int len;
    cout << "Enter the length of array: ";
    cin >> len;
    int x[len];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> x[i];
    }

    // int x[]={34,343,534,23,4,423,423,4};
    // int len=sizeof(x)/sizeof(x[0]);
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1;j++){
            if(x[j]>x[j+1]){
                int c= x[j];
                x[j]=x[j+1];
                x[j+1]=c;
            }
        }
    }
    cout<<"The sorted array is: "<<endl;
    for(int i =0;i<len;i++){
    cout<<x[i]<< " ";
    }
    return 0;
}
// Completed