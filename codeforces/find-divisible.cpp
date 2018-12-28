#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin>>x>>y;
		int flag = 0;
		for(int i=x; i<y; i++)
		{
			for(int j=i+i; j<=y; j+=i)
			{
				if(j%i==0)
				{
					cout<<i<<" "<<j<<endl;
					flag = 1;
					break;
				}
			}
			if(flag==1)
				{
					break;
				}
		}
	}
	return 0;
}