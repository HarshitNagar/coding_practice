#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;


int main()
{
	/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/
	//ll cases;
	//cin>>cases;

	//while(cases--)
	//{
		ll n, num;
		cin>>n;
		multiset<ll>stream;
		multiset<ll>::iterator it; 
		cin>>num;
		stream.insert(num);
		it = stream.begin();
		cout<<*it<<endl;
		for(ll i=0; i<n-1; i++)
		{
			cin>>num;
			stream.insert(num);
			if(stream.size()%2==0 && num>=*it)
			{
				cout<<(*it + *next(it))/2<<endl;
				continue;
			}
			else if(stream.size()%2==1 && num>=*it)
			{
				it = next(it);
				cout<<*it<<endl;
			}
			else if(stream.size()%2==0 && num<*it)
			{
				it = prev(it);
				cout<<(*it + *next(it))/2<<endl;
			}
			else if(stream.size()%2==1 && num<*it)
			{
				cout<<*it<<endl;
				continue;
			}
		}
		//cout<<endl;
	//}

	return 0;
}