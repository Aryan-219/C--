#include <iostream>
using namespace std;
int & max(int &a, int &b){
    return a>b?a:b;
}
int main()
{
    int x=45,y=74;
    int k=max(x,y)=-1;
    cout<<k;
        return 0;
}