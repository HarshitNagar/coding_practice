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

	ll n;
	cin>>n;
	vector<ll>box;
	for(ll i=0; i<n; i++)
	{
		ll val;
		cin>>val;
		box.push_back(val);
	}
	vector<ll>::iterator it;
	sort(box.begin(), box.end(), greater<ll>());
	ll lst = INT_MAX;
	ll cnt=0;
	for(ll i=0; i<box.size(); i++)
	{
		ll cur = -1;
		for(ll dx=1; dx>=-1; dx--)
		{
			if(box[i]+dx>0 && box[i]+dx<lst)
			{
				cur = box[i]+dx;
				break;
			}
		}
		if(cur==-1)
			continue;
		++cnt;
		lst=cur;
	}
	

	cout<<cnt;

	return 0;
}