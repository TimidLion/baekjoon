#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
#define MAX 100
struct grades{
    int grade[3];
};
bool acompare(grades lhs, grades rhs){ return lhs.grade[0] < rhs.grade[0]; }
void update(int*,int,int,int,int,int);
int getMin(int*,int,int,int,int,int);
int main()
{
    int N;
    scanf("%d",&N);
    vector<int> tests;
    int tree[500001];
    for(int i=0;i < 500001; i++)
        tree[i] = MAX;

    //Only for test
    for(int i=0;i < 3*N; i++)
        printf("%d ",tree[i]);
    printf("\n");
    //Remove above

    for(int j=0;j < 3; j++)
    {
        for(int i=0;i < N;i++)
        {
            int a;
            scanf("%d",&a);
            tests.push_back(a);
        }
    }

    //Make students vectors
    vector<grades> students;
    for(int i=0;i < N; i++)
    {
        grades* student = new grades;
        student->grade[0] = tests[i];
        students.push_back(*student);
    }
    for(int i=N; i < 3*N; i++)
    {
        students[i%N].grade[i/N] = tests[i];
    }

    sort(students.begin(), students.end(),acompare);

    //Only for test
    for(int i=0;i < students.size(); i++)
    {
        printf("%d %d %d\n",students[i].grade[0],students[i].grade[1],students[i].grade[2]);
    }
    //Remove above

    //Get Amazing Students
    int ans = 0;
    for(int i=0;i < students.size(); i++)
    {
        int minVal = getMin(tree,1,1,N-1,1,students[i].grade[1]-1);
        update(tree,1,1,N-1,students[i].grade[1],students[i].grade[2]);
        printf("min val : %d\n",minVal);
        for(int j=1;j < 5*students.size(); j++)
            printf("%d ",tree[j]);
        printf("\n");
        if(students[i].grade[2] < minVal)
            ans++;
    }

    printf("%d",ans);
}

void update(int* tree,int node, int start, int end, int index, int num)
{
    if(index < start || index > end) return;
    tree[node] = min(tree[node],num);
    if(start != end)
    {
        update(tree,node*2,start,(start+end)/2,index,num);
        update(tree,node*2+1,(start+end)/2+1,end,index,num);
    }
}

int getMin(int* tree,int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
        return MAX;
    if(left <= start && end <= right)
        return tree[node];
    return min(getMin(tree,node*2,start,(start+end)/2,left,right),getMin(tree,node*2+1,(start+end)/2+1,end,left,right));
}
