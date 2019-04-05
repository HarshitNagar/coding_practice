#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int c00001;
int c11110;
int c00010;
int c11101;



int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		int n;
		cin>>n;
		

		string s;
		for(int i=0; i<n; i++)
		{
			cin>>s;
			char x[5]={'0', '0', '0', '0', '0'};
			int len = s.length();
			for(int i=0; i<len; i++)
			{
				if(s[i]=='a')
					x[0]=1;
				else if(s[i]=='e')
					x[1]=1;
				else if(s[i]=='i')
					x[2]=1;
				else if(s[i]=='o')
					x[3]=1;
				else if(s[i]=='u')
					x[4]=1;
			}

		}

	}

		
}