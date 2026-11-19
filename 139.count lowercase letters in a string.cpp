//139. Write a C++ program to count lowercase letters in a string.

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
        if(str[i]>='a' && str[i]<='z')
        {
            count++;
        }
    }
    cout<<"Total lowercase letters: "<<count;
    return 0;
}
