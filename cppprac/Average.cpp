#include<iostream>
using namespace std;
int main (){
    int a,b,c,avg;
    cout<<"Enter the three numbers";
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    if(avg>=60){
        cout<< "A grade";
    }
     else if(avg>=35&& avg<=60){
        cout<< "B grade";
    }
      if(avg<=35){
        cout<< "C grade";
    }
    return 0;
}
// Completed