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

	ll n, num;
	cin>>n;
	vector<ll>v;
	ll result = 0;
	for(ll i=0; i<n; i++)
	{
		cin>>num;
		v.push_back(num);
		result = __gcd(result, num);
	}

	if(result == 1)
		cout<<1<<endl;
	else
	{
		ll cnt = 2;
		for(ll i=2; i*i<=result; i++)
		{
			if(result%i==0)
			{
				cnt++;
				if(i!=result/i)
					cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}