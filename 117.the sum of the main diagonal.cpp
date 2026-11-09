//117. Write a C++ program to find the sum of the main diagonal


#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j;
    int matrix[100][100],sum=0;

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

    for(i=0;i<rows;i++)
    {
        sum=sum+matrix[i][i];
    }

    cout<<"\nSum of the main diagonal:"<<sum;

    return 0;
}

