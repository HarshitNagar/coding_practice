#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

int find(vector<int>arr, int n)
{
	stack<int>s;
	int sum = 0;
	//cout<<sum<<" ";
	s.push(arr[n-1]);
	//cout<<"asdasd";
	for(int i=n-2; i>=0; i--)
	{
		if(arr[i]<s.top())
		{
			sum+=s.top();
			//cout<<sum<<" ";
			s.push(arr[i]);
		}
		else
		{
			while(!s.empty() && s.top()<=arr[i])
			{
				//if(!s.empty())
					s.pop();
				//else
				//	break;
			}
			
			if(!s.empty())
			{
				sum+=s.top();
				//cout<<sum<<" ";
			}
			s.push(arr[i]);
		}
		//cout<<sum<<" ";
	}
	return sum;
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
		if(n==0)
			cout<<0<<endl;
		else if(n==1)
			cout<<0<<endl;
		else
		{

			vector<int>arr(n);
			
			for(int i=0; i<n; i++)
			{
				cin>>arr[i];
			}
			cout<<find(arr, n)<<endl;
		}	
	}
	return 0;
}