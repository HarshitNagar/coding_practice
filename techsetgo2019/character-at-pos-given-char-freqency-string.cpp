#include<iostream>
#include<string.h>
using namespace std;


char char_at_pos(char* str, int n)
{
	int k=0;
	for(int i=1; i<strlen(str); i+=2)
	{
		k+= (int(str[i])-int('0'));
		//cout<<k<<endl;
		if(n-k<=0)
		{
			return str[i-1];
		}
	}
	return '0';
}


int main()
{

	char str[]="a0b4c1d4";
	int n=6;
	cout<<char_at_pos(str, n);
	return 0;
}