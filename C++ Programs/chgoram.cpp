#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

struct Node
{
	int val;
	vector<Node*>child; 
};

void compareP(ll &p)
{
	ll q[3];
	p[1]>p[0]?q[0]=1:q[0]=0;
	p[2]>p[1]?q[1]=1:q[1]=0;
	p[0]>p[2]?q[2]=1:q[2]=0;
	return *q;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll cases, n, p[3];
	cin>>cases;

	while(cases--)
	{
		cin>>n;
		cin>>p[0]>>p[1]>>p[2];
		p = compareP(p);
		for(int i=0; i<3; i++)
			cout<<p[i]<<" ";
	}

	return 0;
}