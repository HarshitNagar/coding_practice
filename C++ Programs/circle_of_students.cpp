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
		ll arr[n];
		ll start;
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
				start = i;
		}
		ll next = (start+1)%n;
		ll flag=0;
		//cout<<start<<" "<<next<<endl;
		if(arr[next]==arr[start]+1)
		{
			for(ll i=start; i<start+n-1; i++)
			{
				if(arr[(i+1)%n]!=arr[i%n]+1)
				{
					flag=1;
					break;
				}
			}
		}
		else
		{
			for(ll i=start+1; i<start+n; i++)
			{
				if(arr[(i+1)%n]!=arr[i%n]-1)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		

	}	

	return 0;
}