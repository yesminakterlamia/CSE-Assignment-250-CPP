//145. Write a C++ program to remove spaces from a string.

#include<iostream>
using namespace std;
int main()
{
    string str, result = "";
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] != ' ')
        {
            result = result + str[i];
        }
    }
    cout<<"String without spaces: "<<result;
    return 0;
}
