#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double

using namespace std;

class Bot
{
public:
	ll x;
	ll y;
	bool d;
	bool u;
	bool r;
	bool l;
};

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
		Bot barr[n];
		bool left=1, up=1, right=1, down=1;

		for(ll i=0; i<n; i++)
		{
			cin>>barr[i].x;
			cin>>barr[i].y;
			cin>>barr[i].l;
			cin>>barr[i].u;
			cin>>barr[i].r;
			cin>>barr[i].d;
			left = barr[i].l && left;
			up = barr[i].u && up;
			right = barr[i].r && right;
			down = barr[i].d && down;
		}
		ll flag=0;
		if(left+up+right+down == 0)
		{
			for(int i=1; i<n; i++)
			{
				if(barr[i-1].x!=barr[i].x || barr[i-1].y!=barr[i].y)
				{
					cout<<0<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0)
				cout<<1<<" "<<barr[0].x<<" "<<barr[0].y<<endl;
		}
		else if(left+right+up+down==4)
		{
			cout<<1<<" "<<0<<" "<<0<<endl;
		}
		else
		{
			if(left==1 && right==0 && down==0 && up==0)
			{
				for(int i=1; i<n; i++)
				{
					if(barr[i-1].y != barr[i].y)
					{
						cout<<0<<endl;
						flag=1;
						break;
					}
				}
				if(flag==0)
					cout<<1<<" "<<-100000<<" "<<barr[0].y<<endl;
			}
			else if(left==0 && right==1 && down==0 && up==0)
			{
				for(int i=1; i<n; i++)
				{
					if(barr[i-1].y != barr[i].y)
					{
						cout<<0<<endl;
						flag=1;
						break;
					}
				}
				if(flag==0)
					cout<<1<<" "<<100000<<" "<<barr[0].y<<endl;
			}	
			else if(left==0 && right==0 && down==1 && up==0)
			{
				for(int i=1; i<n; i++)
				{
					if(barr[i-1].x != barr[i].x)
					{
						cout<<0<<endl;
						flag=1;
						break;
					}
				}
				if(flag==0)
					cout<<1<<" "<<barr[0].x<<" "<<-100000<<endl;
			}
			else if(left==0 && right==0 && down==0 && up==1)
			{
				for(int i=1; i<n; i++)
				{
					if(barr[i-1].x != barr[i].x)
					{
						cout<<0<<endl;
						flag=1;
						break;
					}
				}
				if(flag==0)
					cout<<1<<" "<<barr[0].x<<" "<<100000<<endl;
			}
			else if(left==1 && right==1 && down==0 && up==0)
			{
				for(int i=1; i<n; i++)
				{
					if(barr[i-1].y != barr[i].y)
					{
						cout<<0<<endl;
						flag=1;
						break;
					}
				}
				if(flag==0)
					cout<<1<<" "<<-100000<<" "<<barr[0].y<<endl;
			}
			else if(left==0 && right==0 && down==1 && up==1)
			{
				for(int i=1; i<n; i++)
				{
					if(barr[i-1].x != barr[i].x)
					{
						cout<<0<<endl;
						flag=1;
						break;
					}
				}
				if(flag==0)
					cout<<1<<" "<<barr[0].x<<" "<<100000<<endl;
			}
			else if(left==1 && right==0 && down==0 && up==1)
			{
				cout<<1<<" "<<-100000<<" "<<100000<<endl;
			}
			else if(left==1 && right==0 && down==1 && up==0)
			{
				cout<<1<<" "<<-100000<<" "<<-100000<<endl;
			}
			else if(left==0 && right==1 && down==1 && up==0)
			{
				cout<<1<<" "<<100000<<" "<<-100000<<endl;
			}
			else if(left==0 && right==1 && down==0 && up==1)
			{
				cout<<1<<" "<<100000<<" "<<100000<<endl;
			}
			else if(left==1 && right==1 && down==0 && up==1)
			{
				cout<<1<<" "<<0<<" "<<100000<<endl;
			}
			else if(left==1 && right==1 && down==1 && up==0)
			{
				cout<<1<<" "<<0<<" "<<-100000<<endl;
			}
			else if(left==1 && right==0 && down==1 && up==1)
			{
				cout<<1<<" "<<-100000<<" "<<0<<endl;
			}
			else if(left==0 && right==1 && down==1 && up==1)
			{
				cout<<1<<" "<<100000<<" "<<0<<endl;
			}
		}
	}

	return 0;
}