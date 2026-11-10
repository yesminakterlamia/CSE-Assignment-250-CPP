//123. Write a C++ program to count zero and non-zero elements of a matrix.

#include<iostream>
using namespace std;

int main()
{
    int rows,cols,i,j;
    int matrix[100][100];
    int zero=0,nonzero=0;

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

            if(matrix[i][j]==0)
            {
                zero++;
            }
            else
            {
                nonzero++;
            }
        }
    }

    cout<<"\nNumber of zero elements: "<<zero;
    cout<<"\nNumber of non-zero elements: "<<nonzero;

    return 0;
}
