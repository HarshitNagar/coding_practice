#include<iostream>
using namespace std;

#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll b=n;
	ll sum=0;
	for(ll i=1; i<=n; i++)
	{
		sum+=((b-1)*i)+1;
		b--;
	}
	cout<<sum<<endl;

	return 0;
}