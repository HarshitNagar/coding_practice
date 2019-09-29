#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

void print(vector<ll>p, ll k)
{
	ll cnt=0;
	if(k==1)
	{
		cout<<p.size()<<endl;
	}
	else
	{

		
	for(ll i=0; i<p.size(); i++)
	{
		if(p[i]==1)
		{
			cout<<i+1<<" ";
			cnt++;
			if(cnt==k-1)
				break;
		}
	}
	cout<<p.size()<<endl;
	}
}	

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
		ll n, k;
		cin>>n>>k;
		vector<ll>v;
		vector<ll>p(n, 0);
		ll cnt=0;
		for(ll i=0; i<n; i++)
		{
			ll temp;
			cin>>temp;
			v.push_back(temp);
			if(v[i]%2==1)
			{
				p[i]=1;
				cnt++;
			}	
		}
		if(cnt<k)
		{
			cout<<"NO"<<endl;
		}
		else if(cnt==k)
		{
			cout<<"YES"<<endl;
			print(p, k);
		}
		else
		{
			ll x = cnt-k;
			if(x%2==0)
			{
				cout<<"YES"<<endl;
				print(p, k);
			}	
			else
				cout<<"NO"<<endl;

		}

	}

	return 0;
}