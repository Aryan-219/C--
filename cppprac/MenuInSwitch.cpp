#include<iostream>
using namespace std;
int main(){
    int x;
    cout<< "Choose any of the following options: "<< endl<< "1.New File"<< endl<<"2.Open File\n"<<"3. Save File \n4. Save as "; 
    cin>> x;
    switch (x)
    {
    case 1:
        cout<<"New File Created";
        break;
    
    case 2:
        cout<<"File Opened";
        break;   
    
    case 3:
        cout<<"File Saved";
        break;     
    
    case 4:
        cout<<"File Saved In Destination";
        break;    
    default:
    cout << "Invalid choice";
        break;
    }
    return 0;
}
// Completed