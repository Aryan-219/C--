// Program to check whether two numbers are coprime or not
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int len1=0,len2=0;
    int arr1[len1],arr2[len2];
    int gen=0,prevent=1;
    cout<<"ENTER THE FIRST NUMBER: ";
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER: ";
    cin>>num2;
    for (int i = 1; i <=num1; i++)
    {
        if (num1%i==0)
        {
            len1=len1+1;
            arr1[gen]=i;
            gen++;
        }
    }
    gen=0;
    for (int i = 1; i <=num2; i++)
    {
        if (num2%i==0)
        {
            len2=len2+1;
            arr2[gen]=i;
            gen++;
        }
    }
    for (int i = 1; i < len1; i++)
    {
        for (int j = 1; j < len2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout<<"THE NUMBER "<<num1<<" AND "<<num2<<" ARE NOT COPRIME NUMBERS "<<endl;
                i=len1;
                prevent=0;
                break;
            }
        }
    }
    if (prevent==1)
    {
        cout<<"THE NUMBER "<<num1<<" AND "<<num2<<" ARE COPRIME NUMBERS "<<endl;
    }
    return 0;
}
// Correct