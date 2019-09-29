#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

void cum_xor(vector<ll>&x, vector<ll>arr)
{
	x[0]=arr[0];
	for(ll i=1; i<arr.size(); i++)
	{
		x[i]=x[i-1]^arr[i];
	}
}

void cum_yor(vector<ll>&y, vector<ll>arr)
{
	ll n=arr.size();
	y[0]=arr[n-1];
	for(ll i=1; i<n; i++)
	{
		y[i]=y[i-1]^arr[n-i-1];
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll cases, temp;
	cin>>cases;

	while(cases--)
	{
		ll n;
		cin>>n;
		vector<ll>arr(n);
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		vector<ll>x(n);
		vector<ll>y(n);
		cum_xor(x, arr);
		cum_yor(y, arr);

		vector<unordered_multiset<ll>>ij(n); //i var j fixed
		vector<unordered_multiset<ll>>jk(n); //j var k fixed


		for(ll j=0; j<n-1; j++)
		{
			ij[j].insert(x[j]);
			//cout<<x[j]<<" ";
		}
		//cout<<endl;
		for(ll j=0; j<n-1; j++)
		{
			jk[j].insert(y[n-2-j]);
			//cout<<y[n-2-j]<<" ";
		}
		for(ll j=1; j<n-1; j++)
		{
			for(ll i=0; i<j; i++)
			{
				ij[j].insert(x[j]^x[i]);
				jk[n-j].insert(y[j]^y[i]);
				//cout<<(y[j]^y[i])<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}