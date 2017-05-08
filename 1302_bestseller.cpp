#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map <string,int> books;
    for(int i=0; i < N;i++)
    {
        string book;
        cin >> book;
        if(!books[book])
            books[book]=1;
        else
            books.at(book)=books[book]+1;
    }
    
    int max_value = 0;
    string max_book_name = "";
    for(map<string,int>::iterator it=books.begin(); it!=books.end(); ++it)
    {
        if( max_value <= it->second)
        {   
            max_value = it->second;
            max_book_name = it->first;
        }
    }

    bool isFirst = true;
    for(map<string,int>::iterator it=books.begin(); it!=books.end(); ++it)
    {
        if(max_value == it->second)
        {
            cout << it->first;
            isFirst = false;
        }
        if(!isFirst)
            cout << endl;
    }
}
