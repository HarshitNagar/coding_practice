#include<iostream>
#include<cmath>
using namespace std;
#define ll unsigned long long

int check(ll n)
{
	if(n==2)
		return 1;
	else if(n%2==0)
		return 0;
	else
	{
		for(ll i=3; i<=sqrt(n); i+=2)
		{
			if(n%i==0)
				return 0;
		}
	}
	return 1;
	
}

int main()
{
	ll t, x=31627, num, sq, input;
	string str;
	cin>>t;
	while(t--)
	{
		do
		{
			cout<<1<<" "<<x<<endl; 
			cin>>input; //93
			sq = 1000267129; //x*x;  
			//cout<<"sq "<<sq<<endl;
			num = sq - input;  //1000267036
			//cout<<"num "<<num<<endl;
			for(int p=2; p<=num; p++)
			{
				if(num%p==0 && sq%p==input)
				{
					if(check(p))
					{
						cout<<2<<" "<<p<<endl;
						cin>>str;
						if(str=="Yes")
							input=-1;
						else
							return 0;
					}
				}
			}

		}while(input!=-1);
	}
	return 0;
}