#include<iostream>
using namespace std;
int stairs[301];
int DP[301];

int main()
{
    int n;
    cin >> n;
    for(int i=1;i <= n; i++)
        cin >> stairs[i];
    stairs[0] = 0; 
    
    // DP part
    int level;
    DP[0] = 0;
    DP[1] = stairs[1];
    DP[2] = stairs[2]+stairs[1];
    for(level=0; level <= n; level++)
    {
        if(level >= 3)
        {
            if(DP[level-2] + stairs[level] > DP[level-3]+stairs[level-1]+stairs[level])
                DP[level] = DP[level-2] + stairs[level];
            else
                DP[level] = DP[level-3]+stairs[level-1]+stairs[level];
        }
    }

    cout << DP[n] << endl;
}
