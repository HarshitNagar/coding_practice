#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

int * get_triplet(int * arr, int n, int prod)
{
	
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
		int arr[n];
		for(int i=0; i<n; i++)
			cin>arr[i];
		int prod;
		cin>>prod;

		int * sol = get_triplet(arr, n, prod);
	}

	return 0;
}