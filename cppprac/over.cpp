#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
float sum(float a,float b){
    return a+b;
}
int main()
{
    cout<<sum(4,5)<<endl;
    cout<<sum(3.4f,3.5f);
    return 0;
}