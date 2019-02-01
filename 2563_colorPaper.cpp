#include <iostream>
using namespace std;
void print_paper(int**);

int main()
{

    int** paper = new int*[100];
    for(int i=0;i <100; i++)
        paper[i] = new int[100];

    // Initialization of paper
    for(int i=1;i <100;i++)
        for(int j=1;j <100;j++)
            paper[i][j] = 0;

    int n;
    cin >> n;
    int w,h;
    for(int i=0; i < n; i++)
    {
        cin >> w >> h;
        for(int r = h; r < h+10; r++)
            for(int c = w; c < w+10; c++)
            {
                if( r >= 100 || c >= 100 )
                    continue;
                paper[r][c] = 1;
            }
        //print_paper(paper);
    }

    int count = 0;
    for(int i=1; i < 100; i++)
        for(int j=1; j< 100; j++)
            if(paper[i][j] == 1)
                count++;
    
    cout << count;
}

void print_paper(int** p)
{
    for(int i=0;i < 100; i++)
    {
        for(int j=0; j < 100; j++)
        {
            if(p[i][j] == 0)
                cout << "O";
            else
                cout << "X";
        }
        cout << endl;
    }
}
