#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

vector<vector<int>>dp;

int eggdrop(int e, int f)
{
	if(dp[e][f]!=-1)
	{
	//	cout<<"voila"<<endl;
		return dp[e][f];
	}
	/*
	dp already filled according to these conditions 
	if(e==0 || f==0)
		return 0;
	if(f==1)
		return 1;
	if(e==1)
		return f;
	*/
	int sol = INT_MAX;
	int res;
	for(int i=1; i<=f; i++)
	{
		res = 1+max(eggdrop(e-1, i-1), eggdrop(e, f-i));
		if(res<sol)
			sol=res;
	}
	dp[e][f]=sol;
	return sol;
	
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
		int e, f;
		cin>>e>>f;
		dp.resize(e+1, vector<int>(f+1, -1));
		for(int i=0; i<=e; i++)
		{
			dp[i][0]=0;
			dp[i][1]=1;
		}
		for(int i=0; i<=f; i++)
		{
			dp[0][i]=0;
		}
		for(int i=1; i<=f; i++)
		{
			dp[1][i]=i;
		}

		cout<<eggdrop(e, f)<<endl;
	}

	return 0;
}