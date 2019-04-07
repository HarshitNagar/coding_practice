#include<iostream>
#define ll long long 
using namespace std;

int main()
{
	ll t;
	cin>>t;
	for(ll p=1; p<=t; p++)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		cout<<"Case #"<<p<<": ";
		ll len=s.length();
		for(ll i=0; i<len; i++)
		{
			if(s[i]=='S')
				cout<<"E";
			else
				cout<<"S";
		}

		cout<<endl;
	}
	return 0;
}