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
		ll n, num;
		cin>>n;
		multiset<ll>stream;
		multiset<ll>::iterator it; 
		cin>>num;
		stream.insert(num);
		//it points to stream's median
		it = stream.begin();
		//print the first stream element since it is the median
		cout<<*it<<" ";

		for(ll i=0; i<n-1; i++)
		{
			cin>>num;
			//insert next element into stream
			stream.insert(num);
			//if number of elements is even and recent element inserted
			//is >= median, print avg of *it and and next element as median
			if(stream.size()%2==0 && num>=*it)
			{
				cout<<(float(*it) + float(*next(it)))/2<<" ";
				continue;
			}
			//if number of elements is odd and recent element inserted
			//is >= median, move 'it' towards right and print *it as median
			else if(stream.size()%2==1 && num>=*it)
			{
				it = next(it);
				cout<<*it<<" ";
			}
			//if number of elements is even and recent element inserted
			//is < median, move 'it' towards left and print avg of *it next element as median
			else if(stream.size()%2==0 && num<*it)
			{
				it = prev(it);
				cout<<(float(*it) + float(*next(it)))/2<<" ";
			}
			//if number of elements is odd and recent element inserted
			//is < median, print *it as median
			else if(stream.size()%2==1 && num<*it)
			{
				cout<<*it<<" ";
				continue;
			}
		}
		cout<<endl;
	}

	return 0;
}