#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	ofstream fileopen("input");
	int N = 100;
	fileopen << N << endl;
	for(int i = 0; i < N; i++)
		fileopen << rand()%41 << endl;
	fileopen.close();
}
