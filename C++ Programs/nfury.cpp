#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

unordered_map<ll, ll>dp;

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
		ll n;
		cin>>n;
		for(ll i=1; ;i++)
		{
			n-=pow(floor(sqrt(n)), 2);
			if(n==0)
			{
				cout<<i<<endl;
				break;
			}
		}
	}

	return 0;
}