#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int N,M;
	cin >> N >> M;
	string* dud  = new string [N];
	for(int i =0; i < N; i++)
		cin >> dud[i];
	string* bo = new string [M];
	for(int i =0; i < M; i++)
		cin >> bo[i];
	int num = 0;
	std::vector<std::string> dudbo;
	for(int i=0; i < N; i++)
		for(int j=0; j < M; j++)
			if(dud[i]==bo[j])
			{
				dudbo.push_back(dud[i]);
				num++;
			}
	sort(dudbo.begin(), dudbo.end());
			
	cout << num << endl;
	for(int i=0; i < num;i++)
		cout << dudbo[i] << endl;
}
