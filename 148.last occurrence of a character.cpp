//148. Write a C++ program to find the last occurrence of a character.

#include<iostream>
using namespace std;
int main()
{
    string str;
    char ch;
    int pos = -1;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Enter a character: ";
    cin>>ch;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ch)
        {
            pos = i;
        }
    }
    if(pos != -1)
    {
        cout<<"Last occurrence at index: "<<pos;
    }
    else
    {
        cout<<"Character not found.";
    }
    return 0;
}
