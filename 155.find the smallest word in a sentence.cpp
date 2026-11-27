//155. Write a C++ program to find the smallest word in a sentence.

#include<iostream>
using namespace std;
int main()
{
    string str, word = "", smallest = "";
    cout<<"Enter a sentence: ";
    getline(cin,str);
    for(int i=0; i<=str.length(); i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word = word + str[i];
        }
        else
        {
            if(smallest == "" || word.length() < smallest.length())
            {
                smallest = word;
            }
            word = "";
        }
    }
    cout<<"Smallest word: "<<smallest;
    return 0;
}
