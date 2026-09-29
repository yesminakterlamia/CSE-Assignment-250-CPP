//74. Write a C++ program to print strong numbers within a range.

#include<iostream>
using namespace std;
int main()
{
    int start,end,i,j,n,digit,fact,sum;
    cout<<"Enter range: ";
    cin>>start>>end;
    for(i=start;i<=end;i++)
    {
        n=i;
        sum=0;
        while(n!=0)
        {
            digit=n%10;
            fact=1;

            for(j=1;j<=digit;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            n=n/10;
        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
