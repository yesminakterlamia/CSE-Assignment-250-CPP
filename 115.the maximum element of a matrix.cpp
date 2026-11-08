//115. Write a C++ program to find the maximum element of a matrix.


#include<iostream>
using namespace std;

int main()
{
    int rows,cols,i,j;
    int matrix[100][100],max;

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

    max=matrix[0][0];

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(matrix[i][j]>max)
            {
                max=matrix[i][j];
            }
        }
    }

    cout<<"\nMaximum element of the matrix:"<<max;

    return 0;
}

