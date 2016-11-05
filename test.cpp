#include<iostream>
using namespace std;
int main()
{
    int A = 0;
    int sum = 3;
    int c = 7;
    int d = 9;
    A = sum + ((c<d)?c:d);
    cout << A << endl;
}
