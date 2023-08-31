// WAP to implement insertion operation in array
#include <iostream>
using namespace std;
int main(){
    int x[5],size,maxsize,a,pos,i;
    cout<<"Enter the length of array: ";
    cin>>maxsize;
    
    cout<<"Enter the number of elements you want to insert in array: ";
    cin>> size;
    cout<<"Enter these elements: ";
    for(int i=0;i<size;i++){
        cin>>x[i];
    }
    cout<<"Enter the element you want to insert: ";
    cin>>a;
    cout<<"Enter the position where you want to insert the element ";
    cin>>pos;
    if(size<maxsize){
        if(pos<=size){
            for(i=size-1;i>=pos-1;i--){
                x[i+1]=x[i];

            }
            x[pos-1]=a;
        }
    }
    for(int p:x){
        cout<<p<<endl;
    }
    return 0;
}