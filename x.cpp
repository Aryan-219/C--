#include <iostream>

using namespace std;
int main(){
    int n=8;
  for (int i = 1; i <= n; i++) {
    if (i == 1 || i == n) {
      for (int j = 1; j <= n; j++) {
        cout << "*";
      }
    } else {
      for (int j = 1; j <= n; j++) {
        // if (j == 1 || n / 2 + 1 == j) {
            if(j==1 || j == n){
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
}