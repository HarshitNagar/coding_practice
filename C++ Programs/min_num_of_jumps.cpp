#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

int calc_min_jumps(vector<int>arr, queue<int>q, unordered_set<int>s)
{
	q.push(0);

	
	while(!q.empty())
	{
		int front = q.front();
		q.pop();
		//s.insert(front);
		if(front == arr.size()-1)
			return 0;
		for(int i=front+1; i<i+arr[front]; i++)
		{
			q.push(i);
			cout<<i;
		}
	}
	return 0;
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
		vector<int>arr(n);
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		queue<int>q;
		unordered_set<int>s;
		cout<<endl<<calc_min_jumps(arr, q, s)<<endl;

	}

	return 0;
}