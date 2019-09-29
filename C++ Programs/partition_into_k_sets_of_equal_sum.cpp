#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

bool fill(int start, int k, int targetBucketSum, int currentBucketSum, vector<bool>used, vector<int>arr)
{
	if(k==1)
		return true;

	if(currentBucketSum>targetBucketSum)
		return false;

	if(currentBucketSum == targetBucketSum)
	{
		return fill(0, k-1, targetBucketSum, 0, used, arr);
	}

	for(int i=start; i<arr.size(); i++)
	{
		if(used[i]==false)
		{
			used[i]=true;
			if(fill(i+1, k, targetBucketSum, currentBucketSum+arr[i], used, arr));
				return true;
		}
		used[i]=false;
	}

	return false;
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
		int n, k, sum, val;
		cin>>n;
		vector<int>arr(n);
		vector<bool>used(n, true);

		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}

		cin>>k;

		if(k==0 || !sum%k)
		{
			cout<<0;
			return 0;
		}

		cout<<fill(0, k, sum/k, 0, used, arr);


	}

	return 0;
}