// WAP to implement binary search

#include <iostream>
using namespace std;
int main()
{
    int x[]={1,5,7,8,12,14,15,18,21,22,27,30,35};
    int len=sizeof(x)/sizeof(x[0]);
    int m,e,l=len-1,f=0;
    cout<<"Enter the element to be searched";
    cin>>e;
    while(true){
        m=(f+l)/2;
        if(x[m]==e){
            cout<<e<<" is searched at position "<<(m+1);
            break;
        }
        else if(x[m]>e){
            l=m-1;
        }
        else{
            f=m+1;
        }
    }

    return 0;
}