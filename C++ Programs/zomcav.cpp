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
		vector<ll>c(n);
		unordered_map<ll, ll>h;
		vector<ll>l(n, 0);
		priority_queue<ll, vector<ll>, greater<>>s;
		priority_queue<ll, vector<ll>, greater<>>e;
		ll s_i, e_i, inc=0;

		for(ll i=0; i<n; i++)
		{
			cin>>c[i];
			s_i = i+1-c[i];
			if(s_i<=0)
				s_i=1;
			e_i = i+2+c[i];
			if(e_i>n)
				e_i=n+1;
			s.push(s_i);
			//cout<<s_i<<" ";
			e.push(e_i);
			//cout<<e_i<<endl; 
		}

		ll temp;

		for(ll i=0; i<n; i++)
		{
			cin>>temp;
			if(h.find(temp)==h.end())
				h.insert(make_pair(temp, 1));
			else
				h[temp]++;
		}
		

		for(ll i=1; i<=n; i++)
		{
			if(inc==0)
			{
				i=min(s.top(), e.top());
			}
			while(!s.empty() && s.top()==i)
			{
				s.pop();
				inc++;
			}
			while(!e.empty() && e.top()==i)
			{
				e.pop();
				inc--;
			}
			l[i-1]+=inc;
		}
		bool flag=false;

		for(ll i=0; i<n; i++)
		{
			if(h.find(l[i])==h.end() || h.find(l[i])->second==0)
			{
				cout<<"NO"<<endl;
				flag=true;
				break;
			}
			else
			{
				if(h.find(l[i])->second==0)
					h.erase(l[i]);
				else
					h.find(l[i])->second--;
			}
		}
		if(flag==false)
		{
			cout<<"YES"<<endl;
		}
		
	}

	return 0;
}