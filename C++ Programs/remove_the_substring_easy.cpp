#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

	

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string s; 
	string t;

	for(int i=0; i<s.length(); i++)
	{
		string a = s;
		for(int j=i; j<s.length(); j++)
		{
			a.erase(); 
		}
	}

	return 0;
}