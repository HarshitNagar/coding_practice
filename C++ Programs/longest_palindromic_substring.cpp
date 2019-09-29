#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

string longest_pal_substr(string str, int n)
{
	vector<vector<bool>>dp(n, vector<bool>(n, 0));
	for(int i=0; i<n; i++)
	{
		dp[i][i]=true;
	}
	int max = 1;
	int start = 0;

	for(int i=0; i<n-1; i++)
	{
		if(str[i]==str[i+1])
		{
			dp[i][i+1]=true;
			max = 2;
			start = i;
		}
	}
	//cout<<"hello "<<endl;

	for(int k=3; k<=n; k++)
	{
		for(int i=0; i<n-k+1; i++)
		{
			int j = i+k-1;
			if(dp[i+1][j-1] && str[i]==str[j])
			{
				dp[i][j]=true;
				start=i;
				if(k>max)
					max=k;
			}
		}
	}
	//cout<<"asdad"<<endl;
	cout<<max<<" ";
	return str.substr(start, max);
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
		string str;
		cin>>str;
		cout<<longest_pal_substr(str, str.length());
	}

	return 0;
}