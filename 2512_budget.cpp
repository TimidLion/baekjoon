#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> local;

    int sum = 0;
    int N, budget;
    int biggest = 0;
    cin >> N;
    for(int i=0;i < N; i++)
    {
        int val;
        cin >> val;
        local.push_back(val);
        sum += val;
        if(val > biggest)
            biggest = val;
    }
    cin >> budget;
    if( sum <= budget )
        cout << biggest;
    else
    {
        sort(local.rbegin(), local.rend());

        int sub = local[0], i = 1;
        for(i=1;i < N; i++)
        {
            biggest = local[i];
            if( sum - sub + biggest*i <= budget )
                break;
            else
                sub += local[i];
        }
        if( i == N  && sum > budget )
            biggest = budget/N;
        else
        {
            biggest = local[i];
            int k = budget - (sum - sub + biggest*i);
            biggest += k/i;
        }
        cout << biggest;
    } 
}
