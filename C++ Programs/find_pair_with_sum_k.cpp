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
		ll sum;
		cin>>n;
		cin>>sum;
		ll arr[n];
		unordered_map<ll, ll>s;
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
			if(s.empty() || s.find(arr[i])==s.end())
				s.insert(make_pair(arr[i], 0));
			else
				s[arr[i]]++;
		}
		for(ll i=0; i<n; i++)
		{
			ll dif = sum-arr[i];
			if(dif*2 != sum)
			{
				if(s.find(dif)!=s.end())
					cout<<"found"<<endl;
				else
				{
					if(s.find(dif)!=s.end() && s[dif]>1)
						cout<<"found"<<endl;

				}
				else if(s.find()==s.end())
					cout<<"not found"<<endl;
			}
		}

	}

	return 0;
}