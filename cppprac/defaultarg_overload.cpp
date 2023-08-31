#include <iostream>
using namespace std;
// int min(int a, int b,int c=0){
//        return a<b&&a<c?a:(b<c?b:c);
//     }
// int min(int a,int b){
//     return a<b?a:b;
// }
int min(int a, int b, int c=0)
{
    return a < b && a < c ? a : (b < c ? b : c);
}
int main()
{
    // int a=min(12,23);
    int a = min(23, 54);
    cout << a;
    return 0;
}