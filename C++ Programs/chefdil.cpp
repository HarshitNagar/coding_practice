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

	ll cases;
	cin>>cases;

	while(cases--)
	{
		string s;
		cin>>s;
		int z=0, o=0;

		for(int i=0; i<s.length(); i++)
		{
			if(s[i]=='0')
				z++;
			else
				o++;
		}
		if(o%2==0)
			cout<<"LOSE"<<endl;
		else
			cout<<"WIN"<<endl;
	}

	return 0;
}