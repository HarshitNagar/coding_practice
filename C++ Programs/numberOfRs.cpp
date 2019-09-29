#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int countr(int a)
{
	
}

int main()
{
	int cases;
	cin>>cases;
	string s;
	unordered_set<int>a;
	unordered_set<int>b;
	while(cases--)
	{
		cin>>s;
		
		if(s[0]=='K')
			countr(0);
		for(int i=1; i<s.length(); i++)
		{
			if(s[i]=='K' && s[i-1]=='R')
				countr(i);
		}
	}
}