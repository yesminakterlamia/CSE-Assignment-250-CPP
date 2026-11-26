//143. Write a C++ program to find the frequency of each character in a string.

#include<iostream>
using namespace std;
int main()
{
    string str;
    int count;
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i=0; i<str.length(); i++)
    {
        count = 0;
        if(str[i] != ' ')
        {
            for(int j=0; j<str.length(); j++)
            {
                if(str[i] == str[j])
                {
                    count++;
                }
            }
            cout<<str[i]<<" = "<<count<<endl;
        }
    }
    return 0;
}
