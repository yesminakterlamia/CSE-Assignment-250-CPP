//150. Write a C++ program to replace a character in a string.

#include<iostream>
using namespace std;
int main()
{
    string str;
    char oldChar, newChar;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Enter character to replace: ";
    cin>>oldChar;
    cout<<"Enter new character: ";
    cin>>newChar;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == oldChar)
        {
            str[i] = newChar;
        }
    }
    cout<<"Updated string: "<<str;
    return 0;
}
