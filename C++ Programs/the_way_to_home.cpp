#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

vector<ll>dp;

ll recur(ll pos, ll jdis, ll arr[], ll jumps, ll n)
{
	if(pos==n-1)
		return jumps;
	vector<ll>v;
	for(ll i=1; i<=jdis; i++)
	{
		if(pos+i<n && arr[pos+i]==1)
			v.push_back(recur(pos+i, jdis, arr, jumps+1, n));
	}
	return *min_element(v.begin(), v.end());
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll n, jdis;
	cin>>n>>jdis;
	ll arr[n];
	for(ll i=0; i<n; i++)
		cin>>arr[i];
	ll jumps=0;
	dp.resize(n, 0);
	cout<<recur(0, jdis, arr, jumps, n);

	return 0;
}