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
		int n, val;
		cin>>n;
		vector<int>v;
		for(int i=0; i<n; i++)
		{
			cin>>val;
			v.push_back(val);
		}
		vector<int>cnt(10, 0);

		for(int i=0; i<n; i++)
		{
			vector<bool>check(10, false);
			int num = v[i];
			while(num)
			{
				int d = num%10;
				if(!check[d])
				{
					cnt[d]++; 
					check[d]=true;
				}
				num/=10;
			}
		}
		int max=INT_MIN;
		for(int i=0; i<10; i++)
		{
			if(max<cnt[i])
				max=cnt[i];
		}
		cout<<max<<endl;
	}

	return 0;
}