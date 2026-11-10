//125. Write a C++ program to find the sum of each column of a matrix.


#include<iostream>
using namespace std;

int main()
{
    int rows,cols,i,j;
    int matrix[100][100];
    int sum;

    cout<<"Enter the number of rows:";
    cin>>rows;

    cout<<"Enter the number of columns:";
    cin>>cols;

    cout<<"\nEnter elements for the matrix:\n";

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<"Enter elements["<<i<<"]["<<j<<"]:";
            cin>>matrix[i][j];
        }
    }

    for(j=0;j<cols;j++)
    {
        sum=0;

        for(i=0;i<rows;i++)
        {
            sum=sum+matrix[i][j];
        }

        cout<<"\nSum of column "<<j+1<<" = "<<sum;
    }

    return 0;
}

