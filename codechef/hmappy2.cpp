#include<iostream>
using namespace std;

int main()
{
	long t;
	cin>>t;
	while(t--)
	{
		long n, a, b, k;
		long count=0;
		cin>>n>>a>>b>>k;
		for(long i=1; i<=n; i++)
		{
			if(i%a==0 && i%b!=0)
				count++;
			else if(i%a!=0 && i%b==0)
				count++;
		}
		if(count>=k)
			cout<<"Win\n";
		else 
			cout<<"Lose\n";
	}
	
}