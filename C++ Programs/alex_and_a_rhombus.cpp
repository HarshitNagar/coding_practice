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

	// a(n) = a(n-1) + 4*(n-1) ; n>=2 ; a(1)=1
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	int s=1;
	for(int i=2; i<=n; i++)
	{
		s=s+4*(i-1);
	}
	cout<<s;

	return 0;
}