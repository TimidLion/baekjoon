#include<stdio.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,nums = 1;
        scanf("%d",&N);
        vector<pair<int,int> > grades;
        int grade1,grade2;
        for(int i=0;i < N; i++)
        {
            scanf("%d %d",&grade1,&grade2);
            grades.push_back(make_pair(grade1,grade2));
        }
        sort(grades.begin(),grades.end());
        int smallest = grades[0].second;
        for(int i=1;i < N; i++)
        {
            if(smallest < grades[i].second)
                continue;
            nums++;
            smallest = grades[i].second;
        }
        printf("%d\n",nums);
    }
}
