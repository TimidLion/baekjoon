#include<iostream>
#include<algorithm>
char inequality[9];
using namespace std;
int main()
{
    int k;
    cin >> k;
    for(int i=0;i < k; i++)
    {
        cin >> inequality[i];
    } 
    int min[10] = {0,1,2,3,4,5,6,7,8,9};
    int max[10] = {9,8,7,6,5,4,3,2,1,0};
    int minValue = 0,maxValue = 0;
    int cnt = 0;
    //make min
    while(cnt != k)
    {
        cnt = 0;
        for(int i=0;i < k;i++)
        {
            if(inequality[i] == '<')
            {
                if(min[i] > min[i+1])
                    swap(min[i],min[i+1]);
                else
                    cnt++;
            }
            else
            {
                if(min[i] < min[i+1])
                    swap(min[i],min[i+1]);
                else
                    cnt++;
            }
        }
    }
    cnt = 0;
    //make max
    while(cnt != k)
    {
        cnt = 0;
        for(int i=0;i < k;i++)
        {
            if(inequality[i] == '<')
            {
                if(max[i] > max[i+1])
                    swap(max[i],max[i+1]);
                else
                    cnt++;
            }
            else
            {
                if(max[i] < max[i+1])
                    swap(max[i],max[i+1]);
                else
                    cnt++;
            }
        }
    }
    for(int i=0;i <= k; i++)
        cout << max[i];
    cout << endl;
    for(int i=0;i <= k; i++)
        cout << min[i];
    cout << endl;
}
