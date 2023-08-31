// WAP to print Month of year
#include <iostream>
using namespace std;
int main (){
    int x;
   
    cout << "Enter the  month number: ";
    cin>> x;
  
    if (x==1)
    cout << "Jan";
    else if (x==2)
    cout<< "Feb";
    else if (x==3)
    cout<< "March";
    else if (x==4)
    cout<< "April";
    else if (x==5)
    cout<< "May";
    else if (x==6)
    cout<< "June";
    else if (x==7)
    cout<< "July";
     else if (x==8)
    cout<< "Aug";
     else if (x==9)
    cout<< "Sep";
     else if (x==10)
    cout<< "Oct";
     else if (x==11)
    cout<< "Nov";
     else if (x==12)
    cout<< "Dec";
    else
    cout<< "Invalid month number";
    
    return 0;
}
// Completed