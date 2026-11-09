//120. Write a C++ program to check whether a matrix is symmetric.


#include<iostream>
using namespace std;

int main()
{
    int rows,cols,i,j;
    int matrix[100][100];
    int flag=1;

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

    if(rows!=cols)
    {
        flag=0;
    }
    else
    {
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                if(matrix[i][j]!=matrix[j][i])
                {
                    flag=0;
                }
            }
        }
    }

    if(flag==1)
    {
        cout<<"\nThe matrix is a Symmetric Matrix.";
    }
    else
    {
        cout<<"\nThe matrix is not a Symmetric Matrix.";
    }

    return 0;
}

