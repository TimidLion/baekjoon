#include<string.h>
#include<iostream>
using namespace std;

int main()
{
	char input[100];
	cin.get(input,sizeof(input));
	for(int i=0; i < strlen(input); i++)
	{	//cout << input[i] << " " << i <<endl;
		switch(input[i])
		{
			case 'a':
				{cout << input[i];i += 2;}break;
			case 'e':
				{cout << input[i];i += 2;}break;
			case 'i':
				{cout << input[i];i += 2;}break;
			case 'o':
				{cout << input[i];i += 2;}break;
			case 'u':
				{cout << input[i];i += 2;}break;
			default:
				cout << input[i];break;
		}
	}
}
