#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
	int N;
	cin >> N;
	int f = fibonacci(N);	
	cout << f << endl;
}

int fibonacci(int n)
{
	if(n == 0)
	{
		//cout << 0 << endl;
		return 0;
	}
	else if(n == 1)
	{
		//cout << 1 << endl;
		return 1;
	}
	else
		return fibonacci(n-2)+fibonacci(n-1);
}
