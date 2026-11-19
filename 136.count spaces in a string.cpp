//136. Write a C++ program to count spaces in a string.

#include<iostream>
using namespace std;
int main()
{
    string str;
    int count = 0;
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    cout<<"Total spaces: "<<count;
    return 0;
}

