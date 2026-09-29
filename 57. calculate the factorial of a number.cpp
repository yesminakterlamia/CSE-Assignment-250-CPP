//57. Write a C++ program to calculate the factorial of a number.


#include<iostream>
using namespace std;
int main()
{
    int n, i, fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial = "<<fact;
    return 0;
}
