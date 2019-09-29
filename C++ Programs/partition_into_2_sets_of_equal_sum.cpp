#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;



bool partition(vector<ll>arr, ll n, ll sum, ll target)
{
	if(sum==target)
		return true;
	if(n==arr.size())
		return false;
	//if(arr[n]>target-sum)
	//	  return false;

	if(arr[n]>target-sum)
		return partition(arr, n+1, sum, target)||false;

	return partition(arr, n+1, sum+arr[n], target)||partition(arr, n+1, sum, target);
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
		vector<ll>arr;
		ll n, val, sum=0;
		cin>>n;
		for(ll i=0; i<n; i++)
		{
			cin>>val;
			sum+=val;
			arr.push_back(val);
		}
		cout<<partition(arr, 0, 0, sum/2);
	}	

	return 0;
}