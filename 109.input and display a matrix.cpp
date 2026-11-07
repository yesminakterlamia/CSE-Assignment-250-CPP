//109. Write a C++ program to input and display a matrix

#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j;
    int matrix[100][100];

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

    cout<<"\nDisplay of Matrix:\n";

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
