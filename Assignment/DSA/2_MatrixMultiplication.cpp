// Program to demonstrate martix multiplication
#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter Row And Column Of First Matrix: ";
    cin >> r1 >> c1;
    cout << "Enter Row And Column Of Second Matrix: ";
    cin >> r2 >> c2;
    if (c1 == r2)
    {

        int mat1[r1][c1];
        int mat2[r2][c2];
        int res[c1][r2];
        int sum = 0;
        cout << "Enter Elements Of First Matrix:" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> mat1[i][j];
            }
        }
        cout << "Enter Elements Of Second Matrix:" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> mat2[i][j];
            }
        }
        cout << endl;
        cout << "The First Matrix Is:" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout<< mat1[i][j]<<"\t";
            }
            cout << endl;
        }
        cout << endl;
        cout << "The Second Matrix Is:" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout<< mat2[i][j]<<"\t";
            }
            cout << endl;
        }
        cout << endl;

        for(int i = 0 ; i < c1 ; i++){
            for(int j = 0 ; j < r2 ; j++){
                for(int k = 0 ; k < r2 ; k++){
                    sum += mat1[i][k]*mat2[k][j];
                    res[i][j] = sum;
                }
                
            }
        }

        cout<<endl;
        cout<<"The Multiplied Array Is: "<<endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout<<res[i][j]<<"\t";
            }
            cout << endl;
        }

    }
    else{
        cout<<"Multiplication Is Not Possible";
    }

    return 0;
}