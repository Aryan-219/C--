#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter value";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            
            if(i+j==x+1||i==j){
                cout<<"$";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// Completed