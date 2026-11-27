//146. Write a C++ program to remove duplicate characters from a string.

#include<iostream>
using namespace std;
int main()
{
    string str, result = "";
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i=0; i<str.length(); i++)
    {
        bool found = false;
        for(int j=0; j<result.length(); j++)
        {
            if(str[i] == result[j])
            {
                found = true;
                break;
            }
        }
        if(found == false)
        {
            result = result + str[i];
        }
    }
    cout<<"String after removing duplicates: "<<result;
    return 0;
}
