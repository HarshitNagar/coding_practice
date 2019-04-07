#include<iostream>
#include<vector>
#define ll long long 

using namespace std;


int main()
{

	ll t;
	cin>>t;
	for(int p=1; p<=t; p++)
	{
		//ll n, a, b;
		string n;
		cin>>n;
		ll len=n.length();
		char a[len];
		char b[len];
		for(int i=0; i<len; i++)
		{
			if(n[i]=='4')
			{
				a[i]='3';
				b[i]='1';
			}
			else
			{
				a[i]=n[i];
				b[i]='0';
			}
		}
		b[len]='\0';
		a[len]='\0';
		char * c=b;
		for(int i=0; ; i++)
		{
			if(b[i]=='1')
			{
				c+=i;
				break;
			}
		}
		cout<<"Case #"<<p<<": "<<a<<" "<<c<<endl;
		//cout<<a<<endl<<b<<endl;
	}
	return 0;
}