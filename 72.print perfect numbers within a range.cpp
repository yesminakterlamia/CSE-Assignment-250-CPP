//72. Write a C++ program to print perfect numbers within a range.

#include<iostream>
using namespace std;
int main()
{
    int start,end,i,j,sum;
    cout<<"Enter range: ";
    cin>>start>>end;
    for(i=start;i<=end;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
