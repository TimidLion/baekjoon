#include<string>
#include<iostream>
using namespace std;

int main()
{
	int N,M;
	cin >> N >> M;
	string* dud = new string [N];
	for(int i =0; i < N; i++)
		cin >> dud[i];
	string* bo = new string[M];
	for(int i =0; i < M; i++)
		cin >> bo[i];
	int num = 0;
	string* dudbo = new string[N];
	for(int j=0; j < N; j++)
		dudbo[j] = "zzzzzzzzzz";
	for(int i=0; i < N; i++)
		for(int j=0; j < M; j++)
			if(dud[i]==bo[j])
			{
				dudbo[num] = dud[i];
				num++;
			}
	//Do bubble sort on dudbo array;
	for(int i =num; i > 0; i--)
		for(int j =1; j < i; j++)
			if(dudbo[j] < dudbo[j-1])
			{
				string tmp = dudbo[j];
				dudbo[j] = dudbo[j-1];
				dudbo[j-1] = tmp;
			}
			
	cout << num << endl;
	for(int i=0; i < num;i++)
		cout << dudbo[i] << endl;
}
