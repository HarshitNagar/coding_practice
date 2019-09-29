//LONGEST INCREASING SUBSEQUENCE IN O(NlogK) 
#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

void search_n_replace(ll ele, vector<ll> &tail)
{
	ll beg = -1;
	ll end = tail.size()-1;
	ll mid;
	while(beg<end-1)
	{
		//cout<<"loop"<<endl;
		mid = (beg+end)/2;
		if(tail[mid]>=ele)
		{
			end=mid;
		}
		else
		{
			beg = mid;
		}
	}
	tail[end]=ele;
	//return;
}

ll lis(vector<ll>v)
{	
	vector<ll>tail;
	tail.push_back(v[0]);
	for(ll i=1; i<v.size(); i++)
	{
		if(v[i]<tail[0])
		{
			tail[0]=v[i];
			//cout<<"if"<<endl;
		}
		else if(v[i]>=tail[tail.size()-1])
		{
			tail.push_back(v[i]);
			//cout<<"else if"<<endl;
		}
		else
		{
			//binary search the element in tail array which is 
			//just more than v[i] and replace it with v[i]
			//cout<<"else"<<endl;
			search_n_replace(v[i], tail);
		}
	}
	return tail.size();
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
		ll n, val;
		cin>>n;
		vector<ll>v;
		for(ll i=0; i<n; i++)
		{
			cin>>val;
			v.push_back(val);
		}
		ll max = INT_MIN;

		cout<<lis(v)<<endl;
	}

	return 0;
}
