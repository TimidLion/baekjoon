#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int day = 0;
    cin >> x >> y;
    
    for(int i=1; i < x; i++)
    {
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            day += 31;
        else if(i == 2)
            day += 28;
        else
            day += 30;
    }
    for(int j=1; j < y; j++)
    {
        day++;
    }

    string whatday;
    switch(day%7)
    {
        case 0: whatday = "MON";break;
        case 1: whatday = "TUE";break;
        case 2: whatday = "WED";break;
        case 3: whatday = "THU";break;
        case 4: whatday = "FRI";break;
        case 5: whatday = "SAT";break;
        case 6: whatday = "SUN";break;
    }
    cout << whatday;
}
