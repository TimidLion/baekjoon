#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int Yf = 0, Mf = 0;
    for(int i=0;i < N; i++)
    {
        int time;
        cin >> time;

        // Check for Young Sik fee
        Yf += 10*(time/30+1);
        // Check for Min Sik fee
        Mf += 15*(time/60+1); 
    }

    if(Yf > Mf)
        cout << "M " << Mf << endl;
    else if(Yf < Mf)
        cout << "Y " << Yf << endl;
    else
        cout << "Y M " << Yf << endl;
}
