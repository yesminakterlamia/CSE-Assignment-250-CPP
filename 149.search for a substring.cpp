//149. Write a C++ program to search for a substring.

#include<iostream>
using namespace std;
int main()
{
    string str, sub;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Enter substring: ";
    cin>>sub;
    if(str.find(sub) != string::npos)
    {
        cout<<"Substring found.";
    }
    else
    {
        cout<<"Substring not found.";
    }
    return 0;
}
