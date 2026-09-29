//77. Write a C++ program to print an inverted pyramid pattern.


#include<iostream>
using namespace std;
int main()
{
    int rows=5;
    int i,j,k;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<rows-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
