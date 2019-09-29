#include<iostream>
#include<string>

using namespace std;

#define ll long long



int main()
{
	ll n;
	string s;
	string name;
	ll m;
	cin>>n;
	cin>>s;
	cin>>m;

	while(m--)

	{
		ll alpha[26]={0};
		cin>>name;
		ll sum=name.length();
		for(int i=0; i<name.length(); i++)
		{
			alpha[name[i]-97]++;
		}
		for(int i=0; i<s.length(); i++)
		{
			if(alpha[s[i]-97]>0)
			{
				alpha[s[i]-97]--;	
				sum--;
			}
			if(sum==0)
			{
				cout<<i+1<<endl;
				break;
			}
		}


	}
	return 0;
}