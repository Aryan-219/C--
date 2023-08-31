#include<iostream>
using namespace std;

int main()
{
    int max=0,pos,n,res=0,choice,maxminnu;
    int arr[max];
    int rev[res];
    cout<<"WELCOME TO ARRAY OPERATION ARENA!!!"<<endl;
    cout<<endl;
    cout<<"ENTER THE LENGTH OF THE ARRAY: ";
    cin>>max;
    cout<<"ENTER NUMBER OF THE ELEMENTS TO BE INSERTED IN THE ARRAY (*NOTE:- MUST BE LESS THEN LENGTH OF ARRAY): ";
    cin>>res;
    for (int i = 0; i < res; i++)
    {
        cout<<"ENTER THE ELEMENT "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"PRESS 1 FOR INSERTION"<<endl<<"PRESS 2 FOR DELETION"<<endl<<"PRESS 3 FOR REVERSAL"<<endl<<"PRESS 4 TO FIND MAXIMUM NUMBER IN THE GIVEN ARRAY"<<endl;
    cout<<"PRESS 5 TO FIND THE MINIMUM NUMBER IN THE GIVEN ARRAY"<<endl;
    cout<<endl;
    cout<<"ENTER THE CHOICE: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the position of the number to be inserted: ";
        cin>>pos;
        cout<<"Enter the the number to be inserted: ";
        cin>>n;
        if (pos<max)
        {
            if(pos<res)
            {
                for (int i = res-1; i >= pos-1; i--)
                {
                    arr[i+1]=arr[i];
                }
                arr[pos-1]=n;
                res++;
            }
            else if (pos==res)
            {
                arr[pos-1]=n;
                res++;
            }
            else
            {
                cout<<"INSERTION CANNOT BE POSSIBLE."<<endl<<"THE ELEMENTS OF THE ORIGINAL ARRAY IS:"<<endl;
            }

        }
        else
        {
            cout<<"INSERTION CANNOT BE POSSIBLE."<<endl<<"THE ELEMENTS OF THE ORIGINAL ARRAY IS:"<<endl;
        }
        for (int i = 0; i < res; i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<endl;
        break;
    case 2:
        cout<<"Enter the position of the number to be DELETED: ";
        cin>>pos;
        if(pos<res)
        {
            for (int i = pos; i <= res; i++)
            {
                arr[i-1]=arr[i];
                
            }
            res--;

        }
        else if (pos==res)
        {
            res=res-1;
        }
        else
        {
            cout<<"THE SPACE ALREADY HAS EMPTY VALUE"<<endl<<"THE ELEMENTS OF THE ORIGINAL ARRAY IS:"<<endl;
        }
        for (int i = 0; i < res; i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<endl;
        break;
    case 3:
        for (int i = res-1; i >=0; i--)
        {
            rev[res-i-1]=arr[i];
        }
        for (int i = 0; i < res; i++)
        {
            cout<<rev[i]<<endl;
        }
        cout<<endl;
        break;
    case 4:
        maxminnu=arr[0];
        for (int i=1;i<res;i++)
        {
            if (maxminnu<arr[i]){
                maxminnu=arr[i];
            }
            else {
                continue;
            }
        }
        cout<<endl;
        cout<<"GREATEST NUMBER IN THE PROVIDED ARRAY IS: "<<maxminnu;    
        cout<<endl;
        break;
    case 5:
        maxminnu=arr[0];
        for (int i=1;i<res;i++)
        {
            if (maxminnu>arr[i]){
                maxminnu=arr[i];
            }
            else {
                continue;
            }
        }
        cout<<endl;
        cout<<"LEAST NUMBER IN THE PROVIDED ARRAY IS: "<<maxminnu;
        cout<<endl;
        break;
    default:
        cout<<"ENTER CORRECT CHOICE";
        break;
    }
}
// Completed