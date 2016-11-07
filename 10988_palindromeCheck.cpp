#include<iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;
    bool isPalindrom = true;
    for(int i=0;i < word.length()/2; i++)
    {
        if(word[i] != word[word.length()-1-i])
        {
            isPalindrom = false;
            break;
        }
    }
    if(isPalindrom)
        cout << "1";
    else
        cout << "0";
}
