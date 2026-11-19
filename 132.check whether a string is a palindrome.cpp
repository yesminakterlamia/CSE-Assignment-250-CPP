//132. Write a C++ program to check whether a string is a palindrome.

#include<iostream>
using namespace std;
int main()
{
    string str, rev = "";
    cout<<"Enter a string: ";
    cin>>str;
    for(int i=str.length()-1; i>=0; i--)
    {
        rev = rev + str[i];
    }
    if(str == rev)
    {
        cout<<"The string is palindrome.";
    }
    else
    {
        cout<<"The string is not palindrome.";
    }
    return 0;
}
