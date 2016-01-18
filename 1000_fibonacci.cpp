#include<iostream>
using namespace std;
int main()
{
	int Test_case;
	cin >> Test_case;
	int N;
	int* zero;
	int* one;
	//Each Test case
	for(int i = 0; i < Test_case; i++)
	{
		cin >> N;
		zero = new int[N+1];
		one = new int[N+1];
		zero[0] = 1; zero[1] = 0;
		one[0] = 0; one[1] = 1;
		//Calculate fibonacci number
		for( int j = 2; j <= N; j++)
		{
			zero[j] = zero[j-1] + zero[j-2];
			one[j] = one[j-1]+one[j-2];
		}
		//Print the answer for each test case
		cout << zero[N] << " " << one[N] << endl;
		delete zero;
		delete one;
	}
}
