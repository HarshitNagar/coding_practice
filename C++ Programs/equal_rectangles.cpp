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
		ll n;
		cin>>n;
		vector<ll>v;
		ll side;
		n*=4;
		for(int i=0; i<n; i++)
		{
			cin>>side;
			v.push_back(side);
		}
		sort(v.begin(), v.end());
		ll area;
		ll flag=0;
		ll prearea = v[0]*v[n-1];
		for(int i=0, j=n-1; i<j; i+=2, j-=2)
		{
			if(v[i+1]!=v[i] || v[j-1]!=v[j])
			{
				flag=1;
				cout<<"NO"<<endl;
				break;
			}
			else
			{
				area = v[i]*v[j];
				if(prearea!=area)
				{
					cout<<"NO"<<endl;
					flag=1;
					break;
				}	
				else
				{
					v[i]=v[i+1]=-1;
					v[j]=v[j-1]=-1;
				}
				prearea=area;

			}
		}
		if(flag==0)
			cout<<"YES"<<endl;
	}

	return 0;
}