#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

int coin_change(vector<int>coins, int w)
{
	vector<vector<int>>dp;
	
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
		int n;//number of types of denominations
		vector<int>denom(n);
		for(int i=0 i<n; i++)
		{
			cin>>denom[i];
		}
		int w;
		cin>>w;
		cout<<coin_change(denom, w)<<endl;
	}	

	return 0;
}