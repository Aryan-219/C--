// WAP to implement deletion operation in array
#include<iostream>
using namespace std;
int main()
{
    int maxsize , size , pos , del;
    cout<<"Enter The Maximum Length Of Array: ";
    cin>>maxsize;
    int arr[maxsize];
    cout<<"Enter The Number Of  Elements You Want To Enter: ";
    cin>>size;
    cout<<"Enter The Elements Of Array: ";
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<"Your Entered Array Is: "<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Enter The Position Whose Element You Want To Delete: ";
    cin>>pos;
    if (size<maxsize){
        if(pos<=size){
            del = arr[pos - 1];
            for(int i = pos ; i <= size ; i++){
                arr[i - 1] = arr[i];
            }
            size--;
        }
    }
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}