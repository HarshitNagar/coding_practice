#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

int find(string s)
{
	int num=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='Q')
			num++;
	}
	int qbef=0, qaft=num;
	num=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='Q')
		{
			qbef++; 
			qaft--;
		}
		if(s[i]=='A')
		{
			num+=qbef*qaft;
		}
	}
	return num;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;

	cout<<find(s)<<endl;


	return 0;
}