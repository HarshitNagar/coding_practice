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
		ul n, k;
		cin>>n>>k;
		if(k==1)
			cout<<"NO"<<endl;
		else if(n==k)
			cout<<"YES"<<endl;
		else
		{
			if((n/k)<k)
				cout<<"YES"<<endl;
			else if(n/k == k)
				cout<<"NO"<<endl;
			else
			{
				if(n/k%k==0)
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;
			}
		}

	}

	return 0;
}