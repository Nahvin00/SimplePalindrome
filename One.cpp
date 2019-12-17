#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <string>

using namespace std;
bool sentencePalindrome(string);

int main()
{
    int total=0;
    std::string word;
    std::ifstream nameFileout;
    nameFileout.open("palindrome.txt");
    cout<<"The palindromes from the paragraph are:\n";
    while (nameFileout >> word)
    {
        total+=sentencePalindrome(word);
    }
    nameFileout.close();
    cout<<"\nThe total number of palindromes is "<<total;
    return 0;
}

bool sentencePalindrome(string str) 
{ 
    int l = 0, h = str.length(); 
    for (int i = 0; i < h; i++){
        str[i] = tolower(str[i]);
        int j = 0;

        for (int i = 0; i < h; i++)
        {
            if (str[i] == ','||str[i] == '.'||str[i] == '?'||str[i] == '!'||str[i] == '('||str[i] == ')')
            {
                continue;
            }
            else
            {
                str[j] = str[i];
                j++;
            }
        }

        str[j] = '\0';
        }
        
    while (l <= h) { 
        if (!(str[l] >= 'a' && str[l] <= 'z')) 
            l++; 
        else if (!(str[h] >= 'a' && str[h] <= 'z')) 
            h--; 
        else if (str[l] == str[h]) 
            l++, h--; 
        else
            return false; 
    } 
    cout<<str<<endl;
    return true; 
} 
