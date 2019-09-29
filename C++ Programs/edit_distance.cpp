#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

vector<vector<ll> >dp;

ll convert(string s1, string s2, ll m, ll n)
{
	if(dp[m][n]!=-1)
		return dp[m][n];
	else
	{
		if(m==0)
		{
			dp[m][n]=n;
			return dp[m][n];
		}
		if(n==0)
		{
			dp[m][n]=m;
			return dp[m][n];
		}

		if(s1[m-1]==s2[n-1])
		{
			dp[m][n] = convert(s1, s2, m-1, n-1);
			return dp[m][n];
		}

		else
		{
			dp[m][n] = 1+min(
							convert(s1, s2, m, n-1), //insert
							min( 	convert(s1, s2, m-1, n), //remove
									convert(s1, s2, m-1, n-1) //replace
								) 
						);
			return dp[m][n];
		}
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

	string s1;
	string s2;

	while(cases--)
	{
		cin>>s1>>s2;
		ll m = s1.length();
		ll n = s2.length();
		dp.resize(m+1, vector<ll>(n+1, -1));
		cout<<convert(s1, s2, m, n)<<endl;
		/*
		for(int i=0; i<m+1; i++)
		{
			for(int j=0; j<n+1; j++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		*/
	}

	return 0;
}