//135. Write a C++ program to count digits in a string.

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
        if(str[i]>='0' && str[i]<='9')
        {
            count++;
        }
    }
    cout<<"Total digits: "<<count;
    return 0;
}
