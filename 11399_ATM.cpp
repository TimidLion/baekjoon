#include <stdio.h>
#include <list>

int main()
{
    int N,a;
    scanf("%d",&N);
    std::list<int> myList;
    for(int i =0;i < N; i++)
    {
        scanf("%d",&a);
        myList.push_back(a);
    }
    myList.sort();

    int waitTime = 0,timeSum = 0;
    for(int i=0;i < N; i++)
    {
        waitTime += myList.front();
        myList.pop_front();
        timeSum += waitTime;
    }
    printf("%d",timeSum);
}
