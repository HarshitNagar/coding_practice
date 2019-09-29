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
		vector<int>v;
		for(int i=0; i<n; i++)
		{
			cin>>temp;
			v.push_back(temp);
		}
		int max=INT_MIN;
		int min=INT_MAX;
		int left[n], right[n];
		for(int i=0, j=n-1; i<n, j>=0; i++, j--)
		{
			if(max<arr[i])
			{
				left[i]=arr[i];
				max=arr[i];
			}
			if(min>arr[j])
			{
				right[i]=arr[i];
				max=arr[i];
			}
		}
	}


	return 0;
}