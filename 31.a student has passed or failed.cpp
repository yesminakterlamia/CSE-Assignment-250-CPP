//31. Write a C program to check whether a student has passed or failed.

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks>=40)
        cout<<"Passed";
    else
        cout<<"Failed";
    return 0;
}
