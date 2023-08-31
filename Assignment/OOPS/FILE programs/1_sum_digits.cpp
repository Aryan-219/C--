// WAP to find the sum of digits of a number
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number:";
    cin>>x;
    int sum=0;
    for(int i=x;i>0;i=i/10){
        int a=i%10;
        sum =sum+a;
    }
    cout<<sum;
    return 0;
}
// Completed