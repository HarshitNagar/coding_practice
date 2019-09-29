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
	ll arr[n];
	for(ll i=0; i<n; i++)
	{
		cin>>arr[i];
	}	
	ll len, max = 1;
	ll i, j;
	for(i=0; i<n-1; i++)
	{
		j=i+1;
		len = 1;
		//cout<<arr[j-1]<<" "<<arr[j]<<endl;
		while(arr[j]>arr[j-1] && j<n)
		{
			//cout<<arr[j-1]<<" "<<arr[j]<<endl;
			j++;
			i=j-1;
			len++;
		}
		if(len>max)
			max=len;
	}
	cout<<max;
	return 0;
}