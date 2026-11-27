//154. Write a C++ program to find the largest word in a sentence.

#include<iostream>
using namespace std;
int main()
{
    string str, word = "", largest = "";
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
            if(word.length() > largest.length())
            {
                largest = word;
            }
            word = "";
        }
    }
    cout<<"Largest word: "<<largest;
    return 0;
}
