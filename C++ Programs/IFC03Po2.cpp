//longest common subsequence
#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

ll lcs(string a, string b, ll m, ll n)
{
	vector<vector<ll> >dp(m+1, vector<ll>(n+1, 0));
	for(ll i=1; i<=m; i++)
	{
		for(ll j=1; j<=n; j++)
		{
			if(a[i-1]==b[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else
			{
				dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	return dp[m][n];
}	

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string a;
	string b;

	cin>>a>>b;

	ll m = a.length();
	ll n = b.length();

	cout<<lcs(a, b, m, n);

	return 0;
}