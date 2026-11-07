//111. Write a C++ program to subtract two matrices.

#include<iostream>
using namespace std;

int main()
{
    int rows,cols,i,j;
    int matrix1[100][100],matrix2[100][100],sub[100][100];

    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of columns:";
    cin>>cols;

    cout<<"\nEnter elements for the first matrix:\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<"Enter elements["<<i<<"]["<<j<<"]:";
            cin>>matrix1[i][j];
        }
    }

    cout<<"\nEnter elements for the second matrix:\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<"Enter elements["<<i<<"]["<<j<<"]:";
            cin>>matrix2[i][j];
        }
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            sub[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

    cout<<"\nSubtraction of Matrix:\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<sub[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}

