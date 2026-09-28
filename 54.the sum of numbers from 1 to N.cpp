//54. Write a C++ program to find the sum of numbers from 1 to N.


#include<iostream>
using namespace std;
int main()
{
    int n, i, sum=0;
    cout<<"Enter N: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum = "<<sum;
    return 0;
}
