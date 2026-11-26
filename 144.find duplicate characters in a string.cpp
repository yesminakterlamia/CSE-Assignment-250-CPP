
//144. Write a C++ program to find duplicate characters in a string.

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i=0; i<str.length(); i++)
    {
        for(int j=i+1; j<str.length(); j++)
        {
            if(str[i] == str[j])
            {
                cout<<str[i]<<" ";
                break;
            }
        }
    }
    return 0;
}
