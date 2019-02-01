#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int from, to;
    unsigned int frozen_t, hot_t;
    unsigned int haedong_t;
    cin >> from >> to >> frozen_t >> haedong_t >> hot_t;
    int ans = 0;
    if( from < 0 )
        ans = frozen_t*abs(from) + haedong_t + hot_t*abs(to);
    else
        ans = hot_t*(to-from);
    cout << ans;
}
