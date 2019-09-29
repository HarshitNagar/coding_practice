#include<iostream>
using namespace std;

#define ll long long

int main()
{
	int cases;
	ll n, s, t;
	cin>>cases;
	while(cases--)
	{
		cin>>n>>s>>t;
		if(s<t)
		{
			cout<<n-s+1<<endl;
		}
		else if(t<s)
		{
			cout<<n-t+1<<endl;
		}
		else //t==s
		{
			if(t==n)
			{
				cout<<1<<endl;
			}
			else //t<n
			{
				cout<<n-t+1<<endl;
			}
		}
	}
	return 0;
}