// WAP to implement sequential search
#include <iostream>
using namespace std;
int main()
{
    int len,e;
    bool flag = false;
    cout<<"Enter the length of array: ";
    cin>>len;
    int x[len];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<len;i++){
        cin>>x[i];
    }
    // for(int y: x){
    //     cin>>y;
    // }
    cout<<"The array is:"<<endl;
    for(int b:x){
        cout<<b<<" ";
    }
    cout<<"\nEnter the element to be searched: ";
    cin>>e;
    for(int i=0;i<len;i++){
        if(x[i]==e){
            cout<<"The element is searched at: "<<(i+1);
            flag=true;
        }
    }
    if(flag==false)
    cout<<"Entered element is not present in the array";
    return 0;
}