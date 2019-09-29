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
		int n;
		cin>>n;
		int mat[n][3];
		for(int i=0; i<n; i++)
		{
			cin>>mat[i][0]>>mat[i][1]>>mat[i][2];
		}
		int min = INT_MAX;
		int cnt=0;
		for(int i=0; i<n-2; i++)
		{
			for(int j=i+1; j<n-1; j++)
			{
				for(int k=j+1; k<n; k++)
				{
					dp(i, j, k, );
				}
			}
		}
		cout<<cnt;


	}

	return 0;
}