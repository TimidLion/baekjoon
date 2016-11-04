#include<iostream>
using namespace std;
int len[4001][4001];

int main()
{
    string A;
    string B;
    cin >> A >> B;

    int answer = 0;
    for(int i =0; i < A.length(); i++)
    {
        for(int j =0; j < B.length(); j++)
        {
            if(A[i] == B[j])
            {
                if(i==0 || j == 0)
                    len[i][j] = 1;
                else
                    len[i][j] = len[i-1][j-1] + 1;
            }
            if(answer < len[i][j])
                answer = len[i][j];
        }
    }
    cout << answer << endl;
}
