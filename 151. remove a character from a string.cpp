//151. Write a C++ program to remove a character from a string.

#include<iostream>
using namespace std;
int main()
{
    string str;
    char ch;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Enter character to remove: ";
    cin>>ch;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] != ch)
        {
            cout<<str[i];
        }
    }
    return 0;
}
