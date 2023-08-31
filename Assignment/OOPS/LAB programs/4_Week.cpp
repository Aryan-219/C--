#include <iostream>
using namespace std;
int main (){
    int x;
    cout << "Enter the  day number: ";
    cin>> x;
    if (x==1)
    cout << "Sunday";
    else if (x==2)
    cout<< "Monday";
    else if (x==3)
    cout<< "Tuesday";
    else if (x==4)
    cout<< "Wednesday";
    else if (x==5)
    cout<< "Thursday";
    else if (x==6)
    cout<< "Friday";
    else if (x==7)
    cout<< "Saturday";
     else
    cout<< "Invalid week number";
    return 0;
}
// Alternate code
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout << "Enter day number";
//     cin >> x;
//     switch (x)
//     {
//     case 1:

//         cout << "Sunday" << endl;
//         break;
//     case 2:
//         cout << "Monday" << endl;
//         break;
//     case 3:
//         cout << "Tuesday" << endl;
//         break;
//     case 4:
//         cout << "Wednesday" << endl;
//         break;
//     case 5:
//         cout << "Thursday" << endl;
//         break;
//     case 6:
//         cout << "Friday" << endl;
//         break;
//     case 7:
//         cout << "Saturday" << endl;
//         break;
//     default:
//         cout << "Invalid week number" << endl;
//         break;
//     }
//     return 0;
// }
// Completed