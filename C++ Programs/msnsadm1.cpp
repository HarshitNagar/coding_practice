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
		ll n;
		cin>>n;
		ll a[n];
		ll b[n];
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(ll i=0; i<n; i++)
		{
			cin>>b[i];
		}
		ll max = INT_MIN;
		ll score;
		for(ll i=0; i<n; i++)
		{
			score = a[i]*20 - b[i]*10;
			if(score<0)
				score=0;
			if(score>max)
				max=score;
		}
		cout<<max<<endl;
	}

	return 0;
}