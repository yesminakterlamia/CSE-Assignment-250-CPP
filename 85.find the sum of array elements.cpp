//85. Write a C++ program to find the sum of array elements.

#include<iostream>
using namespace std;
int main()
{
    int a[5], sum=0;
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"Sum = "<<sum;
    return 0;
}
