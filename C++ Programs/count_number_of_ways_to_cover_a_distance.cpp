#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

int number_of_ways(int n, vector<int>&dp)
{
	if(n<0)
		return 0;

	if(dp[n]!=-1)
		return dp[n];

	if(n==0)
	{
		//dp[n]=1;
		return 1;
	}

	dp[n] = number_of_ways(n-1, dp) + number_of_ways(n-2, dp) + number_of_ways(n-3, dp);
	return dp[n];
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
		int n;
		cin>>n;
		vector<int>dp(n+1, -1);
		dp[0]=1;
		cout<<number_of_ways(n, dp)<<endl;

		for(int i=0; i<n+1; i++)
			cout<<dp[i]<<" ";
	}

	return 0;
}